
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNodeList_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNodeList_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/ResetNode.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 重置节点参数。 &gt; - 满足条件的已有服务器，支持通过纳管节点方式安装并接入集群。 &gt; - 重置过程将清理节点上系统盘、数据盘数据，并作为新节点接入Kuberntes集群，请提前备份迁移关键数据。 &gt; - 其中节点池内节点重置时不支持外部指定配置，将以节点池配置进行校验并重装，以保证同节点池节点一致性。  **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ResetNodeList
    : public ModelBase
{
public:
    ResetNodeList();
    virtual ~ResetNodeList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetNodeList members

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 不允许修改 **取值范围**： 不涉及 **默认取值**： v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 不允许修改 **取值范围**： 不涉及 **默认取值**： List 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 不允许修改 **取值范围**： 不涉及 **默认取值**： List 
    /// </summary>

    std::vector<ResetNode>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<ResetNode>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::vector<ResetNode> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNodeList_H_
