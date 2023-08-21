
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelKeyDeletionResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelKeyDeletionResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_KMS_V2_EXPORT  CancelKeyDeletionResponse
    : public ModelBase, public HttpResponse
{
public:
    CancelKeyDeletionResponse();
    virtual ~CancelKeyDeletionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CancelKeyDeletionResponse members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥状态： - 2为启用状态 - 3为禁用状态 - 4为计划删除状态 - 5为等待导入状态 - 7为冻结状态
    /// </summary>

    std::string getKeyState() const;
    bool keyStateIsSet() const;
    void unsetkeyState();
    void setKeyState(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keyState_;
    bool keyStateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CancelKeyDeletionResponse_H_
