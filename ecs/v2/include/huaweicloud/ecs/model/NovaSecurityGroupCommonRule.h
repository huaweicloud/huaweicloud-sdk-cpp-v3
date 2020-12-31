
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonRule_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonRule_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/NovaSecurityGroupCommonIpRange.h"
#include "huaweicloud/ecs/model/NovaSecurityGroupCommonGroup.h"
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
class HUAWEICLOUD_ECS_EXPORT  NovaSecurityGroupCommonRule
    : public ModelBase
{
public:
    NovaSecurityGroupCommonRule();
    virtual ~NovaSecurityGroupCommonRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaSecurityGroupCommonRule members

    /// <summary>
    /// 起始端口，范围1-65535，且不大于to_port。 ip_protocol设置为icmp时，from_port表示type，范围是0-255。
    /// </summary>

    int32_t getFromPort() const;
    bool fromPortIsSet() const;
    void unsetfromPort();
    void setFromPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    NovaSecurityGroupCommonGroup getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const NovaSecurityGroupCommonGroup& value);

    /// <summary>
    /// 安全组规则ID，UUID格式。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 协议类型或直接指定IP协议号，取值可为icmp，tcp，udp或IP协议号。
    /// </summary>

    std::string getIpProtocol() const;
    bool ipProtocolIsSet() const;
    void unsetipProtocol();
    void setIpProtocol(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NovaSecurityGroupCommonIpRange getIpRange() const;
    bool ipRangeIsSet() const;
    void unsetipRange();
    void setIpRange(const NovaSecurityGroupCommonIpRange& value);

    /// <summary>
    /// 相关联的安全组ID，UUID格式。
    /// </summary>

    std::string getParentGroupId() const;
    bool parentGroupIdIsSet() const;
    void unsetparentGroupId();
    void setParentGroupId(const std::string& value);

    /// <summary>
    /// 终止端口，范围1-65535，且不小于from_port。 ip_protocol设置为icmp时，to_port表示code，范围是0-255，且如果from_port为-1，to_port为-1表示任意ICMP报文。
    /// </summary>

    int32_t getToPort() const;
    bool toPortIsSet() const;
    void unsettoPort();
    void setToPort(int32_t value);


protected:
    int32_t fromPort_;
    bool fromPortIsSet_;
    NovaSecurityGroupCommonGroup group_;
    bool groupIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string ipProtocol_;
    bool ipProtocolIsSet_;
    NovaSecurityGroupCommonIpRange ipRange_;
    bool ipRangeIsSet_;
    std::string parentGroupId_;
    bool parentGroupIdIsSet_;
    int32_t toPort_;
    bool toPortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonRule_H_
