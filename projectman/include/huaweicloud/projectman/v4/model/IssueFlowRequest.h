
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueFlowRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueFlowRequest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueFlowRequest
    : public ModelBase
{
public:
    IssueFlowRequest();
    virtual ~IssueFlowRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueFlowRequest members

    /// <summary>
    /// **参数解释**： 状态id。 **约束限制**： 不涉及。 **取值范围**： 1（新建） 2（进行中） 3（已解决） 4（测试中） 5（已关闭） 6（已拒绝）。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(int32_t value);

    /// <summary>
    /// **参数解释：** 模块的负责人id，通过[获取指定项目的成员用户列表](ListProjectMembersV4.xml)接口获取，响应消息体中的**user_id**字段的值就是模块的负责人id。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAssignedToId() const;
    bool assignedToIdIsSet() const;
    void unsetassignedToId();
    void setAssignedToId(const std::string& value);

    /// <summary>
    /// **参数解释：** 与日志记录相关的备注或注释。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNotes() const;
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目的32位uuid，项目唯一标识，通过[查询项目列表](ListProjectsV4.xml)接口获取，响应消息体中的**project_id**字段的值就是项目ID。 **约束限制**： 32位的数字和字母组成的字符串。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getProjectUUId() const;
    bool projectUUIdIsSet() const;
    void unsetprojectUUId();
    void setProjectUUId(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项id，可通过[高级查询工作项](ListIssuesV4.xml)接口获取，响应消息体中的**id**字段的值就是工作项id。 **约束限制：** 长度在1位到10位之间的纯数字。 **取值范围：** 最小长度：1，最大长度：10。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 项目状态。 **约束限制**： 不涉及。 **取值范围**： scrum。 **默认取值**： 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int32_t statusId_;
    bool statusIdIsSet_;
    std::string assignedToId_;
    bool assignedToIdIsSet_;
    std::string notes_;
    bool notesIsSet_;
    std::string projectUUId_;
    bool projectUUIdIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueFlowRequest_H_
