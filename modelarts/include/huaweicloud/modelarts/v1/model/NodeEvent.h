
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeEvent_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeEvent_H_


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
/// **参数解释**：事件关联节点信息列表详情。 **取值范围**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeEvent
    : public ModelBase
{
public:
    NodeEvent();
    virtual ~NodeEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeEvent members

    /// <summary>
    /// **参数解释**：Iaas计划事件Id。 **取值范围**：不涉及。
    /// </summary>

    std::string getEventId() const;
    bool eventIdIsSet() const;
    void unseteventId();
    void setEventId(const std::string& value);

    /// <summary>
    /// **参数解释**：是否故障节点。 **取值范围**：不涉及。
    /// </summary>

    bool isIsFaultNode() const;
    bool isFaultNodeIsSet() const;
    void unsetisFaultNode();
    void setIsFaultNode(bool value);

    /// <summary>
    /// **参数解释**：节点名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// **参数解释**：节点ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// **参数解释**：底层实例Id。 **取值范围**：不涉及。
    /// </summary>

    std::string getUnderLyingInstanceId() const;
    bool underLyingInstanceIdIsSet() const;
    void unsetunderLyingInstanceId();
    void setUnderLyingInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点规格是否支持重部署。 **取值范围**：不涉及。
    /// </summary>

    bool isFlavorSupportRedeploy() const;
    bool flavorSupportRedeployIsSet() const;
    void unsetflavorSupportRedeploy();
    void setFlavorSupportRedeploy(bool value);

    /// <summary>
    /// **参数解释**：资源池名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池显示名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolDisplayName() const;
    bool poolDisplayNameIsSet() const;
    void unsetpoolDisplayName();
    void setPoolDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**：Iaas计划事件状态。 **取值范围**：不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**：Iaas事件发布时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getPublishTime() const;
    bool publishTimeIsSet() const;
    void unsetpublishTime();
    void setPublishTime(const std::string& value);

    /// <summary>
    /// **参数解释**：Iaas事件开始时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：Iaas事件完成时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// **参数解释**：重部署进度。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobProgress() const;
    bool jobProgressIsSet() const;
    void unsetjobProgress();
    void setJobProgress(const std::string& value);


protected:
    std::string eventId_;
    bool eventIdIsSet_;
    bool isFaultNode_;
    bool isFaultNodeIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string underLyingInstanceId_;
    bool underLyingInstanceIdIsSet_;
    bool flavorSupportRedeploy_;
    bool flavorSupportRedeployIsSet_;
    std::string poolName_;
    bool poolNameIsSet_;
    std::string poolDisplayName_;
    bool poolDisplayNameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string publishTime_;
    bool publishTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    std::string jobProgress_;
    bool jobProgressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeEvent_H_
