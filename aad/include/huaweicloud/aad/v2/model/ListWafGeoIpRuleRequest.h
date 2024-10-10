
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafGeoIpRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafGeoIpRuleRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListWafGeoIpRuleRequest
    : public ModelBase
{
public:
    ListWafGeoIpRuleRequest();
    virtual ~ListWafGeoIpRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWafGeoIpRuleRequest members

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 防护区域，0-大陆，1-海外
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWafGeoIpRuleRequest& dereference_from_shared_ptr(std::shared_ptr<ListWafGeoIpRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafGeoIpRuleRequest_H_
