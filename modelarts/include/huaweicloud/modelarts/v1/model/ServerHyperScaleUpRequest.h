
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHyperScaleUpRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHyperScaleUpRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerDataVolume.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/EvsVolume.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerHyperScaleUpRequest
    : public ModelBase
{
public:
    ServerHyperScaleUpRequest();
    virtual ~ServerHyperScaleUpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerHyperScaleUpRequest members

    /// <summary>
    /// **参数解释**：服务器规格名称。 **约束限制**：不涉及。 **取值范围**：长度为1至128个字符，只能包含字母和数字及点。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EvsVolume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const EvsVolume& value);

    /// <summary>
    /// 
    /// </summary>

    ServerDataVolume getDataVolume() const;
    bool dataVolumeIsSet() const;
    void unsetdataVolume();
    void setDataVolume(const ServerDataVolume& value);

    /// <summary>
    /// **参数解释**：服务器镜像ID。 **约束限制**：不涉及。 **取值范围**：长度为36个字符，符合UUID格式。 **默认取值**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建云服务器过程中待注入实例自定义数据。支持注入文本、文本文件。 示例： base64编码前： * Linux服务器： &#x60;&#x60;&#x60;bash #!/bin/bash echo user_test &gt; /home/user.txt &#x60;&#x60;&#x60; base64编码后： * Linux服务器： &#x60;&#x60;&#x60;bash IyEvYmluL2Jhc2gKZWNobyB1c2VyX3Rlc3QgPiAvaG9tZS91c2VyLnR4dA&#x3D;&#x3D; &#x60;&#x60;&#x60; 了解更多实例自定义数据注入请参考[[用户数据注入](https://support.huaweicloud.com/usermanual-ecs/zh-cn_topic_0032380449.html)](tag:hc)[[用户数据注入](https://support.huaweicloud.com/intl/zh-cn/usermanual-ecs/zh-cn_topic_0032380449.html)][ECS服务“通过实例自定义数据配置ECS实例”章节](tag:fcs,hcso)。 用户需明确user_data的使用效果，可能产生的影响和风险由用户自行承担。 **约束限制**： - user_data的值为base64编码之后的内容。 - 注入内容（编码之前的内容）最大长度为32K。  **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserdata() const;
    bool userdataIsSet() const;
    void unsetuserdata();
    void setUserdata(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器登录密钥对名称。admin_pass和key_pair_name必须二选一。注意超节点扩容仅支持使用密钥对创建。 **约束限制**：admin_pass和key_pair_name不能同时存在。 **取值范围**：长度为1至64个字符，只能包含字母、数字、中划线、下划线和点。 **默认取值**：不涉及。
    /// </summary>

    std::string getKeyPairName() const;
    bool keyPairNameIsSet() const;
    void unsetkeyPairName();
    void setKeyPairName(const std::string& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    EvsVolume rootVolume_;
    bool rootVolumeIsSet_;
    ServerDataVolume dataVolume_;
    bool dataVolumeIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string userdata_;
    bool userdataIsSet_;
    std::string keyPairName_;
    bool keyPairNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHyperScaleUpRequest_H_
