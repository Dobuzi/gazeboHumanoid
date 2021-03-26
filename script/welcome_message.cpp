#include <gazebo/gazebo.hh>

namespace gazebo {
  class WorldPluginHumanoid : public WorldPlugin {
    public: WorldPluginHumanoid() : WorldPlugin() {
      printf("Welcome to JW Kim's world! It's my apartment.\n");
    }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginHumanoid)
}
