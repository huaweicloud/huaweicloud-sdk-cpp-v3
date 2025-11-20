
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  HyperNodeStatus
    : public ModelBase
{
public:
    HyperNodeStatus();
    virtual ~HyperNodeStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperNodeStatus members

    /// <summary>
    /// **参数解释** 超节点状态 **取值范围** - provisioning: 创建中。 - active: 整体可用，代表超节点下所有节点都可用。 - partially-available: 超节点下存在不可用节点时会从 active 转成此状态。 - error: 错误状态。 - deleting: 删除中。 - reinstalling: 重置中。 - scaling: 扩容或缩容中。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释** 超节点实例 ID
    /// </summary>

    std::string getInstanceID() const;
    bool instanceIDIsSet() const;
    void unsetinstanceID();
    void setInstanceID(const std::string& value);

    /// <summary>
    /// **参数解释** 超节点下节点总数
    /// </summary>

    int32_t getCurrentNode() const;
    bool currentNodeIsSet() const;
    void unsetcurrentNode();
    void setCurrentNode(int32_t value);

    /// <summary>
    /// **参数解释** 超节点下处于删除中的节点数
    /// </summary>

    int32_t getDeletingNode() const;
    bool deletingNodeIsSet() const;
    void unsetdeletingNode();
    void setDeletingNode(int32_t value);

    /// <summary>
    /// **参数解释** 超节点下处于创建中的节点数
    /// </summary>

    int32_t getCreatingNode() const;
    bool creatingNodeIsSet() const;
    void unsetcreatingNode();
    void setCreatingNode(int32_t value);

    /// <summary>
    /// **参数解释** 超节点下处于可用状态的节点数
    /// </summary>

    int32_t getActiveNode() const;
    bool activeNodeIsSet() const;
    void unsetactiveNode();
    void setActiveNode(int32_t value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string instanceID_;
    bool instanceIDIsSet_;
    int32_t currentNode_;
    bool currentNodeIsSet_;
    int32_t deletingNode_;
    bool deletingNodeIsSet_;
    int32_t creatingNode_;
    bool creatingNodeIsSet_;
    int32_t activeNode_;
    bool activeNodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeStatus_H_
