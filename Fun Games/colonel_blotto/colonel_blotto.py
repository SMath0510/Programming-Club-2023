import itertools

def allocate_soldiers(total_soldiers, total_towers, player):
    allocations = []
    remaining_soldiers = total_soldiers

    for i in range(total_towers - 1):
        max_allocation = min(remaining_soldiers, total_soldiers - (total_towers - i - 1))
        allocation = int(input(f"Player {player}, enter the number of soldiers for Tower {i + 1} (1-{max_allocation}): "))

        while allocation < 1 or allocation > max_allocation:
            print(f"Invalid input. Please enter a number between 1 and {max_allocation}.")
            allocation = int(input(f"Player {player}, enter the number of soldiers for Tower {i + 1} (1-{max_allocation}): "))

        allocations.append(allocation)
        remaining_soldiers -= allocation

    allocations.append(remaining_soldiers)
    return allocations

def play_game():
    total_soldiers = int(input("Enter the total number of soldiers: "))
    total_towers = int(input("Enter the total number of towers: "))
    total_players = int(input("Enter the number of players: "))

    # Store tower configurations for each player
    player_allocations_list = []

    for player in range(total_players):
        print(f"\nPlayer {player + 1}'s turn:")
        player_allocations = allocate_soldiers(total_soldiers, total_towers, player + 1)
        player_allocations_list.append(player_allocations)

    # Generate all pairwise combinations of players
    player_combinations = list(itertools.combinations(range(total_players), 2))

    # Count wins for each player
    player_wins = [0] * total_players

    for combination in player_combinations:
        player1, player2 = combination
        player1_allocations = player_allocations_list[player1]
        player2_allocations = player_allocations_list[player2]

        # Compare tower configurations and determine the winner of the pairwise comparison
        comparison_result = sum(1 for p1, p2 in zip(player1_allocations, player2_allocations) if p1 > p2)

        if comparison_result > total_towers // 2:
            player_wins[player1] += 1
        else:
            player_wins[player2] += 1

    print("\nRound Results:")
    for player in range(total_players):
        print(f"Player {player + 1} wins {player_wins[player]} pairwise comparisons.")

    round_winner = player_wins.index(max(player_wins)) + 1
    print(f"\nPlayer {round_winner} is the winner of the round!")

if __name__ == "__main__":
    play_game()
