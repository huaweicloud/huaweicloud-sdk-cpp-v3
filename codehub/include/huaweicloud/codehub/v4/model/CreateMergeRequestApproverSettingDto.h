
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestApproverSettingDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestApproverSettingDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 审核策配置
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateMergeRequestApproverSettingDto
    : public ModelBase
{
public:
    CreateMergeRequestApproverSettingDto();
    virtual ~CreateMergeRequestApproverSettingDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestApproverSettingDto members

    /// <summary>
    /// 配置分支，可使用*作为通配符使用，如：dev* 指以dev开头的所有分支
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// 为false时，“最小检视人数”，“最小审核人数”，“重新推送代码时重置审核人”，“重新推送代码时重置检视人”，“仅能从以下审核人/检视人中追加审核人/检视人”置为默认
    /// </summary>

    bool isIsUseApproval() const;
    bool isUseApprovalIsSet() const;
    void unsetisUseApproval();
    void setIsUseApproval(bool value);

    /// <summary>
    /// 最小审核人数
    /// </summary>

    int32_t getApprovalRequiredApprovers() const;
    bool approvalRequiredApproversIsSet() const;
    void unsetapprovalRequiredApprovers();
    void setApprovalRequiredApprovers(int32_t value);

    /// <summary>
    /// 最小检视人数
    /// </summary>

    int32_t getApprovalRequiredReviewers() const;
    bool approvalRequiredReviewersIsSet() const;
    void unsetapprovalRequiredReviewers();
    void setApprovalRequiredReviewers(int32_t value);

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
    /// 追加检视人人用户id列表
    /// </summary>

    std::vector<int32_t>& getAppendReviewerIds();
    bool appendReviewerIdsIsSet() const;
    void unsetappendReviewerIds();
    void setAppendReviewerIds(std::vector<int32_t> value);

    /// <summary>
    /// 追加审核人用户id列表
    /// </summary>

    std::vector<int32_t>& getAppendApproverIds();
    bool appendApproverIdsIsSet() const;
    void unsetappendApproverIds();
    void setAppendApproverIds(std::vector<int32_t> value);

    /// <summary>
    /// 是否开启流水线门禁
    /// </summary>

    bool isOnlyMergeWhenPipelinePass() const;
    bool onlyMergeWhenPipelinePassIsSet() const;
    void unsetonlyMergeWhenPipelinePass();
    void setOnlyMergeWhenPipelinePass(bool value);

    /// <summary>
    /// 合并人用户id列表
    /// </summary>

    std::vector<int32_t>& getAssigneeIds();
    bool assigneeIdsIsSet() const;
    void unsetassigneeIds();
    void setAssigneeIds(std::vector<int32_t> value);

    /// <summary>
    /// 审核人用户id列表
    /// </summary>

    std::vector<int32_t>& getApproverIds();
    bool approverIdsIsSet() const;
    void unsetapproverIds();
    void setApproverIds(std::vector<int32_t> value);

    /// <summary>
    /// 检视人用户id列表
    /// </summary>

    std::vector<int32_t>& getReviewerIds();
    bool reviewerIdsIsSet() const;
    void unsetreviewerIds();
    void setReviewerIds(std::vector<int32_t> value);


protected:
    std::string target_;
    bool targetIsSet_;
    bool isUseApproval_;
    bool isUseApprovalIsSet_;
    int32_t approvalRequiredApprovers_;
    bool approvalRequiredApproversIsSet_;
    int32_t approvalRequiredReviewers_;
    bool approvalRequiredReviewersIsSet_;
    bool resetApprovalsOnPush_;
    bool resetApprovalsOnPushIsSet_;
    bool resetReviewersOnPush_;
    bool resetReviewersOnPushIsSet_;
    bool approversFromProject_;
    bool approversFromProjectIsSet_;
    std::vector<int32_t> appendReviewerIds_;
    bool appendReviewerIdsIsSet_;
    std::vector<int32_t> appendApproverIds_;
    bool appendApproverIdsIsSet_;
    bool onlyMergeWhenPipelinePass_;
    bool onlyMergeWhenPipelinePassIsSet_;
    std::vector<int32_t> assigneeIds_;
    bool assigneeIdsIsSet_;
    std::vector<int32_t> approverIds_;
    bool approverIdsIsSet_;
    std::vector<int32_t> reviewerIds_;
    bool reviewerIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestApproverSettingDto_H_
