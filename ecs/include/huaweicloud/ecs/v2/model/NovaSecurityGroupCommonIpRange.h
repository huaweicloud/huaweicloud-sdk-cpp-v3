
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonIpRange_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonIpRange_H_


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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaSecurityGroupCommonIpRange
    : public ModelBase
{
public:
    NovaSecurityGroupCommonIpRange();
    virtual ~NovaSecurityGroupCommonIpRange();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaSecurityGroupCommonIpRange members

    /// <summary>
    /// 对端IP网段，cidr格式。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);


protected:
    std::string cidr_;
    bool cidrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonIpRange_H_
