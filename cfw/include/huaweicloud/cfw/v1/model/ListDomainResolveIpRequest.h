
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainResolveIpRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainResolveIpRequest_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  ListDomainResolveIpRequest
    : public ModelBase
{
public:
    ListDomainResolveIpRequest();
    virtual ~ListDomainResolveIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainResolveIpRequest members

    /// <summary>
    /// **参数解释**： 解析ip类型IPV4或IPV6 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(const std::string& value);

    /// <summary>
    /// **参数解释**： 域名id **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDomainAddressId() const;
    bool domainAddressIdIsSet() const;
    void unsetdomainAddressId();
    void setDomainAddressId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);


protected:
    std::string addressType_;
    bool addressTypeIsSet_;
    std::string domainAddressId_;
    bool domainAddressIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDomainResolveIpRequest& dereference_from_shared_ptr(std::shared_ptr<ListDomainResolveIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainResolveIpRequest_H_
