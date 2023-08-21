
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantRequest_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/CreateGrantRequestBody.h>

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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateGrantRequest
    : public ModelBase
{
public:
    CreateGrantRequest();
    virtual ~CreateGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateGrantRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateGrantRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateGrantRequestBody& value);


protected:
    CreateGrantRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateGrantRequest& dereference_from_shared_ptr(std::shared_ptr<CreateGrantRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantRequest_H_
