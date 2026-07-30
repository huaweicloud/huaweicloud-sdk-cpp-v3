
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerCreateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerCreateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerDataVolume.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ServerNetwork.h>
#include <huaweicloud/modelarts/v1/model/EvsVolume.h>
#include <huaweicloud/modelarts/v1/model/ChargingInfo.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerCreateRequest
    : public ModelBase
{
public:
    ServerCreateRequest();
    virtual ~ServerCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerCreateRequest members

    /// <summary>
    /// **参数解释**：用于登录服务器的密码。admin_pass和key_pair_name必须二选一。密码规则： - 长度为8至26个字符 - 至少包含大写字母、小写字母、数字及特殊符号(!@%-_&#x3D;+[{}]:,./?)中的3种 - 不能与用户名或倒序的用户名相同 - 不能包含root或administrator及其逆序 **约束限制**：admin_pass和key_pair_name不能同时存在。 **取值范围**：长度为8至26个字符，满足上述密码规则。 **默认取值**：不涉及。
    /// </summary>

    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器规格架构类型。 **约束限制**：不涉及。 **取值范围**： - X86：CPU架构为X86 - ARM：CPU架构为ARM **默认取值**：不涉及。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器所在的可用区。 **约束限制**：不涉及。 **取值范围**：长度为1至256个字符，只能包含字母、数字、中划线、下划线和点。 **默认取值**：不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChargingInfo getChargingInfo() const;
    bool chargingInfoIsSet() const;
    void unsetchargingInfo();
    void setChargingInfo(const ChargingInfo& value);

    /// <summary>
    /// **参数解释**：单次购买的服务器数量。 **约束限制**：不支持超节点。 **取值范围**：1至10。 **默认取值**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：企业ID。 **约束限制**：不涉及。 **取值范围**：长度为1至36个字符，只能包含字母、数字、中划线、下划线和点。 **默认取值**：不涉及。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器规格名称。 **约束限制**：flavor和resource_flavor二选一。 **取值范围**：长度为1至128个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器资源规格名称。 **约束限制**：flavor和resource_flavor二选一。 **取值范围**：长度为1至256个字符，只能包含字母、数字、中划线、下划线和点。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器镜像ID。 **约束限制**：不涉及。 **取值范围**：长度为36个字符，符合UUID格式。 **默认取值**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器登录密钥对名称。admin_pass和key_pair_name必须二选一。注意超节点仅支持使用密钥对创建。 **约束限制**：admin_pass和key_pair_name不能同时存在。 **取值范围**：长度为1至64个字符，只能包含字母、数字、中划线、下划线和点。 **默认取值**：不涉及。
    /// </summary>

    std::string getKeyPairName() const;
    bool keyPairNameIsSet() const;
    void unsetkeyPairName();
    void setKeyPairName(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器名称。 **约束限制**：不涉及。 **取值范围**：长度为1至64个字符，只能包含字母、数字、中划线、下划线和点。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerNetwork getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const ServerNetwork& value);

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
    /// **参数解释**：服务器类型。 **约束限制**：不涉及。 **取值范围**： - BMS：裸金属服务 - ECS：弹性云服务 - HPS：超节点服务 **默认取值**：不涉及。
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建云服务器过程中待注入实例自定义数据。支持注入文本、文本文件。 示例： base64编码前： * Linux服务器： &#x60;&#x60;&#x60;bash #!/bin/bash echo user_test &gt; /home/user.txt &#x60;&#x60;&#x60; base64编码后： * Linux服务器： &#x60;&#x60;&#x60;bash IyEvYmluL2Jhc2gKZWNobyB1c2VyX3Rlc3QgPiAvaG9tZS91c2VyLnR4dA&#x3D;&#x3D; &#x60;&#x60;&#x60; 了解更多实例自定义数据注入请参考[[用户数据注入](https://support.huaweicloud.com/usermanual-ecs/zh-cn_topic_0032380449.html)](tag:hc)[[用户数据注入](https://support.huaweicloud.com/intl/zh-cn/usermanual-ecs/zh-cn_topic_0032380449.html)](tag:hk)[ECS服务“通过实例自定义数据配置ECS实例”章节](tag:fcs,hcso)。 用户需明确user_data的使用效果，可能产生的影响和风险由用户自行承担。 **约束限制**： - user_data的值为base64编码之后的内容。 - 注入内容（编码之前的内容）最大长度为32K。  **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点集群网络信息。仅在创建超节点时需要该参数。 **约束限制**：仅用于创建HPS类型的服务器。 **取值范围**：长度为36个字符，符合UUID格式。 **默认取值**：不涉及。
    /// </summary>

    std::string getHpsClusterId() const;
    bool hpsClusterIdIsSet() const;
    void unsethpsClusterId();
    void setHpsClusterId(const std::string& value);


protected:
    std::string adminPass_;
    bool adminPassIsSet_;
    std::string arch_;
    bool archIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    ChargingInfo chargingInfo_;
    bool chargingInfoIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string resourceFlavor_;
    bool resourceFlavorIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string keyPairName_;
    bool keyPairNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    ServerNetwork network_;
    bool networkIsSet_;
    EvsVolume rootVolume_;
    bool rootVolumeIsSet_;
    ServerDataVolume dataVolume_;
    bool dataVolumeIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string hpsClusterId_;
    bool hpsClusterIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerCreateRequest_H_
