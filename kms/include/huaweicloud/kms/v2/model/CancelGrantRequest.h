
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelGrantRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelGrantRequest_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  CancelGrantRequest
    : public ModelBase
{
public:
    CancelGrantRequest();
    virtual ~CancelGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelGrantRequest members

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
    CancelGrantRequest& dereference_from_shared_ptr(std::shared_ptr<CancelGrantRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelGrantRequest_H_
