
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ImportMergeRequestResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ImportMergeRequestResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/MergeRequestExternalDto.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/codehub/v4/model/ProjectSimpleDto.h>
#include <huaweicloud/codehub/v4/model/MilestoneBasicDto.h>
#include <string>
#include <huaweicloud/codehub/v4/model/MergeErrorDto.h>
#include <huaweicloud/codehub/v4/model/MergeRequestReviewerExternalDto.h>
#include <huaweicloud/codehub/v4/model/MergeRequestRelatedWorkItemDto.h>
#include <huaweicloud/codehub/v4/model/ApprovalUserDto.h>
#include <vector>
#include <huaweicloud/codehub/v4/model/MergeRequestDiffExternalDto.h>
#include <huaweicloud/codehub/v4/model/UserBasicExternalDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ImportMergeRequestResponse
    : public ModelBase, public HttpResponse
{
public:
    ImportMergeRequestResponse();
    virtual ~ImportMergeRequestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportMergeRequestResponse members

    /// <summary>
    /// 合并请求id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 合并请求iid
    /// </summary>

    int32_t getIid() const;
    bool iidIsSet() const;
    void unsetiid();
    void setIid(int32_t value);

    /// <summary>
    /// 目标仓库id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 合并请求标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 合并请求描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 合并请求状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 源分支
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// 目标分支
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// 源分支是否为保护分支
    /// </summary>

    bool isIsSourceBranchProtected() const;
    bool isSourceBranchProtectedIsSet() const;
    void unsetisSourceBranchProtected();
    void setIsSourceBranchProtected(bool value);

    /// <summary>
    /// 源分支
    /// </summary>

    std::string getDevcloudSourceBranch() const;
    bool devcloudSourceBranchIsSet() const;
    void unsetdevcloudSourceBranch();
    void setDevcloudSourceBranch(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicExternalDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserBasicExternalDto& value);

    /// <summary>
    /// 源仓库id
    /// </summary>

    int32_t getSourceRepositoryId() const;
    bool sourceRepositoryIdIsSet() const;
    void unsetsourceRepositoryId();
    void setSourceRepositoryId(int32_t value);

    /// <summary>
    /// 目标仓库id
    /// </summary>

    int32_t getTargetRepositoryId() const;
    bool targetRepositoryIdIsSet() const;
    void unsettargetRepositoryId();
    void setTargetRepositoryId(int32_t value);

    /// <summary>
    /// 源项目id
    /// </summary>

    std::string getSourceProjectId() const;
    bool sourceProjectIdIsSet() const;
    void unsetsourceProjectId();
    void setSourceProjectId(const std::string& value);

    /// <summary>
    /// 目标项目id
    /// </summary>

    std::string getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::vector<Object>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<Object>& value);

    /// <summary>
    /// WIP状态
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
    /// 流水线成功后自动合入
    /// </summary>

    bool isMergeWhenBuildSucceeds() const;
    bool mergeWhenBuildSucceedsIsSet() const;
    void unsetmergeWhenBuildSucceeds();
    void setMergeWhenBuildSucceeds(bool value);

    /// <summary>
    /// 可合并状态
    /// </summary>

    std::string getMergeStatus() const;
    bool mergeStatusIsSet() const;
    void unsetmergeStatus();
    void setMergeStatus(const std::string& value);

    /// <summary>
    /// 当前合并请求最新commit
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 合入commit节点
    /// </summary>

    std::string getMergeCommitSha() const;
    bool mergeCommitShaIsSet() const;
    void unsetmergeCommitSha();
    void setMergeCommitSha(const std::string& value);

    /// <summary>
    /// 订阅
    /// </summary>

    bool isSubscribed() const;
    bool subscribedIsSet() const;
    void unsetsubscribed();
    void setSubscribed(bool value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicExternalDto getMergedBy() const;
    bool mergedByIsSet() const;
    void unsetmergedBy();
    void setMergedBy(const UserBasicExternalDto& value);

    /// <summary>
    /// 合并时间
    /// </summary>

    std::string getMergedAt() const;
    bool mergedAtIsSet() const;
    void unsetmergedAt();
    void setMergedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicExternalDto getClosedBy() const;
    bool closedByIsSet() const;
    void unsetclosedBy();
    void setClosedBy(const UserBasicExternalDto& value);

    /// <summary>
    /// 关闭时间
    /// </summary>

    std::string getClosedAt() const;
    bool closedAtIsSet() const;
    void unsetclosedAt();
    void setClosedAt(const std::string& value);

    /// <summary>
    /// 检视意见数量
    /// </summary>

    int32_t getUserNotesCount() const;
    bool userNotesCountIsSet() const;
    void unsetuserNotesCount();
    void setUserNotesCount(int32_t value);

    /// <summary>
    /// 合入后删除源分支
    /// </summary>

    bool isForceRemoveSourceBranch() const;
    bool forceRemoveSourceBranchIsSet() const;
    void unsetforceRemoveSourceBranch();
    void setForceRemoveSourceBranch(bool value);

    /// <summary>
    /// 主页url
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MergeRequestDiffExternalDto getMergeRequestDiff() const;
    bool mergeRequestDiffIsSet() const;
    void unsetmergeRequestDiff();
    void setMergeRequestDiff(const MergeRequestDiffExternalDto& value);

    /// <summary>
    /// 评审人数量
    /// </summary>

    int32_t getMergeRequestReviewersCount() const;
    bool mergeRequestReviewersCountIsSet() const;
    void unsetmergeRequestReviewersCount();
    void setMergeRequestReviewersCount(int32_t value);

    /// <summary>
    /// 打分
    /// </summary>

    int32_t getMergeRequestReviewCount() const;
    bool mergeRequestReviewCountIsSet() const;
    void unsetmergeRequestReviewCount();
    void setMergeRequestReviewCount(int32_t value);

    /// <summary>
    /// 评审人列表
    /// </summary>

    std::vector<MergeRequestReviewerExternalDto>& getMergeRequestReviewerList();
    bool mergeRequestReviewerListIsSet() const;
    void unsetmergeRequestReviewerList();
    void setMergeRequestReviewerList(const std::vector<MergeRequestReviewerExternalDto>& value);

    /// <summary>
    /// 合并人列表
    /// </summary>

    std::vector<UserBasicExternalDto>& getMergeRequestAssigneeList();
    bool mergeRequestAssigneeListIsSet() const;
    void unsetmergeRequestAssigneeList();
    void setMergeRequestAssigneeList(const std::vector<UserBasicExternalDto>& value);

    /// <summary>
    /// 检视意见
    /// </summary>

    int32_t getNotes() const;
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(int32_t value);

    /// <summary>
    /// 代码检查状态
    /// </summary>

    int32_t getCodecheckState() const;
    bool codecheckStateIsSet() const;
    void unsetcodecheckState();
    void setCodecheckState(int32_t value);

    /// <summary>
    /// 代码检查问题数
    /// </summary>

    int32_t getCodecheckDefectCount() const;
    bool codecheckDefectCountIsSet() const;
    void unsetcodecheckDefectCount();
    void setCodecheckDefectCount(int32_t value);

    /// <summary>
    /// 合并请求关联单数量
    /// </summary>

    std::vector<MergeRequestRelatedWorkItemDto>& getMergeRequestRelatedWorkItems();
    bool mergeRequestRelatedWorkItemsIsSet() const;
    void unsetmergeRequestRelatedWorkItems();
    void setMergeRequestRelatedWorkItems(const std::vector<MergeRequestRelatedWorkItemDto>& value);

    /// <summary>
    /// 源分支落后commit数
    /// </summary>

    int32_t getDivergedCommitsCount() const;
    bool divergedCommitsCountIsSet() const;
    void unsetdivergedCommitsCount();
    void setDivergedCommitsCount(int32_t value);

    /// <summary>
    /// 送审结果
    /// </summary>

    bool isModerationResult() const;
    bool moderationResultIsSet() const;
    void unsetmoderationResult();
    void setModerationResult(bool value);

    /// <summary>
    /// 送审时间时间戳
    /// </summary>

    int64_t getModerationTime() const;
    bool moderationTimeIsSet() const;
    void unsetmoderationTime();
    void setModerationTime(int64_t value);

    /// <summary>
    /// 送审状态码
    /// </summary>

    int32_t getModerationStatus() const;
    bool moderationStatusIsSet() const;
    void unsetmoderationStatus();
    void setModerationStatus(int32_t value);

    /// <summary>
    /// 是否使用临时分支
    /// </summary>

    bool isIsUseTempBranch() const;
    bool isUseTempBranchIsSet() const;
    void unsetisUseTempBranch();
    void setIsUseTempBranch(bool value);

    /// <summary>
    /// 检视模式
    /// </summary>

    std::string getReviewMode() const;
    bool reviewModeIsSet() const;
    void unsetreviewMode();
    void setReviewMode(const std::string& value);

    /// <summary>
    /// squash合入
    /// </summary>

    bool isSquash() const;
    bool squashIsSet() const;
    void unsetsquash();
    void setSquash(bool value);

    /// <summary>
    /// 审核模式审核人
    /// </summary>

    std::vector<ApprovalUserDto>& getApprovalMergeRequestApprovers();
    bool approvalMergeRequestApproversIsSet() const;
    void unsetapprovalMergeRequestApprovers();
    void setApprovalMergeRequestApprovers(const std::vector<ApprovalUserDto>& value);

    /// <summary>
    /// 审核模式检视人
    /// </summary>

    std::vector<ApprovalUserDto>& getApprovalMergeRequestReviewers();
    bool approvalMergeRequestReviewersIsSet() const;
    void unsetapprovalMergeRequestReviewers();
    void setApprovalMergeRequestReviewers(const std::vector<ApprovalUserDto>& value);

    /// <summary>
    /// 
    /// </summary>

    ProjectSimpleDto getSourceRepository() const;
    bool sourceRepositoryIsSet() const;
    void unsetsourceRepository();
    void setSourceRepository(const ProjectSimpleDto& value);

    /// <summary>
    /// 
    /// </summary>

    ProjectSimpleDto getTargetRepository() const;
    bool targetRepositoryIsSet() const;
    void unsettargetRepository();
    void setTargetRepository(const ProjectSimpleDto& value);

    /// <summary>
    /// 源分支存在
    /// </summary>

    bool isIsSourceBranchExist() const;
    bool isSourceBranchExistIsSet() const;
    void unsetisSourceBranchExist();
    void setIsSourceBranchExist(bool value);

    /// <summary>
    /// 合并请求类型
    /// </summary>

    std::string getMergeRequestType() const;
    bool mergeRequestTypeIsSet() const;
    void unsetmergeRequestType();
    void setMergeRequestType(const std::string& value);

    /// <summary>
    /// squash提交信息
    /// </summary>

    std::string getSquashCommitMessage() const;
    bool squashCommitMessageIsSet() const;
    void unsetsquashCommitMessage();
    void setSquashCommitMessage(const std::string& value);

    /// <summary>
    /// 自动合入
    /// </summary>

    bool isAutoMerge() const;
    bool autoMergeIsSet() const;
    void unsetautoMerge();
    void setAutoMerge(bool value);

    /// <summary>
    /// MR原始错误信息
    /// </summary>

    std::string getMergeError() const;
    bool mergeErrorIsSet() const;
    void unsetmergeError();
    void setMergeError(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MergeErrorDto getJsonMergeError() const;
    bool jsonMergeErrorIsSet() const;
    void unsetjsonMergeError();
    void setJsonMergeError(const MergeErrorDto& value);

    /// <summary>
    /// 是否正在rebase
    /// </summary>

    bool isRebaseInProgress() const;
    bool rebaseInProgressIsSet() const;
    void unsetrebaseInProgress();
    void setRebaseInProgress(bool value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t iid_;
    bool iidIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
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
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    bool isSourceBranchProtected_;
    bool isSourceBranchProtectedIsSet_;
    std::string devcloudSourceBranch_;
    bool devcloudSourceBranchIsSet_;
    UserBasicExternalDto author_;
    bool authorIsSet_;
    int32_t sourceRepositoryId_;
    bool sourceRepositoryIdIsSet_;
    int32_t targetRepositoryId_;
    bool targetRepositoryIdIsSet_;
    std::string sourceProjectId_;
    bool sourceProjectIdIsSet_;
    std::string targetProjectId_;
    bool targetProjectIdIsSet_;
    std::vector<Object> labels_;
    bool labelsIsSet_;
    bool workInProgress_;
    bool workInProgressIsSet_;
    MilestoneBasicDto milestone_;
    bool milestoneIsSet_;
    bool mergeWhenBuildSucceeds_;
    bool mergeWhenBuildSucceedsIsSet_;
    std::string mergeStatus_;
    bool mergeStatusIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string mergeCommitSha_;
    bool mergeCommitShaIsSet_;
    bool subscribed_;
    bool subscribedIsSet_;
    UserBasicExternalDto mergedBy_;
    bool mergedByIsSet_;
    std::string mergedAt_;
    bool mergedAtIsSet_;
    UserBasicExternalDto closedBy_;
    bool closedByIsSet_;
    std::string closedAt_;
    bool closedAtIsSet_;
    int32_t userNotesCount_;
    bool userNotesCountIsSet_;
    bool forceRemoveSourceBranch_;
    bool forceRemoveSourceBranchIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    MergeRequestDiffExternalDto mergeRequestDiff_;
    bool mergeRequestDiffIsSet_;
    int32_t mergeRequestReviewersCount_;
    bool mergeRequestReviewersCountIsSet_;
    int32_t mergeRequestReviewCount_;
    bool mergeRequestReviewCountIsSet_;
    std::vector<MergeRequestReviewerExternalDto> mergeRequestReviewerList_;
    bool mergeRequestReviewerListIsSet_;
    std::vector<UserBasicExternalDto> mergeRequestAssigneeList_;
    bool mergeRequestAssigneeListIsSet_;
    int32_t notes_;
    bool notesIsSet_;
    int32_t codecheckState_;
    bool codecheckStateIsSet_;
    int32_t codecheckDefectCount_;
    bool codecheckDefectCountIsSet_;
    std::vector<MergeRequestRelatedWorkItemDto> mergeRequestRelatedWorkItems_;
    bool mergeRequestRelatedWorkItemsIsSet_;
    int32_t divergedCommitsCount_;
    bool divergedCommitsCountIsSet_;
    bool moderationResult_;
    bool moderationResultIsSet_;
    int64_t moderationTime_;
    bool moderationTimeIsSet_;
    int32_t moderationStatus_;
    bool moderationStatusIsSet_;
    bool isUseTempBranch_;
    bool isUseTempBranchIsSet_;
    std::string reviewMode_;
    bool reviewModeIsSet_;
    bool squash_;
    bool squashIsSet_;
    std::vector<ApprovalUserDto> approvalMergeRequestApprovers_;
    bool approvalMergeRequestApproversIsSet_;
    std::vector<ApprovalUserDto> approvalMergeRequestReviewers_;
    bool approvalMergeRequestReviewersIsSet_;
    ProjectSimpleDto sourceRepository_;
    bool sourceRepositoryIsSet_;
    ProjectSimpleDto targetRepository_;
    bool targetRepositoryIsSet_;
    bool isSourceBranchExist_;
    bool isSourceBranchExistIsSet_;
    std::string mergeRequestType_;
    bool mergeRequestTypeIsSet_;
    std::string squashCommitMessage_;
    bool squashCommitMessageIsSet_;
    bool autoMerge_;
    bool autoMergeIsSet_;
    std::string mergeError_;
    bool mergeErrorIsSet_;
    MergeErrorDto jsonMergeError_;
    bool jsonMergeErrorIsSet_;
    bool rebaseInProgress_;
    bool rebaseInProgressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ImportMergeRequestResponse_H_
