
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_MigrateServerRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_MigrateServerRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/MigrateServerOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  MigrateServerRequestBody
    : public ModelBase
{
public:
    MigrateServerRequestBody();
    virtual ~MigrateServerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateServerRequestBody members

    /// <summary>
    /// 
    /// </summary>

    MigrateServerOption getMigrate() const;
    bool migrateIsSet() const;
    void unsetmigrate();
    void setMigrate(const MigrateServerOption& value);


protected:
    MigrateServerOption migrate_;
    bool migrateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_MigrateServerRequestBody_H_
