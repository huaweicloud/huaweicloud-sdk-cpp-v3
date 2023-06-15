
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/LiveDomainModifyReq.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateDomainRequest
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
    /// 
    /// </summary>

    LiveDomainModifyReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LiveDomainModifyReq& value);


protected:
    LiveDomainModifyReq body_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainRequest_H_
