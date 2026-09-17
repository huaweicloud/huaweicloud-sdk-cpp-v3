
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UserVO.h>
#include <string>
#include <huaweicloud/projectman/v4/model/StatusVoIpd.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 工作项信息对象，包含工作项ID、标题、编号、分类、状态、责任人等。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemVO
    : public ModelBase
{
public:
    WorkItemVO();
    virtual ~WorkItemVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemVO members

    /// <summary>
    /// **参数解释**： 工作项唯一ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项标题。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项编号。 **取值范围**： 不涉及。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项分类。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StatusVoIpd getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const StatusVoIpd& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserVO& value);

    /// <summary>
    /// **参数解释**： 工作项基线状态。 **取值范围**： - baselined：已基线 - unbaseline：未基线 - \&quot;\&quot;：未基线
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项变更状态。 **取值范围**： - cannot_finish：不可完成
    /// </summary>

    std::string getChangeStatus() const;
    bool changeStatusIsSet() const;
    void unsetchangeStatus();
    void setChangeStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string category_;
    bool categoryIsSet_;
    StatusVoIpd status_;
    bool statusIsSet_;
    UserVO assignee_;
    bool assigneeIsSet_;
    std::string baseline_;
    bool baselineIsSet_;
    std::string changeStatus_;
    bool changeStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemVO_H_
