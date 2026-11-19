
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_TransferKeyRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_TransferKeyRequestBody_H_


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
/// 转移密钥请求体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  TransferKeyRequestBody
    : public ModelBase
{
public:
    TransferKeyRequestBody();
    virtual ~TransferKeyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferKeyRequestBody members

    /// <summary>
    /// **参数解释：** 待转移的密钥ID **约束限制：** 满足正则表达式^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 目标密钥空间ID **约束限制：** 满足正则表达式^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTargetKeyspaceId() const;
    bool targetKeyspaceIdIsSet() const;
    void unsettargetKeyspaceId();
    void setTargetKeyspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 转移模式 **约束限制：** ASSIGN模式仅支持对称密钥，且密钥必须未属于任何密钥空间，目标密钥空间类型需与密钥所属keystore类型匹配； **取值范围：** - ASSIGN：将密钥分配给目标密钥空间 **默认取值：** ASSIGN
    /// </summary>

    std::string getTransferMode() const;
    bool transferModeIsSet() const;
    void unsettransferMode();
    void setTransferMode(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string targetKeyspaceId_;
    bool targetKeyspaceIdIsSet_;
    std::string transferMode_;
    bool transferModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_TransferKeyRequestBody_H_
