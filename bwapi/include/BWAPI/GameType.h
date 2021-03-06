#pragma once
#include <BWAPI/Type.h>

namespace BWAPI
{
  namespace GameTypes
  {
    /// Enumeration of game types
    namespace Enum
    {
      /// Enumeration of game types
      enum Enum
      {
        None = 0,
        Custom,          // Warcraft III
        Melee,
        Free_For_All,
        One_on_One,
        Capture_The_Flag,
        Greed,
        Slaughter,
        Sudden_Death,
        Ladder,
        Use_Map_Settings,
        Team_Melee,
        Team_Free_For_All,
        Team_Capture_The_Flag,
        Unknown_0x0E,
        Top_vs_Bottom,
        Iron_Man_Ladder,    // Warcraft II

        Pro_Gamer_League = 32,  // Not valid
        Unknown,
        MAX
      };
    };
  };
  class GameType : public Type<GameType, GameTypes::Enum::Unknown>
  {
    public:
      /// @copydoc Type::Type(int)
      GameType(int id = GameTypes::Enum::None);
  };
  /// Namespace containing game types
  namespace GameTypes
  {
    /// Retrieves the set of all the valid GameTypes.
    ///
    /// @returns Set of available GameTypes.
    const GameType::set& allGameTypes();
    
    extern const GameType Melee;
    extern const GameType Free_For_All;
    extern const GameType One_on_One;
    extern const GameType Capture_The_Flag;
    extern const GameType Greed;
    extern const GameType Slaughter;
    extern const GameType Sudden_Death;
    extern const GameType Ladder;
    extern const GameType Use_Map_Settings;
    extern const GameType Team_Melee;
    extern const GameType Team_Free_For_All;
    extern const GameType Team_Capture_The_Flag;
    extern const GameType Top_vs_Bottom;
    extern const GameType None;
    extern const GameType Unknown;
  }

  static_assert(sizeof(GameType) == sizeof(int), "Expected type to resolve to primitive size.");
}
