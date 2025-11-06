
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReviewDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReviewDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 检视意见详细信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ReviewDto
    : public ModelBase
{
public:
    ReviewDto();
    virtual ~ReviewDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewDto members

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

    UserBasicDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 评论内容。
    /// </summary>

    std::string getNote() const;
    bool noteIsSet() const;
    void unsetnote();
    void setNote(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

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
    /// **参数解释：** 检视意见id(主评论和回复共用)。
    /// </summary>

    std::string getDiscussionId() const;
    bool discussionIdIsSet() const;
    void unsetdiscussionId();
    void setDiscussionId(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。
    /// </summary>

    std::string getRepositoryPath() const;
    bool repositoryPathIsSet() const;
    void unsetrepositoryPath();
    void setRepositoryPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库id。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 意见分类key。
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见分类中文。
    /// </summary>

    std::string getReviewCategoriesCn() const;
    bool reviewCategoriesCnIsSet() const;
    void unsetreviewCategoriesCn();
    void setReviewCategoriesCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见分类英文。
    /// </summary>

    std::string getReviewCategoriesEn() const;
    bool reviewCategoriesEnIsSet() const;
    void unsetreviewCategoriesEn();
    void setReviewCategoriesEn(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见模块。
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
    /// 
    /// </summary>

    UserBasicDto getProposer() const;
    bool proposerIsSet() const;
    void unsetproposer();
    void setProposer(const UserBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getReviewer() const;
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 是否已解决。
    /// </summary>

    bool isResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(bool value);

    /// <summary>
    /// **参数解释：** 解决时间。
    /// </summary>

    std::string getResolvedAt() const;
    bool resolvedAtIsSet() const;
    void unsetresolvedAt();
    void setResolvedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求或commit链接。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);

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

    /// <summary>
    /// **参数解释：** 合并请求id(noteable_type&#x3D;MergRequest时返回)。
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求iid(noteable_type&#x3D;MergRequest时返回)。
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求标题(noteable_type&#x3D;MergRequest时返回)。
    /// </summary>

    std::string getMergeRequestTitle() const;
    bool mergeRequestTitleIsSet() const;
    void unsetmergeRequestTitle();
    void setMergeRequestTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求状态(noteable_type&#x3D;MergRequest时返回)。
    /// </summary>

    std::string getMergeRequestState() const;
    bool mergeRequestStateIsSet() const;
    void unsetmergeRequestState();
    void setMergeRequestState(const std::string& value);

    /// <summary>
    /// **参数解释：** commit id(noteable_type&#x3D;Commit时返回)。
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);


protected:
    UserBasicDto assignee_;
    bool assigneeIsSet_;
    UserBasicDto author_;
    bool authorIsSet_;
    std::string note_;
    bool noteIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    bool isReply_;
    bool isReplyIsSet_;
    UserBasicDto resolvedBy_;
    bool resolvedByIsSet_;
    std::string discussionId_;
    bool discussionIdIsSet_;
    std::string repositoryPath_;
    bool repositoryPathIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
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
    UserBasicDto proposer_;
    bool proposerIsSet_;
    UserBasicDto reviewer_;
    bool reviewerIsSet_;
    bool resolved_;
    bool resolvedIsSet_;
    std::string resolvedAt_;
    bool resolvedAtIsSet_;
    std::string link_;
    bool linkIsSet_;
    bool moderationResult_;
    bool moderationResultIsSet_;
    int64_t moderationTime_;
    bool moderationTimeIsSet_;
    int32_t moderationStatus_;
    bool moderationStatusIsSet_;
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    std::string mergeRequestTitle_;
    bool mergeRequestTitleIsSet_;
    std::string mergeRequestState_;
    bool mergeRequestStateIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReviewDto_H_
