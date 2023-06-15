
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DeleteDomainKeyChainRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DeleteDomainKeyChainRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  DeleteDomainKeyChainRequest
    : public ModelBase
{
public:
    DeleteDomainKeyChainRequest();
    virtual ~DeleteDomainKeyChainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteDomainKeyChainRequest members

    /// <summary>
    /// 直播域名，包括推流域名和播放域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);


protected:
    std::string domain_;
    bool domainIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDomainKeyChainRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDomainKeyChainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DeleteDomainKeyChainRequest_H_
