
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelSelfGrantRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelSelfGrantRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/RevokeGrantRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CancelSelfGrantRequest
    : public ModelBase
{
public:
    CancelSelfGrantRequest();
    virtual ~CancelSelfGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelSelfGrantRequest members

    /// <summary>
    /// 
    /// </summary>

    RevokeGrantRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RevokeGrantRequestBody& value);


protected:
    RevokeGrantRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CancelSelfGrantRequest& dereference_from_shared_ptr(std::shared_ptr<CancelSelfGrantRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelSelfGrantRequest_H_
