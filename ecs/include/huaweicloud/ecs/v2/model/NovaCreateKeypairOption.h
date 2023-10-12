
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaCreateKeypairOption
    : public ModelBase
{
public:
    NovaCreateKeypairOption();
    virtual ~NovaCreateKeypairOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaCreateKeypairOption members

    /// <summary>
    /// 导入的公钥信息。  建议导入的公钥长度不大于1024字节。  说明：  - 长度超过1024字节会导致云服务器注入该密钥失败。
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// 密钥类型，值为“ssh”或“x509”。  说明：  - 微版本2.2支持。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 密钥名称。  新创建的密钥名称不能和已有密钥名称相同。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 密钥的用户ID。  说明：  - 微版本2.10支持。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string userId_;
    bool userIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairOption_H_
