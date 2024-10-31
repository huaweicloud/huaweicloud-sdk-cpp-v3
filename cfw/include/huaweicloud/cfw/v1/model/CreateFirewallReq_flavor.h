
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_flavor_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_flavor_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 防火墙规格信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateFirewallReq_flavor
    : public ModelBase
{
public:
    CreateFirewallReq_flavor();
    virtual ~CreateFirewallReq_flavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFirewallReq_flavor members

    /// <summary>
    /// 防火墙版本 “charge_mode”为“prePaid”时，支持标准版、专业版。 “charge_mode”为“postPaid”时，仅支持专业版。  Standard - 标准版 Professional - 专业版
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 扩展EIP数量，仅包周期场景下生效，当用户需要在增加EIP使用时需要使用此参数。
    /// </summary>

    int32_t getExtendEipCount() const;
    bool extendEipCountIsSet() const;
    void unsetextendEipCount();
    void setExtendEipCount(int32_t value);

    /// <summary>
    /// 扩展带宽，步长为5，仅包周期场景下生效，当用户需要在增加带宽使用时需要使用此参数。
    /// </summary>

    int32_t getExtendBandwidth() const;
    bool extendBandwidthIsSet() const;
    void unsetextendBandwidth();
    void setExtendBandwidth(int32_t value);

    /// <summary>
    /// 扩展VPC数量，仅包周期场景下生效，当用户需要增加VPC使用时需要使用此参数。
    /// </summary>

    int32_t getExtendVpcCount() const;
    bool extendVpcCountIsSet() const;
    void unsetextendVpcCount();
    void setExtendVpcCount(int32_t value);


protected:
    std::string version_;
    bool versionIsSet_;
    int32_t extendEipCount_;
    bool extendEipCountIsSet_;
    int32_t extendBandwidth_;
    bool extendBandwidthIsSet_;
    int32_t extendVpcCount_;
    bool extendVpcCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_flavor_H_
