
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_COEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_COEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CcbEntity.h>
#include <string>
#include <huaweicloud/projectman/v4/model/ReviewCommentEntity.h>
#include <huaweicloud/projectman/v4/model/UserEntity.h>
#include <huaweicloud/projectman/v4/model/ReviewOpinionEntity.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  COEntity
    : public ModelBase
{
public:
    COEntity();
    virtual ~COEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// COEntity members

    /// <summary>
    /// 变更对象修改后内容。
    /// </summary>

    std::string getAfterChange() const;
    bool afterChangeIsSet() const;
    void unsetafterChange();
    void setAfterChange(const std::string& value);

    /// <summary>
    /// 变更对象评审完成时间。
    /// </summary>

    std::string getReviewCompleteTime() const;
    bool reviewCompleteTimeIsSet() const;
    void unsetreviewCompleteTime();
    void setReviewCompleteTime(const std::string& value);

    /// <summary>
    /// 变更对象评审阶段结果。
    /// </summary>

    std::string getReviewPhaseResult() const;
    bool reviewPhaseResultIsSet() const;
    void unsetreviewPhaseResult();
    void setReviewPhaseResult(const std::string& value);

    /// <summary>
    /// 变更对象评审时间。
    /// </summary>

    std::string getReviewTime() const;
    bool reviewTimeIsSet() const;
    void unsetreviewTime();
    void setReviewTime(const std::string& value);

    /// <summary>
    /// 变更对象工作项修改前内容。
    /// </summary>

    std::string getBeforeChange() const;
    bool beforeChangeIsSet() const;
    void unsetbeforeChange();
    void setBeforeChange(const std::string& value);

    /// <summary>
    /// 变更对象工作项类型，此处固定为CO。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CcbEntity getCcbInfo() const;
    bool ccbInfoIsSet() const;
    void unsetccbInfo();
    void setCcbInfo(const CcbEntity& value);

    /// <summary>
    /// 变更对象决策人列表，列表中只有一个元素。
    /// </summary>

    std::vector<UserEntity>& getCcbs();
    bool ccbsIsSet() const;
    void unsetccbs();
    void setCcbs(const std::vector<UserEntity>& value);

    /// <summary>
    /// 变更类型。
    /// </summary>

    std::string getChangeType() const;
    bool changeTypeIsSet() const;
    void unsetchangeType();
    void setChangeType(const std::string& value);

    /// <summary>
    /// 变更对象关联的评审单ID。
    /// </summary>

    std::string getCo2review() const;
    bool co2reviewIsSet() const;
    void unsetco2review();
    void setCo2review(const std::string& value);

    /// <summary>
    /// 变更对象的创建人ID。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 变更对象创建时间。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 变更对象描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 变更对象ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 变更对象关联的工作项ID。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 变更对象关联的工作项编号。
    /// </summary>

    std::string getIssueNumber() const;
    bool issueNumberIsSet() const;
    void unsetissueNumber();
    void setIssueNumber(const std::string& value);

    /// <summary>
    /// 变更对象关联的工作项类型。
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// 变更对象最后修改人ID。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// 变更对象最后修改时间。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 变更对象评审专家Id列表（创建变更评审时使用）。
    /// </summary>

    std::vector<UserEntity>& getOpinions();
    bool opinionsIsSet() const;
    void unsetopinions();
    void setOpinions(const std::vector<UserEntity>& value);

    /// <summary>
    /// 变更对象评审意见。
    /// </summary>

    std::vector<ReviewOpinionEntity>& getOpinionComments();
    bool opinionCommentsIsSet() const;
    void unsetopinionComments();
    void setOpinionComments(const std::vector<ReviewOpinionEntity>& value);

    /// <summary>
    /// 变更对象评审意见（评审更新时使用）。
    /// </summary>

    std::vector<ReviewCommentEntity>& getReviewComments();
    bool reviewCommentsIsSet() const;
    void unsetreviewComments();
    void setReviewComments(const std::vector<ReviewCommentEntity>& value);

    /// <summary>
    /// 变更对象决策意见（决策更新时使用）。
    /// </summary>

    std::vector<ReviewCommentEntity>& getApprovalComments();
    bool approvalCommentsIsSet() const;
    void unsetapprovalComments();
    void setApprovalComments(const std::vector<ReviewCommentEntity>& value);

    /// <summary>
    /// 变更对象评审专家Id列表。
    /// </summary>

    std::vector<std::string>& getReviewer();
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::vector<std::string>& value);

    /// <summary>
    /// 变更对象决策人ID数组。
    /// </summary>

    std::vector<std::string>& getApprover();
    bool approverIsSet() const;
    void unsetapprover();
    void setApprover(const std::vector<std::string>& value);

    /// <summary>
    /// 变更对象状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string afterChange_;
    bool afterChangeIsSet_;
    std::string reviewCompleteTime_;
    bool reviewCompleteTimeIsSet_;
    std::string reviewPhaseResult_;
    bool reviewPhaseResultIsSet_;
    std::string reviewTime_;
    bool reviewTimeIsSet_;
    std::string beforeChange_;
    bool beforeChangeIsSet_;
    std::string category_;
    bool categoryIsSet_;
    CcbEntity ccbInfo_;
    bool ccbInfoIsSet_;
    std::vector<UserEntity> ccbs_;
    bool ccbsIsSet_;
    std::string changeType_;
    bool changeTypeIsSet_;
    std::string co2review_;
    bool co2reviewIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string issueNumber_;
    bool issueNumberIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::vector<UserEntity> opinions_;
    bool opinionsIsSet_;
    std::vector<ReviewOpinionEntity> opinionComments_;
    bool opinionCommentsIsSet_;
    std::vector<ReviewCommentEntity> reviewComments_;
    bool reviewCommentsIsSet_;
    std::vector<ReviewCommentEntity> approvalComments_;
    bool approvalCommentsIsSet_;
    std::vector<std::string> reviewer_;
    bool reviewerIsSet_;
    std::vector<std::string> approver_;
    bool approverIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_COEntity_H_
