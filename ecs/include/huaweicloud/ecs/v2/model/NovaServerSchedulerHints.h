
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerSchedulerHints_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerSchedulerHints_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaServerSchedulerHints
    : public ModelBase
{
public:
    NovaServerSchedulerHints();
    virtual ~NovaServerSchedulerHints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerSchedulerHints members

    /// <summary>
    /// 在指定的专属主机或者共享主机上创建弹性云服务器。 参数值为shared或者dedicated。
    /// </summary>

    std::vector<std::string>& getTenancy();
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::vector<std::string>& value);

    /// <summary>
    /// 专属主机ID。 此属性仅在tenancy值为dedicated时有效。
    /// </summary>

    std::vector<std::string>& getDedicatedHostId();
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> tenancy_;
    bool tenancyIsSet_;
    std::vector<std::string> dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerSchedulerHints_H_
