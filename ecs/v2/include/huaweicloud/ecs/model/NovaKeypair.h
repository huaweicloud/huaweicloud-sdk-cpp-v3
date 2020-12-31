
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaKeypair_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaKeypair_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
///  
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  NovaKeypair
    : public ModelBase
{
public:
    NovaKeypair();
    virtual ~NovaKeypair();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaKeypair members

    /// <summary>
    /// 密钥对应指纹信息。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// 密钥名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 密钥对应publicKey信息。
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// 密钥对应privateKey信息。  - 创建SSH密钥时，响应中包括private_key的信息。 - 导入SSH密钥时，响应中不包括private_key的信息。
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// 密钥所属用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 密钥类型，默认“ssh”  微版本2.2以上支持
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string fingerprint_;
    bool fingerprintIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaKeypair_H_
