
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ReplicateKeyRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ReplicateKeyRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kms/v2/model/ReplicateKeyRequestBody.h>

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
class HUAWEICLOUD_KMS_V2_EXPORT  ReplicateKeyRequest
    : public ModelBase
{
public:
    ReplicateKeyRequest();
    virtual ~ReplicateKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplicateKeyRequest members

    /// <summary>
    /// 待复制的密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReplicateKeyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReplicateKeyRequestBody& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    ReplicateKeyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ReplicateKeyRequest& dereference_from_shared_ptr(std::shared_ptr<ReplicateKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ReplicateKeyRequest_H_
