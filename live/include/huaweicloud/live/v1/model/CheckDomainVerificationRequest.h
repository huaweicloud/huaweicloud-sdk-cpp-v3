
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CheckDomainVerificationInfo.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  CheckDomainVerificationRequest
    : public ModelBase
{
public:
    CheckDomainVerificationRequest();
    virtual ~CheckDomainVerificationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckDomainVerificationRequest members

    /// <summary>
    /// 
    /// </summary>

    CheckDomainVerificationInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CheckDomainVerificationInfo& value);


protected:
    CheckDomainVerificationInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckDomainVerificationRequest& dereference_from_shared_ptr(std::shared_ptr<CheckDomainVerificationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationRequest_H_
