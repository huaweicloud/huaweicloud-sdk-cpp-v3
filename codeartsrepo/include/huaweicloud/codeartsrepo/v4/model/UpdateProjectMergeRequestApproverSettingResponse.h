
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectMergeRequestApproverSettingResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectMergeRequestApproverSettingResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateProjectMergeRequestApproverSettingResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateProjectMergeRequestApproverSettingResponse();
    virtual ~UpdateProjectMergeRequestApproverSettingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProjectMergeRequestApproverSettingResponse members

    /// <summary>
    /// **参数解释：**  设置主键id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：**  分支，可使用*作为通配符使用，如：dev* 指以dev开头的所有分支
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// 设置类型，当前仅开放branch类型
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 是否为审核模式，审核模式：true 评分模式：false
    /// </summary>

    bool isIsUseApproval() const;
    bool isUseApprovalIsSet() const;
    void unsetisUseApproval();
    void setIsUseApproval(bool value);

    /// <summary>
    /// 最小检视人数
    /// </summary>

    int32_t getApprovalRequiredReviewers() const;
    bool approvalRequiredReviewersIsSet() const;
    void unsetapprovalRequiredReviewers();
    void setApprovalRequiredReviewers(int32_t value);

    /// <summary>
    /// 最小审核人数
    /// </summary>

    int32_t getApprovalRequiredApprovers() const;
    bool approvalRequiredApproversIsSet() const;
    void unsetapprovalRequiredApprovers();
    void setApprovalRequiredApprovers(int32_t value);

    /// <summary>
    /// 推送时是否重置审核门禁状态
    /// </summary>

    bool isResetApprovalsOnPush() const;
    bool resetApprovalsOnPushIsSet() const;
    void unsetresetApprovalsOnPush();
    void setResetApprovalsOnPush(bool value);

    /// <summary>
    /// 推送时是否重置检视门禁状态
    /// </summary>

    bool isResetReviewersOnPush() const;
    bool resetReviewersOnPushIsSet() const;
    void unsetresetReviewersOnPush();
    void setResetReviewersOnPush(bool value);

    /// <summary>
    /// 是否开启仅能从以下审核/检视人中追加审核人/检视人
    /// </summary>

    bool isApproversFromProject() const;
    bool approversFromProjectIsSet() const;
    void unsetapproversFromProject();
    void setApproversFromProject(bool value);

    /// <summary>
    /// 追加检视人id列表
    /// </summary>

    std::vector<int32_t>& getAppendReviewerIds();
    bool appendReviewerIdsIsSet() const;
    void unsetappendReviewerIds();
    void setAppendReviewerIds(std::vector<int32_t> value);

    /// <summary>
    /// 追加检视人实体列表
    /// </summary>

    std::vector<UserBasicDto>& getAppendReviewers();
    bool appendReviewersIsSet() const;
    void unsetappendReviewers();
    void setAppendReviewers(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// 追加审核人id列表
    /// </summary>

    std::vector<int32_t>& getAppendApproverIds();
    bool appendApproverIdsIsSet() const;
    void unsetappendApproverIds();
    void setAppendApproverIds(std::vector<int32_t> value);

    /// <summary>
    /// 追加审核人实体列表
    /// </summary>

    std::vector<UserBasicDto>& getAppendApprovers();
    bool appendApproversIsSet() const;
    void unsetappendApprovers();
    void setAppendApprovers(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// 是否开启流水线门禁
    /// </summary>

    bool isOnlyMergeWhenPipelinePass() const;
    bool onlyMergeWhenPipelinePassIsSet() const;
    void unsetonlyMergeWhenPipelinePass();
    void setOnlyMergeWhenPipelinePass(bool value);

    /// <summary>
    /// 合并人id列表
    /// </summary>

    std::vector<int32_t>& getAssigneeIds();
    bool assigneeIdsIsSet() const;
    void unsetassigneeIds();
    void setAssigneeIds(std::vector<int32_t> value);

    /// <summary>
    /// 合并人实体列表
    /// </summary>

    std::vector<UserBasicDto>& getAssignees();
    bool assigneesIsSet() const;
    void unsetassignees();
    void setAssignees(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// 审核人id列表
    /// </summary>

    std::vector<int32_t>& getApproverIds();
    bool approverIdsIsSet() const;
    void unsetapproverIds();
    void setApproverIds(std::vector<int32_t> value);

    /// <summary>
    /// 审核人实体列表
    /// </summary>

    std::vector<UserBasicDto>& getApprovers();
    bool approversIsSet() const;
    void unsetapprovers();
    void setApprovers(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// 检视人id列表
    /// </summary>

    std::vector<int32_t>& getReviewerIds();
    bool reviewerIdsIsSet() const;
    void unsetreviewerIds();
    void setReviewerIds(std::vector<int32_t> value);

    /// <summary>
    /// 检视人实体列表
    /// </summary>

    std::vector<UserBasicDto>& getReviewers();
    bool reviewersIsSet() const;
    void unsetreviewers();
    void setReviewers(const std::vector<UserBasicDto>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string target_;
    bool targetIsSet_;
    std::string targetType_;
    bool targetTypeIsSet_;
    bool isUseApproval_;
    bool isUseApprovalIsSet_;
    int32_t approvalRequiredReviewers_;
    bool approvalRequiredReviewersIsSet_;
    int32_t approvalRequiredApprovers_;
    bool approvalRequiredApproversIsSet_;
    bool resetApprovalsOnPush_;
    bool resetApprovalsOnPushIsSet_;
    bool resetReviewersOnPush_;
    bool resetReviewersOnPushIsSet_;
    bool approversFromProject_;
    bool approversFromProjectIsSet_;
    std::vector<int32_t> appendReviewerIds_;
    bool appendReviewerIdsIsSet_;
    std::vector<UserBasicDto> appendReviewers_;
    bool appendReviewersIsSet_;
    std::vector<int32_t> appendApproverIds_;
    bool appendApproverIdsIsSet_;
    std::vector<UserBasicDto> appendApprovers_;
    bool appendApproversIsSet_;
    bool onlyMergeWhenPipelinePass_;
    bool onlyMergeWhenPipelinePassIsSet_;
    std::vector<int32_t> assigneeIds_;
    bool assigneeIdsIsSet_;
    std::vector<UserBasicDto> assignees_;
    bool assigneesIsSet_;
    std::vector<int32_t> approverIds_;
    bool approverIdsIsSet_;
    std::vector<UserBasicDto> approvers_;
    bool approversIsSet_;
    std::vector<int32_t> reviewerIds_;
    bool reviewerIdsIsSet_;
    std::vector<UserBasicDto> reviewers_;
    bool reviewersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectMergeRequestApproverSettingResponse_H_
