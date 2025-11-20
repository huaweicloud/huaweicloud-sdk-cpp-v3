
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodeList_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodeList_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AddNode.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重置节点参数。集群内已有节点，支持通过重置节点方式进行重新安装并接入集群，纳管过程将清理节点上系统盘、数据盘数据，并作为新节点接入Kuberntes集群，请提前备份迁移关键数据。 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddNodeList
    : public ModelBase
{
public:
    AddNodeList();
    virtual ~AddNodeList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddNodeList members

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 固定值，不允许修改 **取值范围**： 不涉及 **默认取值**： v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 固定值，不允许修改 **取值范围**： 不涉及 **默认取值**： List 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： 纳管节点列表，当前最多支持同时纳管200个节点。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::vector<AddNode>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<AddNode>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::vector<AddNode> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodeList_H_
