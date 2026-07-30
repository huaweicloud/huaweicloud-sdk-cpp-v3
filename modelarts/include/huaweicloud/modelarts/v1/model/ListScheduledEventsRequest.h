
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListScheduledEventsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListScheduledEventsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListScheduledEventsRequest
    : public ModelBase
{
public:
    ListScheduledEventsRequest();
    virtual ~ListScheduledEventsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduledEventsRequest members

    /// <summary>
    /// **参数解释**：工作空间ID，默认值为0，取值于查询workspaces列表的接口的id字段。 **约束限制**：系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长小于63个字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：事件状态。 **约束限制**：不涉及。 **取值范围**：可选择值如下： - inquiring: 待授权, - scheduled: 待执行 - executing: 执行中 - completed: 执行成功 - failed: 执行失败 - canceled: 取消 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getState();
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：事件类型。 **约束限制**：不涉及。 **取值范围**：可选择值如下： - system-maintenance：系统维护 - localdisk-recovery：本地盘恢复 - node_reboot：节点重启 - operation-request：运维授权 - node_maintenance：超节点维护 - node_redeploy：超节点重部署 - node_localdisk_recovery 超节点本地盘恢复 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getType();
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：计划事件ID，取值查询计划事件列表接口的event_id字段。 **约束限制**：系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，长度小于63。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点名称，取值自节点详情的metadata.name字段。 **约束限制**：系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，小于63个字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池名称, lite-cluster、standard才具有，取值自资源池详情的metadata.name字段。查询指定standard cluster和lite cluster下节点的计划事件时可传递该参数。 **约束限制**：系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，小于63个字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：事件发布开始时间,按照时间范围过滤。 **约束限制**：按照ISO8601标准表示，并使用UTC +0时间，格式为yyyy-MM-ddTHH:mm:ssZ。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPublishStartTime() const;
    bool publishStartTimeIsSet() const;
    void unsetpublishStartTime();
    void setPublishStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：事件发布结束时间,按照时间范围过滤。 **约束限制**：按照ISO8601标准表示，并使用UTC +0时间，格式为yyyy-MM-ddTHH:mm:ssZ。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPublishEndTime() const;
    bool publishEndTimeIsSet() const;
    void unsetpublishEndTime();
    void setPublishEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：偏移量,表示从此偏移量开始查询。 **约束限制**：不涉及。 **取值范围**：[0,1000000000]。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：指定每一页返回的最大条目数。 **约束限制**：不涉及。 **取值范围**：[1,100]。 **默认取值**：100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<std::string> state_;
    bool stateIsSet_;
    std::vector<std::string> type_;
    bool typeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string poolName_;
    bool poolNameIsSet_;
    std::string publishStartTime_;
    bool publishStartTimeIsSet_;
    std::string publishEndTime_;
    bool publishEndTimeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListScheduledEventsRequest& dereference_from_shared_ptr(std::shared_ptr<ListScheduledEventsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListScheduledEventsRequest_H_
