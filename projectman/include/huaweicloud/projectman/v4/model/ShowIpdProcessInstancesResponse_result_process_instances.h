
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_process_instances_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_process_instances_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ShowIpdProcessInstancesResponse_result_opinions.h>
#include <huaweicloud/projectman/v4/model/UserVO.h>
#include <huaweicloud/projectman/v4/model/ShowIpdProcessInstancesResponse_result_status.h>
#include <huaweicloud/projectman/v4/model/UserObject.h>
#include <string>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIpdProcessInstancesResponse_result_process_instances
    : public ModelBase
{
public:
    ShowIpdProcessInstancesResponse_result_process_instances();
    virtual ~ShowIpdProcessInstancesResponse_result_process_instances();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpdProcessInstancesResponse_result_process_instances members

    /// <summary>
    /// 抄送人，多值使用英文逗号分隔。
    /// </summary>

    std::string getCc() const;
    bool ccIsSet() const;
    void unsetcc();
    void setCc(const std::string& value);

    /// <summary>
    /// 评审单决策人。
    /// </summary>

    std::string getApprover() const;
    bool approverIsSet() const;
    void unsetapprover();
    void setApprover(const std::string& value);

    /// <summary>
    /// 评审单完成时间。
    /// </summary>

    std::string getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(const std::string& value);

    /// <summary>
    /// 评审专家。
    /// </summary>

    std::string getReviewer() const;
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::string& value);

    /// <summary>
    /// 评审分类。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 修改时间。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserVO& value);

    /// <summary>
    /// 项目空间ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 评审编号。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 是否需要决策人审批。
    /// </summary>

    std::string getNeedApproval() const;
    bool needApprovalIsSet() const;
    void unsetneedApproval();
    void setNeedApproval(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const UserVO& value);

    /// <summary>
    /// 审批时间。
    /// </summary>

    std::string getApprovalTime() const;
    bool approvalTimeIsSet() const;
    void unsetapprovalTime();
    void setApprovalTime(const std::string& value);

    /// <summary>
    /// 计划结束时间。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 评审单ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 评审单数据状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 评审单类型。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 计划开始时间。
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShowIpdProcessInstancesResponse_result_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ShowIpdProcessInstancesResponse_result_status& value);

    /// <summary>
    /// 决策人对象列表。
    /// </summary>

    std::vector<UserObject>& getCcbs();
    bool ccbsIsSet() const;
    void unsetccbs();
    void setCcbs(const std::vector<UserObject>& value);

    /// <summary>
    /// opinion对象列表。
    /// </summary>

    std::vector<ShowIpdProcessInstancesResponse_result_opinions>& getOpinions();
    bool opinionsIsSet() const;
    void unsetopinions();
    void setOpinions(const std::vector<ShowIpdProcessInstancesResponse_result_opinions>& value);


protected:
    std::string cc_;
    bool ccIsSet_;
    std::string approver_;
    bool approverIsSet_;
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
    UserVO createdBy_;
    bool createdByIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string needApproval_;
    bool needApprovalIsSet_;
    UserVO modifiedBy_;
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
    ShowIpdProcessInstancesResponse_result_status status_;
    bool statusIsSet_;
    std::vector<UserObject> ccbs_;
    bool ccbsIsSet_;
    std::vector<ShowIpdProcessInstancesResponse_result_opinions> opinions_;
    bool opinionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_process_instances_H_
