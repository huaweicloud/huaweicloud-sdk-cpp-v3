
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowKmsKeyResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowKmsKeyResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ShowKmsKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKmsKeyResponse();
    virtual ~ShowKmsKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKmsKeyResponse members

    /// <summary>
    /// 在DEW服务上创建的用户主密钥对应的密钥ID，具体参考在DEW服务上创建密钥章节。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥的状态字段，为枚举类型。 - ENABLED状态为密钥启用状态，此时发布的消息均使用该主密钥创建的数据密钥进行加解密。 - TO_BE_ACTIVATED状态为密钥待激活状态，当密钥未激活时，发布主题消息会返回失败，请前往DEW服务对密钥进行操作。 - DISABLED状态为密钥禁用状态，当密钥已被禁用时，发布主题消息会返回失败，请前往DEW服务对密钥进行操作。 - PENDING_DELETION状态为密钥计划删除状态，当密钥已被计划删除时，发布主题消息仍能正常使用该密钥。 - PENDING_IMPORT状态为密钥计划导入状态，当密钥计划导入时，发布主题消息会返回失败，请前往DEW服务对密钥进行操作。 - DELETED状态为密钥已删除状态，当密钥已删除后，SMN无法从DEW服务处获取有效的密钥，此时发布主题消息会返回失败，请重新在主题下配置可用的密钥。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 密钥对应的资源ID，该ID由SMN服务生成。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowKmsKeyResponse_H_
