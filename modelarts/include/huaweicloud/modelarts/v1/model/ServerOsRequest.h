
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerOsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerOsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Lite Server操作系统镜像相关操作请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerOsRequest
    : public ModelBase
{
public:
    ServerOsRequest();
    virtual ~ServerOsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerOsRequest members

    /// <summary>
    /// **参数解释**：用于登录服务器密码。注意弹性云服务器和裸金属服务器admin_pass和key_pair_name必须二选一，超节点不支持admin_pass。 **约束限制**：密码规则： - 长度为8至26个 - 至少包含大写字母、小写字母、数字及特殊符号(!@%-_&#x3D;+[{}]:,./?)中的3种 - 不能与用户名或倒序的用户名相同 - 不能包含root或administrator及其逆序 **取值范围**：不涉及 **默认取值**：不涉及
    /// </summary>

    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器登录密钥对名称。注意admin_pass和key_pair_name必须二选一。 **约束限制**：不涉及。 **取值范围**：不涉及 **默认取值**：不涉及
    /// </summary>

    std::string getKeyPairName() const;
    bool keyPairNameIsSet() const;
    void unsetkeyPairName();
    void setKeyPairName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像ID，切换操作系统场景，该参数必填。 **约束限制**：不涉及。 **取值范围**：不涉及 **默认取值**：不涉及
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建云服务器过程中待注入实例自定义数据。支持注入文本、文本文件。 示例： base64编码前： * Linux服务器： &#x60;&#x60;&#x60;bash #!/bin/bash echo user_test &gt; /home/user.txt &#x60;&#x60;&#x60; base64编码后： * Linux服务器： &#x60;&#x60;&#x60;bash IyEvYmluL2Jhc2gKZWNobyB1c2VyX3Rlc3QgPiAvaG9tZS91c2VyLnR4dA&#x3D;&#x3D; &#x60;&#x60;&#x60; 了解更多实例自定义数据注入请参考[[用户数据注入](https://support.huaweicloud.com/usermanual-ecs/zh-cn_topic_0032380449.html)](tag:hc)[[用户数据注入](https://support.huaweicloud.com/intl/zh-cn/usermanual-ecs/zh-cn_topic_0032380449.html)][ECS服务“通过实例自定义数据配置ECS实例”章节](tag:fcs,hcso)。 用户需明确user_data的使用效果，可能产生的影响和风险由用户自行承担。 **约束限制**： - user_data的值为base64编码之后的内容。 - 注入内容（编码之前的内容）最大长度为32K。  **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::string adminPass_;
    bool adminPassIsSet_;
    std::string keyPairName_;
    bool keyPairNameIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string userData_;
    bool userDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerOsRequest_H_
