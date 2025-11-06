
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ResponseMergeRequestChanges_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ResponseMergeRequestChanges_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/DiffRefsDto.h>
#include <huaweicloud/codeartsrepo/v3/model/MergeRequestDiffFileDto.h>
#include <huaweicloud/codeartsrepo/v3/model/PipelineBasicDto.h>
#include <string>
#include <huaweicloud/codeartsrepo/v3/model/Author.h>
#include <huaweicloud/codeartsrepo/v3/model/ProjectSimpleDto.h>
#include <vector>
#include <huaweicloud/codeartsrepo/v3/model/MergeRequestListDtoUser.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ResponseMergeRequestChanges
    : public ModelBase
{
public:
    ResponseMergeRequestChanges();
    virtual ~ResponseMergeRequestChanges();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponseMergeRequestChanges members

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
    /// 仓库id
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

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
    /// 合并请求创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 合并请求更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 合并请求目标分支
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// 合并请求源分支
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// 检视意见数量
    /// </summary>

    int32_t getUserNotesCount() const;
    bool userNotesCountIsSet() const;
    void unsetuserNotesCount();
    void setUserNotesCount(int32_t value);

    /// <summary>
    /// upvotes
    /// </summary>

    int32_t getUpvotes() const;
    bool upvotesIsSet() const;
    void unsetupvotes();
    void setUpvotes(int32_t value);

    /// <summary>
    /// downvotes
    /// </summary>

    int32_t getDownvotes() const;
    bool downvotesIsSet() const;
    void unsetdownvotes();
    void setDownvotes(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Author getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const Author& value);

    /// <summary>
    /// 合并请求源仓库id
    /// </summary>

    int32_t getSourceProjectId() const;
    bool sourceProjectIdIsSet() const;
    void unsetsourceProjectId();
    void setSourceProjectId(int32_t value);

    /// <summary>
    /// 合并请求目标仓库id
    /// </summary>

    int32_t getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(int32_t value);

    /// <summary>
    /// 指定仓库的标签列表
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);

    /// <summary>
    /// 合并请求是否为wip状态
    /// </summary>

    bool isWorkInProgress() const;
    bool workInProgressIsSet() const;
    void unsetworkInProgress();
    void setWorkInProgress(bool value);

    /// <summary>
    /// 合并请求是否开启流水线成功后自动合入
    /// </summary>

    bool isMergeWhenPipelineSucceeds() const;
    bool mergeWhenPipelineSucceedsIsSet() const;
    void unsetmergeWhenPipelineSucceeds();
    void setMergeWhenPipelineSucceeds(bool value);

    /// <summary>
    /// 合并请求合入状态
    /// </summary>

    std::string getMergeStatus() const;
    bool mergeStatusIsSet() const;
    void unsetmergeStatus();
    void setMergeStatus(const std::string& value);

    /// <summary>
    /// 合并请求的head sha
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 合并请求合入后是否应该移除源分支
    /// </summary>

    bool isShouldRemoveSourceBranch() const;
    bool shouldRemoveSourceBranchIsSet() const;
    void unsetshouldRemoveSourceBranch();
    void setShouldRemoveSourceBranch(bool value);

    /// <summary>
    /// 合并请求合入后是否移除源分支
    /// </summary>

    bool isForceRemoveSourceBranch() const;
    bool forceRemoveSourceBranchIsSet() const;
    void unsetforceRemoveSourceBranch();
    void setForceRemoveSourceBranch(bool value);

    /// <summary>
    /// 合并请求url
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 合并请求是否开启squash合并
    /// </summary>

    bool isSquash() const;
    bool squashIsSet() const;
    void unsetsquash();
    void setSquash(bool value);

    /// <summary>
    /// 合并请求类型
    /// </summary>

    std::string getMergeRequestType() const;
    bool mergeRequestTypeIsSet() const;
    void unsetmergeRequestType();
    void setMergeRequestType(const std::string& value);

    /// <summary>
    /// 是否订阅
    /// </summary>

    bool isSubscribed() const;
    bool subscribedIsSet() const;
    void unsetsubscribed();
    void setSubscribed(bool value);

    /// <summary>
    /// 合并请求变更文件数量
    /// </summary>

    std::string getChangesCount() const;
    bool changesCountIsSet() const;
    void unsetchangesCount();
    void setChangesCount(const std::string& value);

    /// <summary>
    /// 合并请求最新构建开始时间
    /// </summary>

    std::string getLatestBuildStartedAt() const;
    bool latestBuildStartedAtIsSet() const;
    void unsetlatestBuildStartedAt();
    void setLatestBuildStartedAt(const std::string& value);

    /// <summary>
    /// 合并请求最新构建结束时间
    /// </summary>

    std::string getLatestBuildFinishedAt() const;
    bool latestBuildFinishedAtIsSet() const;
    void unsetlatestBuildFinishedAt();
    void setLatestBuildFinishedAt(const std::string& value);

    /// <summary>
    /// first deployed to production at
    /// </summary>

    std::string getFirstDeployedToProductionAt() const;
    bool firstDeployedToProductionAtIsSet() const;
    void unsetfirstDeployedToProductionAt();
    void setFirstDeployedToProductionAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PipelineBasicDto getPipeline() const;
    bool pipelineIsSet() const;
    void unsetpipeline();
    void setPipeline(const PipelineBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    DiffRefsDto getDiffRefs() const;
    bool diffRefsIsSet() const;
    void unsetdiffRefs();
    void setDiffRefs(const DiffRefsDto& value);

    /// <summary>
    /// 合并请求操作错误信息
    /// </summary>

    std::string getMergeError() const;
    bool mergeErrorIsSet() const;
    void unsetmergeError();
    void setMergeError(const std::string& value);

    /// <summary>
    /// 合并请求是否rebase中
    /// </summary>

    bool isRebaseInProgress() const;
    bool rebaseInProgressIsSet() const;
    void unsetrebaseInProgress();
    void setRebaseInProgress(bool value);

    /// <summary>
    /// 合并请求落后提交数量
    /// </summary>

    int32_t getDivergedCommitsCount() const;
    bool divergedCommitsCountIsSet() const;
    void unsetdivergedCommitsCount();
    void setDivergedCommitsCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MergeRequestListDtoUser getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const MergeRequestListDtoUser& value);

    /// <summary>
    /// 合并请求增加行数
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// 合并请求删除行数
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);

    /// <summary>
    /// 合并请求文件变更
    /// </summary>

    std::vector<MergeRequestDiffFileDto>& getChanges();
    bool changesIsSet() const;
    void unsetchanges();
    void setChanges(const std::vector<MergeRequestDiffFileDto>& value);

    /// <summary>
    /// 
    /// </summary>

    ProjectSimpleDto getSourceProject() const;
    bool sourceProjectIsSet() const;
    void unsetsourceProject();
    void setSourceProject(const ProjectSimpleDto& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t iid_;
    bool iidIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
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
    Author author_;
    bool authorIsSet_;
    int32_t sourceProjectId_;
    bool sourceProjectIdIsSet_;
    int32_t targetProjectId_;
    bool targetProjectIdIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;
    bool workInProgress_;
    bool workInProgressIsSet_;
    bool mergeWhenPipelineSucceeds_;
    bool mergeWhenPipelineSucceedsIsSet_;
    std::string mergeStatus_;
    bool mergeStatusIsSet_;
    std::string sha_;
    bool shaIsSet_;
    bool shouldRemoveSourceBranch_;
    bool shouldRemoveSourceBranchIsSet_;
    bool forceRemoveSourceBranch_;
    bool forceRemoveSourceBranchIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    bool squash_;
    bool squashIsSet_;
    std::string mergeRequestType_;
    bool mergeRequestTypeIsSet_;
    bool subscribed_;
    bool subscribedIsSet_;
    std::string changesCount_;
    bool changesCountIsSet_;
    std::string latestBuildStartedAt_;
    bool latestBuildStartedAtIsSet_;
    std::string latestBuildFinishedAt_;
    bool latestBuildFinishedAtIsSet_;
    std::string firstDeployedToProductionAt_;
    bool firstDeployedToProductionAtIsSet_;
    PipelineBasicDto pipeline_;
    bool pipelineIsSet_;
    DiffRefsDto diffRefs_;
    bool diffRefsIsSet_;
    std::string mergeError_;
    bool mergeErrorIsSet_;
    bool rebaseInProgress_;
    bool rebaseInProgressIsSet_;
    int32_t divergedCommitsCount_;
    bool divergedCommitsCountIsSet_;
    MergeRequestListDtoUser user_;
    bool userIsSet_;
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;
    std::vector<MergeRequestDiffFileDto> changes_;
    bool changesIsSet_;
    ProjectSimpleDto sourceProject_;
    bool sourceProjectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ResponseMergeRequestChanges_H_
