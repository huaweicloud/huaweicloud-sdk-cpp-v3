
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainParseIpRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainParseIpRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListDomainParseIpRequest
    : public ModelBase
{
public:
    ListDomainParseIpRequest();
    virtual ~ListDomainParseIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainParseIpRequest members

    /// <summary>
    /// **参数解释**： 地址类型 **约束限制**： 不涉及 **取值范围**： - 0：ipv4 - 1：ipv6 **默认取值**： 不涉及
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// **参数解释**： 域名id，域名id可通过[获取域名组下域名列表接口](ListDomains.xml)查询获得，通过返回值中的data.records.domain_address_id（.表示各对象之间层级的区分）获取 **约束限制**： 仅网络型域名组需填写此参数 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDomainAddressId() const;
    bool domainAddressIdIsSet() const;
    void unsetdomainAddressId();
    void setDomainAddressId(const std::string& value);

    /// <summary>
    /// **参数解释**： 域名组ID，可通过[查询域名组列表接口](ListDomainSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获取 **约束限制**： 仅网络型域名组需填写此参数 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDomainSetId() const;
    bool domainSetIdIsSet() const;
    void unsetdomainSetId();
    void setDomainSetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，配置后可根据企业项目过滤不同企业项目下的资产，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    int32_t addressType_;
    bool addressTypeIsSet_;
    std::string domainAddressId_;
    bool domainAddressIdIsSet_;
    std::string domainSetId_;
    bool domainSetIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDomainParseIpRequest& dereference_from_shared_ptr(std::shared_ptr<ListDomainParseIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainParseIpRequest_H_
