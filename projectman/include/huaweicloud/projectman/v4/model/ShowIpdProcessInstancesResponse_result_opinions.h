
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_opinions_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_opinions_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UserObject.h>
#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIpdProcessInstancesResponse_result_opinions
    : public ModelBase
{
public:
    ShowIpdProcessInstancesResponse_result_opinions();
    virtual ~ShowIpdProcessInstancesResponse_result_opinions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpdProcessInstancesResponse_result_opinions members

    /// <summary>
    /// opinion主键。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 类型分类。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// opinion状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 区域。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 类型。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 评审轮次。
    /// </summary>

    std::string getRounds() const;
    bool roundsIsSet() const;
    void unsetrounds();
    void setRounds(const std::string& value);

    /// <summary>
    /// 评审意见。
    /// </summary>

    std::string getOpinion() const;
    bool opinionIsSet() const;
    void unsetopinion();
    void setOpinion(const std::string& value);

    /// <summary>
    /// 描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 修改人。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

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

    UserObject getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserObject& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 项目空间ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 对象类型。
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// 对象ID。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserObject getCurrOwner() const;
    bool currOwnerIsSet() const;
    void unsetcurrOwner();
    void setCurrOwner(const UserObject& value);

    /// <summary>
    /// 变更对象ID。
    /// </summary>

    std::string getCoId() const;
    bool coIdIsSet() const;
    void unsetcoId();
    void setCoId(const std::string& value);

    /// <summary>
    /// 用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 评审工作项ID。
    /// </summary>

    std::string getOpinionIssueId() const;
    bool opinionIssueIdIsSet() const;
    void unsetopinionIssueId();
    void setOpinionIssueId(const std::string& value);

    /// <summary>
    /// 评审工作项类型。
    /// </summary>

    std::string getOpinionIssueCategory() const;
    bool opinionIssueCategoryIsSet() const;
    void unsetopinionIssueCategory();
    void setOpinionIssueCategory(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string rounds_;
    bool roundsIsSet_;
    std::string opinion_;
    bool opinionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    UserObject createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    UserObject currOwner_;
    bool currOwnerIsSet_;
    std::string coId_;
    bool coIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string opinionIssueId_;
    bool opinionIssueIdIsSet_;
    std::string opinionIssueCategory_;
    bool opinionIssueCategoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_opinions_H_
