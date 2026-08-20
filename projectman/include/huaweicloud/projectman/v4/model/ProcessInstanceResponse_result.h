
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_created_by.h>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_modified_by.h>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_status.h>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_cos.h>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_opinions.h>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_review_config.h>
#include <string>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_ccbs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProcessInstanceResponse_result
    : public ModelBase
{
public:
    ProcessInstanceResponse_result();
    virtual ~ProcessInstanceResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessInstanceResponse_result members

    /// <summary>
    /// 抄送人列表
    /// </summary>

    std::string getCc() const;
    bool ccIsSet() const;
    void unsetcc();
    void setCc(const std::string& value);

    /// <summary>
    /// 决策人ID
    /// </summary>

    std::string getApprover() const;
    bool approverIsSet() const;
    void unsetapprover();
    void setApprover(const std::string& value);

    /// <summary>
    /// 评审单描述，列表接口不返回描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 评审单完成时间
    /// </summary>

    std::string getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(const std::string& value);

    /// <summary>
    /// 评审专家ID，逗号分隔
    /// </summary>

    std::string getReviewer() const;
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 评审单标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 评审单最后修改时间戳
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result_created_by getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const ProcessInstanceResponse_result_created_by& value);

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 评审单编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 是否需要审批
    /// </summary>

    bool isNeedApproval() const;
    bool needApprovalIsSet() const;
    void unsetneedApproval();
    void setNeedApproval(bool value);

    /// <summary>
    /// 基线评审对象
    /// </summary>

    std::string getBr2co() const;
    bool br2coIsSet() const;
    void unsetbr2co();
    void setBr2co(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result_modified_by getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const ProcessInstanceResponse_result_modified_by& value);

    /// <summary>
    /// 评审时间
    /// </summary>

    std::string getApprovalTime() const;
    bool approvalTimeIsSet() const;
    void unsetapprovalTime();
    void setApprovalTime(const std::string& value);

    /// <summary>
    /// 计划完成时间
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 评审单ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 评审单工作状态，取值为\&quot;正在工作\&quot;,\&quot;作废\&quot;
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 类别
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 计划开始时间
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result_review_config getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ProcessInstanceResponse_result_review_config& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ProcessInstanceResponse_result_status& value);

    /// <summary>
    /// 阶段
    /// </summary>

    std::string getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(const std::string& value);

    /// <summary>
    /// 变更对象评审专家Id列表（创建变更评审时使用）
    /// </summary>

    std::vector<ProcessInstanceResponse_result_opinions>& getOpinions();
    bool opinionsIsSet() const;
    void unsetopinions();
    void setOpinions(const std::vector<ProcessInstanceResponse_result_opinions>& value);

    /// <summary>
    /// 评审意见
    /// </summary>

    std::vector<std::string>& getOpinionComments();
    bool opinionCommentsIsSet() const;
    void unsetopinionComments();
    void setOpinionComments(const std::vector<std::string>& value);

    /// <summary>
    /// 附件
    /// </summary>

    std::vector<std::string>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetattachments();
    void setAttachments(const std::vector<std::string>& value);

    /// <summary>
    /// 关联wiki
    /// </summary>

    std::vector<std::string>& getWikis();
    bool wikisIsSet() const;
    void unsetwikis();
    void setWikis(const std::vector<std::string>& value);

    /// <summary>
    /// 关联文档
    /// </summary>

    std::vector<std::string>& getAssociatedocuments();
    bool associatedocumentsIsSet() const;
    void unsetassociatedocuments();
    void setAssociatedocuments(const std::vector<std::string>& value);

    /// <summary>
    /// 评审对象列表
    /// </summary>

    std::vector<ProcessInstanceResponse_result_cos>& getCos();
    bool cosIsSet() const;
    void unsetcos();
    void setCos(const std::vector<ProcessInstanceResponse_result_cos>& value);

    /// <summary>
    /// 评审结果
    /// </summary>

    std::string getApprovalPhaseResult() const;
    bool approvalPhaseResultIsSet() const;
    void unsetapprovalPhaseResult();
    void setApprovalPhaseResult(const std::string& value);

    /// <summary>
    /// 审批信息列表
    /// </summary>

    std::vector<ProcessInstanceResponse_result_ccbs>& getCcbs();
    bool ccbsIsSet() const;
    void unsetccbs();
    void setCcbs(const std::vector<ProcessInstanceResponse_result_ccbs>& value);


protected:
    std::string cc_;
    bool ccIsSet_;
    std::string approver_;
    bool approverIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string closedTime_;
    bool closedTimeIsSet_;
    std::string reviewer_;
    bool reviewerIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    ProcessInstanceResponse_result_created_by createdBy_;
    bool createdByIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string number_;
    bool numberIsSet_;
    bool needApproval_;
    bool needApprovalIsSet_;
    std::string br2co_;
    bool br2coIsSet_;
    ProcessInstanceResponse_result_modified_by modifiedBy_;
    bool modifiedByIsSet_;
    std::string approvalTime_;
    bool approvalTimeIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    ProcessInstanceResponse_result_review_config reviewConfig_;
    bool reviewConfigIsSet_;
    ProcessInstanceResponse_result_status status_;
    bool statusIsSet_;
    std::string stage_;
    bool stageIsSet_;
    std::vector<ProcessInstanceResponse_result_opinions> opinions_;
    bool opinionsIsSet_;
    std::vector<std::string> opinionComments_;
    bool opinionCommentsIsSet_;
    std::vector<std::string> attachments_;
    bool attachmentsIsSet_;
    std::vector<std::string> wikis_;
    bool wikisIsSet_;
    std::vector<std::string> associatedocuments_;
    bool associatedocumentsIsSet_;
    std::vector<ProcessInstanceResponse_result_cos> cos_;
    bool cosIsSet_;
    std::string approvalPhaseResult_;
    bool approvalPhaseResultIsSet_;
    std::vector<ProcessInstanceResponse_result_ccbs> ccbs_;
    bool ccbsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_H_
