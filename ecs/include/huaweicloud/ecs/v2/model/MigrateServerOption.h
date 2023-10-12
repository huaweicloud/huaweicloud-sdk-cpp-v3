
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_MigrateServerOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_MigrateServerOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 冷迁移云服务器请求结构
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  MigrateServerOption
    : public ModelBase
{
public:
    MigrateServerOption();
    virtual ~MigrateServerOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateServerOption members

    /// <summary>
    /// 专属主机ID。 当弹性云服务器从公共资源池迁移至专属主机上，或者弹性云服务器在专属主机之间迁移时，该字段生效。
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);


protected:
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_MigrateServerOption_H_
