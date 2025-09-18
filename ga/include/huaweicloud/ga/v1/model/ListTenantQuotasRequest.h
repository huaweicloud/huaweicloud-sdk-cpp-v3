
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListTenantQuotasRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListTenantQuotasRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListTenantQuotasRequest
    : public ModelBase
{
public:
    ListTenantQuotasRequest();
    virtual ~ListTenantQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantQuotasRequest members

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTenantQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ListTenantQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListTenantQuotasRequest_H_
