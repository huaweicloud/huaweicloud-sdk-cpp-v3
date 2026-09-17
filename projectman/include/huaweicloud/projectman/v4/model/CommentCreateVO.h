
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentCreateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentCreateVO_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CommentCreateVO
    : public ModelBase
{
public:
    CommentCreateVO();
    virtual ~CommentCreateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentCreateVO members

    /// <summary>
    /// **参数解释**： 评论类型。 **取值范围**： - comment：评论 - reply：回复 - operation：系统操作（不支持创建）。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论关联的工作项类型。 **默认取值**： 不涉及。
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论内容，使用html标记语言。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论的父ID，取值为需要回复的评论的ID。 **约束限制**： 回复评论时必填。 **取值范围**： 只支持CR。 **默认取值**： 不涉及。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论的根ID，取值为需要回复的首层评论的ID。 **约束限制**： 回复评论时必填，创建评论时不能填。 **默认取值**： 不涉及。
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论时@他人的用户ID，填写此参数后会通知被@的用户，通知形式在需求管理-设置-工作项设置-通知设置中配置。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAt() const;
    bool atIsSet() const;
    void unsetat();
    void setAt(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;
    std::string at_;
    bool atIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentCreateVO_H_
