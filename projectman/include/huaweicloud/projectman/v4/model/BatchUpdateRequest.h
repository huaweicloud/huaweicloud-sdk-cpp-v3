
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchUpdateRequest
    : public ModelBase
{
public:
    BatchUpdateRequest();
    virtual ~BatchUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateRequest members

    /// <summary>
    /// **参数解释：** 模块的负责人数字id，通过[获取指定项目的成员用户列表](ListProjectMembersV4.xml)接口获取，响应消息体中的**user_num_id**字段的值就是模块的负责人数字id。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAssignedToId() const;
    bool assignedToIdIsSet() const;
    void unsetassignedToId();
    void setAssignedToId(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项id，可通过[高级查询工作项](ListIssuesV4.xml)接口获取，响应消息体中的**id**字段的值就是工作项id。 **约束限制：** 长度在1位到10位之间的纯数字。 **取值范围：** 最小长度：1，最大长度：10。 **默认取值：** 不涉及。
    /// </summary>

    std::string getIssueIds() const;
    bool issueIdsIsSet() const;
    void unsetissueIds();
    void setIssueIds(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目的32位uuid，项目唯一标识，通过[查询项目列表](ListProjectsV4.xml)接口获取，响应消息体中的**project_id**字段的值就是项目ID。 **约束限制**： 32位的数字和字母组成的字符串。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string assignedToId_;
    bool assignedToIdIsSet_;
    std::string issueIds_;
    bool issueIdsIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateRequest_H_
