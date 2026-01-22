
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhiteListDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhiteListDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量创建ips白名单请求体
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsWhiteListDto
    : public ModelBase
{
public:
    IpsWhiteListDto();
    virtual ~IpsWhiteListDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsWhiteListDto members

    /// <summary>
    /// **参数解释**：  源地址  **约束限制**：  不涉及  **取值范围**：  不涉及  **默认取值**：  不涉及
    /// </summary>

    std::string getSourceAddress() const;
    bool sourceAddressIsSet() const;
    void unsetsourceAddress();
    void setSourceAddress(const std::string& value);

    /// <summary>
    /// **参数解释**：  目的地址  **约束限制**：  不涉及  **取值范围**：  不涉及  **默认取值**：  不涉及
    /// </summary>

    std::string getDestAddress() const;
    bool destAddressIsSet() const;
    void unsetdestAddress();
    void setDestAddress(const std::string& value);

    /// <summary>
    /// **参数解释**：  IP类型 **约束限制**：  不涉及  **取值范围**：  4：表示IP类型为IPv4 6：表示IP类型为IPv6 **默认取值**：  不涉及
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// **参数解释**：  白名单名称  **约束限制**：  不涉及  **取值范围**： 不涉及  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  IPS规则ID，all代表所有IPS  **约束限制**：  不涉及  **取值范围**： 不涉及  **默认取值**：  不涉及
    /// </summary>

    std::string getIpsId() const;
    bool ipsIdIsSet() const;
    void unsetipsId();
    void setIpsId(const std::string& value);

    /// <summary>
    /// **参数解释**：  生效范围：NAT EIP VPC HCS场景中还有VGW信息 **约束限制**：  不涉及  **取值范围**： 不涉及  **默认取值**：  不涉及
    /// </summary>

    std::vector<std::string>& getEffectiveScopes();
    bool effectiveScopesIsSet() const;
    void unseteffectiveScopes();
    void setEffectiveScopes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  白名单描述 **约束限制**：  不涉及  **取值范围**： 不涉及  **默认取值**：  不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string sourceAddress_;
    bool sourceAddressIsSet_;
    std::string destAddress_;
    bool destAddressIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string ipsId_;
    bool ipsIdIsSet_;
    std::vector<std::string> effectiveScopes_;
    bool effectiveScopesIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhiteListDto_H_
