
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainHttpsCertRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainHttpsCertRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/DomainHttpsCertInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateDomainHttpsCertRequest
    : public ModelBase
{
public:
    UpdateDomainHttpsCertRequest();
    virtual ~UpdateDomainHttpsCertRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainHttpsCertRequest members

    /// <summary>
    /// 直播播放域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DomainHttpsCertInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DomainHttpsCertInfo& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    DomainHttpsCertInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDomainHttpsCertRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDomainHttpsCertRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainHttpsCertRequest_H_
