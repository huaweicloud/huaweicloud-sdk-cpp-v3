
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateMergeRequestDiscussionResponseResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateMergeRequestDiscussionResponseResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/PositionDto.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CreateMergeRequestDiscussionResponseResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateMergeRequestDiscussionResponseResponse();
    virtual ~CreateMergeRequestDiscussionResponseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestDiscussionResponseResponse members

    /// <summary>
    /// **参数解释：** 评论id(主评论和回复不共用)。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 评论类型。 **取值范围：** - DiscussionNote: 需要解决的关联代码行的评论。 - DiffNote: 一般。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 评论内容。
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);

    /// <summary>
    /// **参数解释：** 附件(弃用)。
    /// </summary>

    std::string getAttachment() const;
    bool attachmentIsSet() const;
    void unsetattachment();
    void setAttachment(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为系统添加的。
    /// </summary>

    bool isSystem() const;
    bool systemIsSet() const;
    void unsetsystem();
    void setSystem(bool value);

    /// <summary>
    /// **参数解释：** 合并请求id或issue id。
    /// </summary>

    int32_t getNoteableId() const;
    bool noteableIdIsSet() const;
    void unsetnoteableId();
    void setNoteableId(int32_t value);

    /// <summary>
    /// **参数解释：** 意见类型。 **取值范围：** - MergeRequest: 合并请求下提的检视意见。 - Commit: 代码页或提交记录下提的检视意见。
    /// </summary>

    std::string getNoteableType() const;
    bool noteableTypeIsSet() const;
    void unsetnoteableType();
    void setNoteableType(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交记录id。
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否需要解决。
    /// </summary>

    bool isResolvable() const;
    bool resolvableIsSet() const;
    void unsetresolvable();
    void setResolvable(bool value);

    /// <summary>
    /// **参数解释：** 是否为回复。
    /// </summary>

    bool isIsReply() const;
    bool isReplyIsSet() const;
    void unsetisReply();
    void setIsReply(bool value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getResolvedBy() const;
    bool resolvedByIsSet() const;
    void unsetresolvedBy();
    void setResolvedBy(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求iid或issue iid。
    /// </summary>

    int32_t getNoteableIid() const;
    bool noteableIidIsSet() const;
    void unsetnoteableIid();
    void setNoteableIid(int32_t value);

    /// <summary>
    /// **参数解释：** 检视意见id(主评论和回复共用)。
    /// </summary>

    std::string getDiscussionId() const;
    bool discussionIdIsSet() const;
    void unsetdiscussionId();
    void setDiscussionId(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。
    /// </summary>

    std::string getRepository() const;
    bool repositoryIsSet() const;
    void unsetrepository();
    void setRepository(const std::string& value);

    /// <summary>
    /// **参数解释：** 关联代码行所在文件的文件名。
    /// </summary>

    std::string getDiffFile() const;
    bool diffFileIsSet() const;
    void unsetdiffFile();
    void setDiffFile(const std::string& value);

    /// <summary>
    /// **参数解释：** 关联代码行的代码片段。
    /// </summary>

    std::string getDiff() const;
    bool diffIsSet() const;
    void unsetdiff();
    void setDiff(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否已归档。
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// **参数解释：** 意见分类key。
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见分类中文名。
    /// </summary>

    std::string getReviewCategoriesCn() const;
    bool reviewCategoriesCnIsSet() const;
    void unsetreviewCategoriesCn();
    void setReviewCategoriesCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求版本信息。
    /// </summary>

    std::string getReviewCategoriesEn() const;
    bool reviewCategoriesEnIsSet() const;
    void unsetreviewCategoriesEn();
    void setReviewCategoriesEn(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求版本信息。
    /// </summary>

    std::string getReviewModules() const;
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::string& value);

    /// <summary>
    /// **参数解释：** 严重程度key。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数解释：** 严重程度中文。 **约束限制：** - 建议 - 一般 - 严重 - 致命
    /// </summary>

    std::string getSeverityCn() const;
    bool severityCnIsSet() const;
    void unsetseverityCn();
    void setSeverityCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 严重程度英文。
    /// </summary>

    std::string getSeverityEn() const;
    bool severityEnIsSet() const;
    void unsetseverityEn();
    void setSeverityEn(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件路径(弃用)。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 行号(弃用)。
    /// </summary>

    std::string getLine() const;
    bool lineIsSet() const;
    void unsetline();
    void setLine(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getProposer() const;
    bool proposerIsSet() const;
    void unsetproposer();
    void setProposer(const UserBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    PositionDto getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(const PositionDto& value);

    /// <summary>
    /// **参数解释：** 是否已解决。
    /// </summary>

    bool isResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(bool value);

    /// <summary>
    /// **参数解释：** 是否已过期。
    /// </summary>

    bool isIsOutdated() const;
    bool isOutdatedIsSet() const;
    void unsetisOutdated();
    void setIsOutdated(bool value);

    /// <summary>
    /// **参数解释：** 内容审核结果。
    /// </summary>

    bool isModerationResult() const;
    bool moderationResultIsSet() const;
    void unsetmoderationResult();
    void setModerationResult(bool value);

    /// <summary>
    /// **参数解释：** 内容审核时间。
    /// </summary>

    int64_t getModerationTime() const;
    bool moderationTimeIsSet() const;
    void unsetmoderationTime();
    void setModerationTime(int64_t value);

    /// <summary>
    /// **参数解释：** 内容审核状态。
    /// </summary>

    int32_t getModerationStatus() const;
    bool moderationStatusIsSet() const;
    void unsetmoderationStatus();
    void setModerationStatus(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string body_;
    bool bodyIsSet_;
    std::string attachment_;
    bool attachmentIsSet_;
    UserBasicDto author_;
    bool authorIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    bool system_;
    bool systemIsSet_;
    int32_t noteableId_;
    bool noteableIdIsSet_;
    std::string noteableType_;
    bool noteableTypeIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    bool resolvable_;
    bool resolvableIsSet_;
    bool isReply_;
    bool isReplyIsSet_;
    UserBasicDto resolvedBy_;
    bool resolvedByIsSet_;
    int32_t noteableIid_;
    bool noteableIidIsSet_;
    std::string discussionId_;
    bool discussionIdIsSet_;
    std::string repository_;
    bool repositoryIsSet_;
    std::string diffFile_;
    bool diffFileIsSet_;
    std::string diff_;
    bool diffIsSet_;
    bool archived_;
    bool archivedIsSet_;
    std::string reviewCategories_;
    bool reviewCategoriesIsSet_;
    std::string reviewCategoriesCn_;
    bool reviewCategoriesCnIsSet_;
    std::string reviewCategoriesEn_;
    bool reviewCategoriesEnIsSet_;
    std::string reviewModules_;
    bool reviewModulesIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string severityCn_;
    bool severityCnIsSet_;
    std::string severityEn_;
    bool severityEnIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string line_;
    bool lineIsSet_;
    UserBasicDto assignee_;
    bool assigneeIsSet_;
    UserBasicDto proposer_;
    bool proposerIsSet_;
    PositionDto position_;
    bool positionIsSet_;
    bool resolved_;
    bool resolvedIsSet_;
    bool isOutdated_;
    bool isOutdatedIsSet_;
    bool moderationResult_;
    bool moderationResultIsSet_;
    int64_t moderationTime_;
    bool moderationTimeIsSet_;
    int32_t moderationStatus_;
    bool moderationStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateMergeRequestDiscussionResponseResponse_H_
