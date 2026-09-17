
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项流程流转请求参数。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowVO
    : public ModelBase
{
public:
    WorkItemFlowVO();
    virtual ~WorkItemFlowVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowVO members

    /// <summary>
    /// **参数解释**： 工作项唯一ID。可以通过[查询工作项列表](ListIpdProjectIssues.xml)或者[查询树状工作项](ShowIpdIssueTree.xml)接口获取，响应消息体中的**id**字段的值就是工作项ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项类型。 **约束限制**： 不涉及。 **取值范围**： RR、IR、AR、SR、Bug、FE、Task、US、Epic、SF **默认取值**： 不涉及。
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项流转code。可以通过[查询工作项流程信息](ShowIssueWorkItemFlowDetail.xml)接口获取。 响应消息体中的**next_flow**数组为工作流流转线，根据**from_code**当前状态和**to_code**目标状态找到匹配的流转线，流转线的**code**字段的值就是工作项流转code。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getFlowCode() const;
    bool flowCodeIsSet() const;
    void unsetflowCode();
    void setFlowCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项唯一Id数组。可以通过[查询工作项列表](ListIpdProjectIssues.xml)或者[查询树状工作项](ShowIpdIssueTree.xml)接口获取，响应消息体中的**id**字段的值就是工作项ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getIssueIds();
    bool issueIdsIsSet() const;
    void unsetissueIds();
    void setIssueIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 流转中配置上下文信息。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::map<std::string, Object>& getProcessContext();
    bool processContextIsSet() const;
    void unsetprocessContext();
    void setProcessContext(const std::map<std::string, Object>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string flowCode_;
    bool flowCodeIsSet_;
    std::vector<std::string> issueIds_;
    bool issueIdsIsSet_;
    std::map<std::string, Object> processContext_;
    bool processContextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowVO_H_
