
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateDomainRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateDomainRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/DomainRealServerInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdateDomainRequest
    : public ModelBase
{
public:
    UpdateDomainRequest();
    virtual ~UpdateDomainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainRequest members

    /// <summary>
    /// 域名ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DomainRealServerInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DomainRealServerInfo& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    DomainRealServerInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDomainRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDomainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateDomainRequest_H_
