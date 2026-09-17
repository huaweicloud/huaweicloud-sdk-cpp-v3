
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIssueRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIssueRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联工作项请求对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AssociateIssueRequest
    : public ModelBase
{
public:
    AssociateIssueRequest();
    virtual ~AssociateIssueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateIssueRequest members

    /// <summary>
    /// **参数解释**： 源项目UUID。标识执行关联操作的源工作项所属项目。 **约束限制**： 32位UUID字符串,必填字段。 **取值范围**： 32个字符,由小写字母和数字组成。 **默认取值**： 不涉及。
    /// </summary>

    std::string getProjectUUId() const;
    bool projectUUIdIsSet() const;
    void unsetprojectUUId();
    void setProjectUUId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目标项目UUID。标识待关联工作项所属的项目;跨项目关联时必填,同项目关联时可省略。 **约束限制**： 32位UUID字符串;若与projectUUId不同则视为跨项目关联。 **取值范围**： 32个字符,由小写字母和数字组成。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAttachProjectUUId() const;
    bool attachProjectUUIdIsSet() const;
    void unsetattachProjectUUId();
    void setAttachProjectUUId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源工作项ID。即需要建立关联关系的工作项唯一ID。 **约束限制**： 工作项必须存在且未被归档。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// **参数解释**： 待关联工作项ID列表。本次操作需要新增关联关系的目标工作项ID集合。 **约束限制**： 每个元素为字符串形式的工作项ID(服务端自动转换为整数);不能包含issueId自身;单工作项关联总数受系统上限约束。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getAssociatedIssueIdList();
    bool associatedIssueIdListIsSet() const;
    void unsetassociatedIssueIdList();
    void setAssociatedIssueIdList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 待取消关联工作项ID列表。本次操作需要解除关联关系的目标工作项ID集合;可在同一次请求中混合使用以支持关联关系调整。 **约束限制**： 每个元素为字符串形式的工作项ID;仅处理已存在的关联关系。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getUnassociatedIssueIdList();
    bool unassociatedIssueIdListIsSet() const;
    void unsetunassociatedIssueIdList();
    void setUnassociatedIssueIdList(const std::vector<std::string>& value);


protected:
    std::string projectUUId_;
    bool projectUUIdIsSet_;
    std::string attachProjectUUId_;
    bool attachProjectUUIdIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    std::vector<std::string> associatedIssueIdList_;
    bool associatedIssueIdListIsSet_;
    std::vector<std::string> unassociatedIssueIdList_;
    bool unassociatedIssueIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIssueRequest_H_
