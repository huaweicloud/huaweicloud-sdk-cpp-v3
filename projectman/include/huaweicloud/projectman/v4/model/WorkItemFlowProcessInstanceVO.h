
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowProcessInstanceVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowProcessInstanceVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流实例信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowProcessInstanceVO
    : public ModelBase
{
public:
    WorkItemFlowProcessInstanceVO();
    virtual ~WorkItemFlowProcessInstanceVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowProcessInstanceVO members

    /// <summary>
    /// **参数解释**： 工作项工作流实例ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作流实例是否挂起。 **取值范围**：  1: 运行  2: 挂起
    /// </summary>

    int32_t getFlowState() const;
    bool flowStateIsSet() const;
    void unsetflowState();
    void setFlowState(int32_t value);

    /// <summary>
    /// **参数解释**： 工作流入口ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getWorkflowEntryId() const;
    bool workflowEntryIdIsSet() const;
    void unsetworkflowEntryId();
    void setWorkflowEntryId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作流分类。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t flowState_;
    bool flowStateIsSet_;
    std::string workflowEntryId_;
    bool workflowEntryIdIsSet_;
    std::string category_;
    bool categoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowProcessInstanceVO_H_
