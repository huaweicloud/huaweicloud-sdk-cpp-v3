
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/VerifyDomainOwnerRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  VerifyDomainOwnerRequest
    : public ModelBase
{
public:
    VerifyDomainOwnerRequest();
    virtual ~VerifyDomainOwnerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyDomainOwnerRequest members

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VerifyDomainOwnerRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VerifyDomainOwnerRequestBody& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    VerifyDomainOwnerRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    VerifyDomainOwnerRequest& dereference_from_shared_ptr(std::shared_ptr<VerifyDomainOwnerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerRequest_H_
