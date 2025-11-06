
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestNoteDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestNoteDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新合并请求检视意见请求体
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateMergeRequestNoteDto
    : public ModelBase
{
public:
    UpdateMergeRequestNoteDto();
    virtual ~UpdateMergeRequestNoteDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMergeRequestNoteDto members

    /// <summary>
    /// **参数解释：** 评论内容。  
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见严重程度。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见指派人id。
    /// </summary>

    std::string getAssigneeId() const;
    bool assigneeIdIsSet() const;
    void unsetassigneeId();
    void setAssigneeId(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见分类。
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见模块。
    /// </summary>

    std::string getReviewModules() const;
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见检视人id。
    /// </summary>

    std::string getProposerId() const;
    bool proposerIdIsSet() const;
    void unsetproposerId();
    void setProposerId(const std::string& value);

    /// <summary>
    /// **参数解释：** 解决或取消解决检视意见(使用时需仅传此参数)。
    /// </summary>

    bool isResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(bool value);


protected:
    std::string body_;
    bool bodyIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string assigneeId_;
    bool assigneeIdIsSet_;
    std::string reviewCategories_;
    bool reviewCategoriesIsSet_;
    std::string reviewModules_;
    bool reviewModulesIsSet_;
    std::string proposerId_;
    bool proposerIdIsSet_;
    bool resolved_;
    bool resolvedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestNoteDto_H_
