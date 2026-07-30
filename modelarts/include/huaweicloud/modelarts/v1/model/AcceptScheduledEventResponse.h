
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AcceptScheduledEventResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AcceptScheduledEventResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AcceptScheduledEventResponse
    : public ModelBase, public HttpResponse
{
public:
    AcceptScheduledEventResponse();
    virtual ~AcceptScheduledEventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AcceptScheduledEventResponse members

    /// <summary>
    /// **参数解释**：计划事件ID，取值查询计划事件列表接口的event_id字段。 系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，长度小于63。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：事件分类。 **取值范围**：可选值如下： - hardware：硬件维修。 - software：软件维修。
    /// </summary>

    std::string getCatalog() const;
    bool catalogIsSet() const;
    void unsetcatalog();
    void setCatalog(const std::string& value);

    /// <summary>
    /// **参数解释**：事件类型。 **取值范围**：可选值如下： - system-maintenance：系统维护 - localdisk-recovery：本地盘恢复 - node_reboot：节点重启 - operation-request：运维授权 - node_maintenance：超节点维护 - node_redeploy：超节点重部署 - node_localdisk_recovery 超节点本地盘恢复。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：对计划事件的描述信息。系统自动生成。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：事件状态。 **取值范围**：可选择值如下： - inquiring: 待授权, - scheduled: 待执行, - executing: 执行中, - completed: 执行成功 - failed: 执行失败 - canceled: 取消
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**：节点类型归属。 **取值范围**可选择值如下： - devserver：lite-server节点 - lite-cluster lite池 - standard 标准池
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器ID。计算服务系统自动生成的实例ID，长度小于63。 **取值范围**：不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点名称，取值自节点详情的metadata.name字段。系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，小于63个字符。 **取值范围**：不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池名称, lite-cluster、standard才具有，取值自资源池详情的metadata.name字段。系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，小于63个字符。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池对外显示的名称, lite-cluster、standard才具有，取值自资源池详情的metadata.name字段。只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长度为[36-63]个字符。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolDisplayName() const;
    bool poolDisplayNameIsSet() const;
    void unsetpoolDisplayName();
    void setPoolDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**：事件发布时间。 **约束限制**：格式为UTC时间字符串：2025-09-15T07:02:30Z。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPublishTime() const;
    bool publishTimeIsSet() const;
    void unsetpublishTime();
    void setPublishTime(const std::string& value);

    /// <summary>
    /// **参数解释**：事件开始时间。 **约束限制**：格式为UTC时间字符串：2025-09-15T07:02:30Z。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：事件完成时间。 **约束限制**：格式为UTC时间字符串：2025-09-15T07:02:30Z。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// **参数解释**：事件计划执行开始时间，格式为UTC时间字符串：2025-09-15T07:02:30Z。 **约束限制**：大于当前时间。 **取值范围**：不涉及。 **默认取值**：不填表示立即执行。
    /// </summary>

    std::string getNotBefore() const;
    bool notBeforeIsSet() const;
    void unsetnotBefore();
    void setNotBefore(const std::string& value);

    /// <summary>
    /// **参数解释**：提示信息。 **约束限制**：系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，长度小于63字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getProbeMsg() const;
    bool probeMsgIsSet() const;
    void unsetprobeMsg();
    void setProbeMsg(const std::string& value);

    /// <summary>
    /// **参数解释**：计划事件执行的实时进度信息，系统自动生成。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getJobProgress() const;
    bool jobProgressIsSet() const;
    void unsetjobProgress();
    void setJobProgress(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的重部署类型。 **约束限制**：不涉及。 **取值范围**：可选值如下：- HARD：表示支持强制重部署, - SOFT：表示支持重部署 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getRedeployType();
    bool redeployTypeIsSet() const;
    void unsetredeployType();
    void setRedeployType(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：snt9b23 场景对应ECS服务器ID。计算服务系统自动生成的实例ID，长度小于63。  **取值范围**：snt9b23 涉及, snt9b 不涉及。
    /// </summary>

    std::string getUnderLyingInstanceId() const;
    bool underLyingInstanceIdIsSet() const;
    void unsetunderLyingInstanceId();
    void setUnderLyingInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string catalog_;
    bool catalogIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string poolName_;
    bool poolNameIsSet_;
    std::string poolDisplayName_;
    bool poolDisplayNameIsSet_;
    std::string publishTime_;
    bool publishTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    std::string notBefore_;
    bool notBeforeIsSet_;
    std::string probeMsg_;
    bool probeMsgIsSet_;
    std::string jobProgress_;
    bool jobProgressIsSet_;
    std::vector<std::string> redeployType_;
    bool redeployTypeIsSet_;
    std::string underLyingInstanceId_;
    bool underLyingInstanceIdIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AcceptScheduledEventResponse_H_
