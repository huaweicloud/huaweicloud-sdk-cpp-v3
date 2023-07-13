
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateDomainRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateDomainRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/LiveDomainCreateReq.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateDomainRequest
    : public ModelBase
{
public:
    CreateDomainRequest();
    virtual ~CreateDomainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDomainRequest members

    /// <summary>
    /// 
    /// </summary>

    LiveDomainCreateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LiveDomainCreateReq& value);


protected:
    LiveDomainCreateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDomainRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDomainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateDomainRequest_H_
