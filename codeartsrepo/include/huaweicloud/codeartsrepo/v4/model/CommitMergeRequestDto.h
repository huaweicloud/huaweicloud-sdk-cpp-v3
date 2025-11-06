
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitMergeRequestDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitMergeRequestDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/IssuableTimeStatsDto.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/MilestoneBasicDto.h>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 提交关联的合并请求详情
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CommitMergeRequestDto
    : public ModelBase
{
public:
    CommitMergeRequestDto();
    virtual ~CommitMergeRequestDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitMergeRequestDto members

    /// <summary>
    /// **参数解释：** 合并请求的ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求的序号。
    /// </summary>

    int32_t getIid() const;
    bool iidIsSet() const;
    void unsetiid();
    void setIid(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求的标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求的详细描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求的状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求创建的时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求最后一次更新的时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getMergedBy() const;
    bool mergedByIsSet() const;
    void unsetmergedBy();
    void setMergedBy(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求被合并的时间。
    /// </summary>

    std::string getMergedAt() const;
    bool mergedAtIsSet() const;
    void unsetmergedAt();
    void setMergedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getClosedBy() const;
    bool closedByIsSet() const;
    void unsetclosedBy();
    void setClosedBy(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求被关闭的时间。
    /// </summary>

    std::string getClosedAt() const;
    bool closedAtIsSet() const;
    void unsetclosedAt();
    void setClosedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求的目标分支名称。
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求的源分支名称。
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求中检视意见的数量。
    /// </summary>

    int32_t getUserNotesCount() const;
    bool userNotesCountIsSet() const;
    void unsetuserNotesCount();
    void setUserNotesCount(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求的正向评分数量。
    /// </summary>

    int32_t getUpvotes() const;
    bool upvotesIsSet() const;
    void unsetupvotes();
    void setUpvotes(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求的负向评分数量。
    /// </summary>

    int32_t getDownvotes() const;
    bool downvotesIsSet() const;
    void unsetdownvotes();
    void setDownvotes(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求的可合并人列表。
    /// </summary>

    std::vector<UserBasicDto>& getAssignee();
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// **参数解释：** 源仓库的唯一标识符。
    /// </summary>

    int32_t getSourceRepositoryId() const;
    bool sourceRepositoryIdIsSet() const;
    void unsetsourceRepositoryId();
    void setSourceRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 目标仓库的唯一标识符。
    /// </summary>

    int32_t getTargetRepositoryId() const;
    bool targetRepositoryIdIsSet() const;
    void unsettargetRepositoryId();
    void setTargetRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求关联的标签列表。
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 表示合并请求是否处于“工作进行中”状态。
    /// </summary>

    bool isWorkInProgress() const;
    bool workInProgressIsSet() const;
    void unsetworkInProgress();
    void setWorkInProgress(bool value);

    /// <summary>
    /// 
    /// </summary>

    MilestoneBasicDto getMilestone() const;
    bool milestoneIsSet() const;
    void unsetmilestone();
    void setMilestone(const MilestoneBasicDto& value);

    /// <summary>
    /// **参数解释：** 表示是否在CI/CD管道成功时自动合并请求。
    /// </summary>

    bool isMergeWhenPipelineSucceeds() const;
    bool mergeWhenPipelineSucceedsIsSet() const;
    void unsetmergeWhenPipelineSucceeds();
    void setMergeWhenPipelineSucceeds(bool value);

    /// <summary>
    /// **参数解释：** 合并请求的合并状态。
    /// </summary>

    std::string getMergeStatus() const;
    bool mergeStatusIsSet() const;
    void unsetmergeStatus();
    void setMergeStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求的提交哈希值。
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并提交的哈希值。
    /// </summary>

    std::string getMergeCommitSha() const;
    bool mergeCommitShaIsSet() const;
    void unsetmergeCommitSha();
    void setMergeCommitSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 表示合并请求的讨论是否被锁定。
    /// </summary>

    bool isDiscussionLocked() const;
    bool discussionLockedIsSet() const;
    void unsetdiscussionLocked();
    void setDiscussionLocked(bool value);

    /// <summary>
    /// **参数解释：** 表示是否强制删除源分支。
    /// </summary>

    bool isForceRemoveSourceBranch() const;
    bool forceRemoveSourceBranchIsSet() const;
    void unsetforceRemoveSourceBranch();
    void setForceRemoveSourceBranch(bool value);

    /// <summary>
    /// **参数解释：** 表示是否应该删除源分支。
    /// </summary>

    bool isShouldRemoveSourceBranch() const;
    bool shouldRemoveSourceBranchIsSet() const;
    void unsetshouldRemoveSourceBranch();
    void setShouldRemoveSourceBranch(bool value);

    /// <summary>
    /// **参数解释：** 表示是否允许协作者参与。
    /// </summary>

    bool isAllowCollaboration() const;
    bool allowCollaborationIsSet() const;
    void unsetallowCollaboration();
    void setAllowCollaboration(bool value);

    /// <summary>
    /// **参数解释：** 表示是否允许维护者推送代码。
    /// </summary>

    bool isAllowMaintainerToPush() const;
    bool allowMaintainerToPushIsSet() const;
    void unsetallowMaintainerToPush();
    void setAllowMaintainerToPush(bool value);

    /// <summary>
    /// **参数解释：** 合并请求的网页URL链接。
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssuableTimeStatsDto getTimeStats() const;
    bool timeStatsIsSet() const;
    void unsettimeStats();
    void setTimeStats(const IssuableTimeStatsDto& value);

    /// <summary>
    /// **参数解释：** 表示是否在合并时将提交压缩为一个。
    /// </summary>

    bool isSquash() const;
    bool squashIsSet() const;
    void unsetsquash();
    void setSquash(bool value);

    /// <summary>
    /// **参数解释：** 合并请求的类型。
    /// </summary>

    std::string getMergeRequestType() const;
    bool mergeRequestTypeIsSet() const;
    void unsetmergeRequestType();
    void setMergeRequestType(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t iid_;
    bool iidIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    UserBasicDto mergedBy_;
    bool mergedByIsSet_;
    std::string mergedAt_;
    bool mergedAtIsSet_;
    UserBasicDto closedBy_;
    bool closedByIsSet_;
    std::string closedAt_;
    bool closedAtIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    int32_t userNotesCount_;
    bool userNotesCountIsSet_;
    int32_t upvotes_;
    bool upvotesIsSet_;
    int32_t downvotes_;
    bool downvotesIsSet_;
    UserBasicDto author_;
    bool authorIsSet_;
    std::vector<UserBasicDto> assignee_;
    bool assigneeIsSet_;
    int32_t sourceRepositoryId_;
    bool sourceRepositoryIdIsSet_;
    int32_t targetRepositoryId_;
    bool targetRepositoryIdIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;
    bool workInProgress_;
    bool workInProgressIsSet_;
    MilestoneBasicDto milestone_;
    bool milestoneIsSet_;
    bool mergeWhenPipelineSucceeds_;
    bool mergeWhenPipelineSucceedsIsSet_;
    std::string mergeStatus_;
    bool mergeStatusIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string mergeCommitSha_;
    bool mergeCommitShaIsSet_;
    bool discussionLocked_;
    bool discussionLockedIsSet_;
    bool forceRemoveSourceBranch_;
    bool forceRemoveSourceBranchIsSet_;
    bool shouldRemoveSourceBranch_;
    bool shouldRemoveSourceBranchIsSet_;
    bool allowCollaboration_;
    bool allowCollaborationIsSet_;
    bool allowMaintainerToPush_;
    bool allowMaintainerToPushIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    IssuableTimeStatsDto timeStats_;
    bool timeStatsIsSet_;
    bool squash_;
    bool squashIsSet_;
    std::string mergeRequestType_;
    bool mergeRequestTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitMergeRequestDto_H_
