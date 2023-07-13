
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainKeyChainRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainKeyChainRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/KeyChainInfo.h>
#include <string>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateDomainKeyChainRequest
    : public ModelBase
{
public:
    UpdateDomainKeyChainRequest();
    virtual ~UpdateDomainKeyChainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDomainKeyChainRequest members

    /// <summary>
    /// 直播域名，包括推流域名和播放域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    KeyChainInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const KeyChainInfo& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    KeyChainInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDomainKeyChainRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDomainKeyChainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainKeyChainRequest_H_
