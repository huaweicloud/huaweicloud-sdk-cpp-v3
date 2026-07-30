
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowScheduleResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowScheduleResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowSchedulePoliciesResp.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流调度信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowScheduleResp
    : public ModelBase
{
public:
    WorkflowScheduleResp();
    virtual ~WorkflowScheduleResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowScheduleResp members

    /// <summary>
    /// **参数解释**：类型，仅支持time（时间）。 **取值范围**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：内容。
    /// </summary>

    std::map<std::string, std::string>& getContent();
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：动作，仅支持run。 **取值范围**：不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**：Workflow工作流ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// **参数解释**：用户ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：定时调度信息，使能标记。 **取值范围**： - true：生效 - false：不生效
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释**：ID标记。 **取值范围**：不涉及。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowSchedulePoliciesResp getPolicies() const;
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const WorkflowSchedulePoliciesResp& value);

    /// <summary>
    /// **参数解释**：创建时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::map<std::string, std::string> content_;
    bool contentIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    WorkflowSchedulePoliciesResp policies_;
    bool policiesIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowScheduleResp_H_
