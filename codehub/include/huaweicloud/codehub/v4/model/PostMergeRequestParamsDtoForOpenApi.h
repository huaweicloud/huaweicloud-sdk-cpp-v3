
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PostMergeRequestParamsDtoForOpenApi_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PostMergeRequestParamsDtoForOpenApi_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PostMergeRequestParamsDtoForOpenApi
    : public ModelBase
{
public:
    PostMergeRequestParamsDtoForOpenApi();
    virtual ~PostMergeRequestParamsDtoForOpenApi();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostMergeRequestParamsDtoForOpenApi members

    /// <summary>
    /// 合并请求标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

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
    /// 目标仓库id
    /// </summary>

    int32_t getTargetRepositoryId() const;
    bool targetRepositoryIdIsSet() const;
    void unsettargetRepositoryId();
    void setTargetRepositoryId(int32_t value);

    /// <summary>
    /// 打分模式评审人ids，使用逗号分隔
    /// </summary>

    std::string getReviewerIds() const;
    bool reviewerIdsIsSet() const;
    void unsetreviewerIds();
    void setReviewerIds(const std::string& value);

    /// <summary>
    /// 合并人ids，使用逗号分隔
    /// </summary>

    std::string getAssigneeIds() const;
    bool assigneeIdsIsSet() const;
    void unsetassigneeIds();
    void setAssigneeIds(const std::string& value);

    /// <summary>
    /// 审核模式检视人ids，使用逗号分隔
    /// </summary>

    std::string getApprovalReviewerIds() const;
    bool approvalReviewerIdsIsSet() const;
    void unsetapprovalReviewerIds();
    void setApprovalReviewerIds(const std::string& value);

    /// <summary>
    /// 审核人ids，使用逗号分隔
    /// </summary>

    std::string getApprovalApproversIds() const;
    bool approvalApproversIdsIsSet() const;
    void unsetapprovalApproversIds();
    void setApprovalApproversIds(const std::string& value);

    /// <summary>
    /// 合并请求描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 里程碑id
    /// </summary>

    int32_t getMilestoneId() const;
    bool milestoneIdIsSet() const;
    void unsetmilestoneId();
    void setMilestoneId(int32_t value);

    /// <summary>
    /// 标签名称，使用逗号分隔
    /// </summary>

    Object getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const Object& value);

    /// <summary>
    /// 合入后自动删除源分支
    /// </summary>

    bool isForceRemoveSourceBranch() const;
    bool forceRemoveSourceBranchIsSet() const;
    void unsetforceRemoveSourceBranch();
    void setForceRemoveSourceBranch(bool value);

    /// <summary>
    /// 压缩合并
    /// </summary>

    bool isSquash() const;
    bool squashIsSet() const;
    void unsetsquash();
    void setSquash(bool value);

    /// <summary>
    /// 压缩合并信息
    /// </summary>

    std::string getSquashCommitMessage() const;
    bool squashCommitMessageIsSet() const;
    void unsetsquashCommitMessage();
    void setSquashCommitMessage(const std::string& value);

    /// <summary>
    /// e2e单号
    /// </summary>

    std::vector<std::string>& getWorkItemIds();
    bool workItemIdsIsSet() const;
    void unsetworkItemIds();
    void setWorkItemIds(const std::vector<std::string>& value);

    /// <summary>
    /// 使用临时分支创建合并请求
    /// </summary>

    bool isIsUseTempBranch() const;
    bool isUseTempBranchIsSet() const;
    void unsetisUseTempBranch();
    void setIsUseTempBranch(bool value);

    /// <summary>
    /// 只有合并人允许合入
    /// </summary>

    bool isOnlyAssigneeCanMerge() const;
    bool onlyAssigneeCanMergeIsSet() const;
    void unsetonlyAssigneeCanMerge();
    void setOnlyAssigneeCanMerge(bool value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    int32_t targetRepositoryId_;
    bool targetRepositoryIdIsSet_;
    std::string reviewerIds_;
    bool reviewerIdsIsSet_;
    std::string assigneeIds_;
    bool assigneeIdsIsSet_;
    std::string approvalReviewerIds_;
    bool approvalReviewerIdsIsSet_;
    std::string approvalApproversIds_;
    bool approvalApproversIdsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t milestoneId_;
    bool milestoneIdIsSet_;
    Object labels_;
    bool labelsIsSet_;
    bool forceRemoveSourceBranch_;
    bool forceRemoveSourceBranchIsSet_;
    bool squash_;
    bool squashIsSet_;
    std::string squashCommitMessage_;
    bool squashCommitMessageIsSet_;
    std::vector<std::string> workItemIds_;
    bool workItemIdsIsSet_;
    bool isUseTempBranch_;
    bool isUseTempBranchIsSet_;
    bool onlyAssigneeCanMerge_;
    bool onlyAssigneeCanMergeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PostMergeRequestParamsDtoForOpenApi_H_
