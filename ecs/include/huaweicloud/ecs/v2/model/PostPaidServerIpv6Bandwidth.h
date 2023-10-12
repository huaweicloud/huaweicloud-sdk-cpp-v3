
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerIpv6Bandwidth_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerIpv6Bandwidth_H_


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
/// IPV6共享带宽。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  PostPaidServerIpv6Bandwidth
    : public ModelBase
{
public:
    PostPaidServerIpv6Bandwidth();
    virtual ~PostPaidServerIpv6Bandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostPaidServerIpv6Bandwidth members

    /// <summary>
    /// 绑定的共享带宽ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerIpv6Bandwidth_H_
