
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeableStateOuterResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeableStateOuterResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowMergeableStateOuterResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMergeableStateOuterResponse();
    virtual ~ShowMergeableStateOuterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMergeableStateOuterResponse members

    /// <summary>
    /// **参数解释：** 合并请求id。
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求的可合入状态。 **约束限制：** - true，可合入。 - false，不可合入。
    /// </summary>

    bool isState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(bool value);

    /// <summary>
    /// **参数解释：** 合并请求冲突门禁是否通过。 **约束限制：** - true，不存在冲突。 - false，存在冲突。
    /// </summary>

    bool isConflictPassed() const;
    bool conflictPassedIsSet() const;
    void unsetconflictPassed();
    void setConflictPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求是否需要变基。 **约束限制：** - true，不需变基。 - false，需要变基。
    /// </summary>

    bool isNonFfPassed() const;
    bool nonFfPassedIsSet() const;
    void unsetnonFfPassed();
    void setNonFfPassed(bool value);

    /// <summary>
    /// **参数解释：** 对当前用户是否有合入当前合并请求的权限判断。 **约束限制：** - true，有权限合入。 - false，无权限合入。
    /// </summary>

    bool isMergedByUserPassed() const;
    bool mergedByUserPassedIsSet() const;
    void unsetmergedByUserPassed();
    void setMergedByUserPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求WIP门禁是否通过。 **约束限制：** - true，非WIP状态。 - false，WIP状态。
    /// </summary>

    bool isWorkInProgressPassed() const;
    bool workInProgressPassedIsSet() const;
    void unsetworkInProgressPassed();
    void setWorkInProgressPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求检视意见门禁是否通过。 **约束限制：** - true，检视意见门禁通过。 - false，检视意见门禁不通过。
    /// </summary>

    bool isResolveDiscussionPassed() const;
    bool resolveDiscussionPassedIsSet() const;
    void unsetresolveDiscussionPassed();
    void setResolveDiscussionPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求流水线门禁是否通过。 **约束限制：** - true，合并请求流水线门禁通过。 - false，合并请求流水线门禁不通过。
    /// </summary>

    bool isCiStatePassed() const;
    bool ciStatePassedIsSet() const;
    void unsetciStatePassed();
    void setCiStatePassed(bool value);

    /// <summary>
    /// **参数解释：** 对当前用户是否有合入自己创建的合并请求的判断。 **约束限制：** - true，非自己创建的mr可以合入。 - false，自己创建的mr不能合入。
    /// </summary>

    bool isMergeBySelfPassed() const;
    bool mergeBySelfPassedIsSet() const;
    void unsetmergeBySelfPassed();
    void setMergeBySelfPassed(bool value);

    /// <summary>
    /// **参数解释：** 当前用户是否可以强制合入当前合并请求。 **约束限制：** - true，可以强制合入。 - false，不能强制合入。
    /// </summary>

    bool isCanForceMerge() const;
    bool canForceMergeIsSet() const;
    void unsetcanForceMerge();
    void setCanForceMerge(bool value);

    /// <summary>
    /// **参数解释：** 合并请求评分门禁是否通过。 **约束限制：** - true，评分门禁通过。 - false，评分门禁不通过。
    /// </summary>

    bool isVotePassed() const;
    bool votePassedIsSet() const;
    void unsetvotePassed();
    void setVotePassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求必须与CodeArts Req关联门禁是否通过。 **约束限制：** - true，合并请求必须与CodeArts Req关联门禁通过。 - false，合并请求必须与CodeArts Req关联门禁不通过。
    /// </summary>

    bool isE2eCheckPassed() const;
    bool e2eCheckPassedIsSet() const;
    void unsete2eCheckPassed();
    void setE2eCheckPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求所有E2E单号校验必须通过门禁是否通过。 **约束限制：** - true，合并请求所有E2E单号校验必须通过门禁通过。 - false，合并请求所有E2E单号校验必须通过门禁不通过。
    /// </summary>

    bool isAllIssuesPassed() const;
    bool allIssuesPassedIsSet() const;
    void unsetallIssuesPassed();
    void setAllIssuesPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求只能关联一个单号门禁是否通过。 **约束限制：** - true，合并请求只能关联一个单号门禁通过。 - false，合并请求只能关联一个单号门禁不通过。
    /// </summary>

    bool isOnlyOneIssuePassed() const;
    bool onlyOneIssuePassedIsSet() const;
    void unsetonlyOneIssuePassed();
    void setOnlyOneIssuePassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求检视门禁是否通过。 **约束限制：** - true，合并请求检视门禁通过。 - false，合并请求检视门禁不通过。
    /// </summary>

    bool isApprovalReviewersRequiredPassed() const;
    bool approvalReviewersRequiredPassedIsSet() const;
    void unsetapprovalReviewersRequiredPassed();
    void setApprovalReviewersRequiredPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求审核门禁是否通过。 **约束限制：** - true，合并请求审核门禁通过。 - false，合并请求审核门禁不通过。
    /// </summary>

    bool isApprovalApproversRequiredPassed() const;
    bool approvalApproversRequiredPassedIsSet() const;
    void unsetapprovalApproversRequiredPassed();
    void setApprovalApproversRequiredPassed(bool value);

    /// <summary>
    /// **参数解释：** 合并请求星级评价门禁是否通过。 **约束限制：** - true，合并请求星级评价门禁通过。 - false，合并请求星级评价门禁不通过。
    /// </summary>

    bool isEvaluationPassed() const;
    bool evaluationPassedIsSet() const;
    void unsetevaluationPassed();
    void setEvaluationPassed(bool value);


protected:
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    bool state_;
    bool stateIsSet_;
    bool conflictPassed_;
    bool conflictPassedIsSet_;
    bool nonFfPassed_;
    bool nonFfPassedIsSet_;
    bool mergedByUserPassed_;
    bool mergedByUserPassedIsSet_;
    bool workInProgressPassed_;
    bool workInProgressPassedIsSet_;
    bool resolveDiscussionPassed_;
    bool resolveDiscussionPassedIsSet_;
    bool ciStatePassed_;
    bool ciStatePassedIsSet_;
    bool mergeBySelfPassed_;
    bool mergeBySelfPassedIsSet_;
    bool canForceMerge_;
    bool canForceMergeIsSet_;
    bool votePassed_;
    bool votePassedIsSet_;
    bool e2eCheckPassed_;
    bool e2eCheckPassedIsSet_;
    bool allIssuesPassed_;
    bool allIssuesPassedIsSet_;
    bool onlyOneIssuePassed_;
    bool onlyOneIssuePassedIsSet_;
    bool approvalReviewersRequiredPassed_;
    bool approvalReviewersRequiredPassedIsSet_;
    bool approvalApproversRequiredPassed_;
    bool approvalApproversRequiredPassedIsSet_;
    bool evaluationPassed_;
    bool evaluationPassedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeableStateOuterResponse_H_
