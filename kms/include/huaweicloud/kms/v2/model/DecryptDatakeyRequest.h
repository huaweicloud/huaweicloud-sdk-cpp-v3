
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyRequest_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/DecryptDatakeyRequestBody.h>

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
class HUAWEICLOUD_KMS_V2_EXPORT  DecryptDatakeyRequest
    : public ModelBase
{
public:
    DecryptDatakeyRequest();
    virtual ~DecryptDatakeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DecryptDatakeyRequest members

    /// <summary>
    /// 
    /// </summary>

    DecryptDatakeyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DecryptDatakeyRequestBody& value);


protected:
    DecryptDatakeyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DecryptDatakeyRequest& dereference_from_shared_ptr(std::shared_ptr<DecryptDatakeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyRequest_H_
