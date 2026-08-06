
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DecryptDatakeyCapsuleResponse
    : public ModelBase, public HttpResponse
{
public:
    DecryptDatakeyCapsuleResponse();
    virtual ~DecryptDatakeyCapsuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DecryptDatakeyCapsuleResponse members

    /// <summary>
    /// **参数解释：** 密钥ID **取值范围：** 不涉及
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 解密胶囊所在的实例ID **取值范围：** ECS ID，CCE的集群ID或者通用场景的access_point_id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** datakey和datakey_cipher响应二选一，如果请求参数中没传递public_key，则返回datakey **取值范围：** 不涉及
    /// </summary>

    std::string getDatakey() const;
    bool datakeyIsSet() const;
    void unsetdatakey();
    void setDatakey(const std::string& value);

    /// <summary>
    /// **参数解释：** datakey和datakey_cipher响应二选一，如果请求参数中传递了public_key，使用public_key加密datakey后返回datakey_cipher **取值范围：** 不涉及
    /// </summary>

    std::string getDatakeyCipher() const;
    bool datakeyCipherIsSet() const;
    void unsetdatakeyCipher();
    void setDatakeyCipher(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string datakey_;
    bool datakeyIsSet_;
    std::string datakeyCipher_;
    bool datakeyCipherIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleResponse_H_
