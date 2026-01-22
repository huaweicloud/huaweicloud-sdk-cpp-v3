
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EipInfo
    : public ModelBase
{
public:
    EipInfo();
    virtual ~EipInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipInfo members

    /// <summary>
    /// **参数解释**： 弹性公网ID，可通过调用弹性IP列表查询获取，通过返回值中的data.records.id（.表示各对象之间层级的区分）获得 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getEipId() const;
    bool eipIdIsSet() const;
    void unseteipId();
    void setEipId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防护对象ID，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志ID，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，注意type为0的为互联网边界防护对象ID，type为1的为VPC边界防护对象ID。 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： IPV4地址  **约束限制**： 不涉及 **取值范围**： 不涉及   **默认取值**： 不涉及
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// **参数解释**： IPV6地址  **约束限制**： 不涉及 **取值范围**： 不涉及   **默认取值**： 不涉及
    /// </summary>

    std::string getPublicIpv6() const;
    bool publicIpv6IsSet() const;
    void unsetpublicIpv6();
    void setPublicIpv6(const std::string& value);

    /// <summary>
    /// **参数解释**： EIP白名单标志 **约束限制**： 不涉及 **取值范围**： 0表示是EIP白名单，1表示不是EIP白名单 **默认取值**： 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);


protected:
    std::string eipId_;
    bool eipIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string publicIpv6_;
    bool publicIpv6IsSet_;
    int32_t type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipInfo_H_
