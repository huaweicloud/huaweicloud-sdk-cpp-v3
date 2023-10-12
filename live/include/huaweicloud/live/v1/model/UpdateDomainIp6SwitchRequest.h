
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainIp6SwitchRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainIp6SwitchRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/DomainIpv6SwitchReq.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateDomainIp6SwitchRequest
    : public ModelBase
{
public:
    UpdateDomainIp6SwitchRequest();
    virtual ~UpdateDomainIp6SwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainIp6SwitchRequest members

    /// <summary>
    /// 
    /// </summary>

    DomainIpv6SwitchReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DomainIpv6SwitchReq& value);


protected:
    DomainIpv6SwitchReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDomainIp6SwitchRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDomainIp6SwitchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainIp6SwitchRequest_H_
