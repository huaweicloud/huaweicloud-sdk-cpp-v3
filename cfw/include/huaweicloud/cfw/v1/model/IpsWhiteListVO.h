
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhiteListVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhiteListVO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsWhiteListVO
    : public ModelBase
{
public:
    IpsWhiteListVO();
    virtual ~IpsWhiteListVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsWhiteListVO members

    /// <summary>
    /// **参数解释**： 白名单源地址 **取值范围**： 不涉及
    /// </summary>

    std::string getSourceAddress() const;
    bool sourceAddressIsSet() const;
    void unsetsourceAddress();
    void setSourceAddress(const std::string& value);

    /// <summary>
    /// **参数解释**：  目的地址  **取值范围**：  不涉及
    /// </summary>

    std::string getDestAddress() const;
    bool destAddressIsSet() const;
    void unsetdestAddress();
    void setDestAddress(const std::string& value);

    /// <summary>
    /// **参数解释**：  白名单名称  **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  IPS白名单ID  **取值范围**： 不涉及
    /// </summary>

    std::string getListId() const;
    bool listIdIsSet() const;
    void unsetlistId();
    void setListId(const std::string& value);

    /// <summary>
    /// **参数解释**：  生效范围：NAT EIP VPC HCS场景中还有VGW信息  **取值范围**： 不涉及
    /// </summary>

    std::vector<std::string>& getEffectiveScopes();
    bool effectiveScopesIsSet() const;
    void unseteffectiveScopes();
    void setEffectiveScopes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  生效范围：IPS规则ID，all代表所有IPS **取值范围**： 不涉及
    /// </summary>

    std::string getIpsId() const;
    bool ipsIdIsSet() const;
    void unsetipsId();
    void setIpsId(const std::string& value);

    /// <summary>
    /// **参数解释**：  IP类型 **取值范围**：  4：表示IP类型为IPv4 6：表示IP类型为IPv6
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// **参数解释**：  白名单描述 **取值范围**： 不涉及
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
    std::string name_;
    bool nameIsSet_;
    std::string listId_;
    bool listIdIsSet_;
    std::vector<std::string> effectiveScopes_;
    bool effectiveScopesIsSet_;
    std::string ipsId_;
    bool ipsIdIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhiteListVO_H_
