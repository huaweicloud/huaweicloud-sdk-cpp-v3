
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/UpdateKeyStoreRequestBody.h>
#include <string>

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
class HUAWEICLOUD_KMS_V2_EXPORT  UpdateKeyStoreRequest
    : public ModelBase
{
public:
    UpdateKeyStoreRequest();
    virtual ~UpdateKeyStoreRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeyStoreRequest members

    /// <summary>
    /// **参数解释：** 密钥库ID **约束限制：** 满足正则表达式\&quot;[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$\&quot; **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateKeyStoreRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateKeyStoreRequestBody& value);


protected:
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    UpdateKeyStoreRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateKeyStoreRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateKeyStoreRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreRequest_H_
