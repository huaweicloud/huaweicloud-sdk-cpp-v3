
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CcbEntity.h>
#include <string>
#include <huaweicloud/projectman/v4/model/StatusEntity.h>
#include <huaweicloud/projectman/v4/model/UserEntity.h>
#include <huaweicloud/projectman/v4/model/COEntity.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ReviewEntity
    : public ModelBase
{
public:
    ReviewEntity();
    virtual ~ReviewEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewEntity members

    /// <summary>
    /// 评审单ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 评审单编号。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 评审单的生命周期。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 评审单标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 评审单类别。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const UserEntity& value);

    /// <summary>
    /// 评审单抄送人。
    /// </summary>

    std::vector<UserEntity>& getAssignedCc();
    bool assignedCcIsSet() const;
    void unsetassignedCc();
    void setAssignedCc(const std::vector<UserEntity>& value);

    /// <summary>
    /// 评审单创建时间戳。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 评审单最后修改时间戳。
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// 计划完成日期时间戳。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 计划开始日期时间戳。
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// 评审单完成时间。
    /// </summary>

    std::string getCloseTime() const;
    bool closeTimeIsSet() const;
    void unsetcloseTime();
    void setCloseTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StatusEntity getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const StatusEntity& value);

    /// <summary>
    /// 评审单描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 评审单完成时间。
    /// </summary>

    std::string getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(const std::string& value);

    /// <summary>
    /// 决策人ID。
    /// </summary>

    std::string getApprover() const;
    bool approverIsSet() const;
    void unsetapprover();
    void setApprover(const std::string& value);

    /// <summary>
    /// 评审专家ID。
    /// </summary>

    std::string getReviewer() const;
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::string& value);

    /// <summary>
    /// 评审对象列表。
    /// </summary>

    std::vector<COEntity>& getCos();
    bool cosIsSet() const;
    void unsetcos();
    void setCos(const std::vector<COEntity>& value);

    /// <summary>
    /// 审批信息列表。
    /// </summary>

    std::vector<CcbEntity>& getCcbs();
    bool ccbsIsSet() const;
    void unsetccbs();
    void setCcbs(const std::vector<CcbEntity>& value);

    /// <summary>
    /// 
    /// </summary>

    StatusEntity getOldStatus() const;
    bool oldStatusIsSet() const;
    void unsetoldStatus();
    void setOldStatus(const StatusEntity& value);

    /// <summary>
    /// 抄送人列表。
    /// </summary>

    std::vector<UserEntity>& getCc();
    bool ccIsSet() const;
    void unsetcc();
    void setCc(const std::vector<UserEntity>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string category_;
    bool categoryIsSet_;
    UserEntity createdBy_;
    bool createdByIsSet_;
    UserEntity modifiedBy_;
    bool modifiedByIsSet_;
    std::vector<UserEntity> assignedCc_;
    bool assignedCcIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string modifiedTime_;
    bool modifiedTimeIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    std::string closeTime_;
    bool closeTimeIsSet_;
    StatusEntity status_;
    bool statusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string closedTime_;
    bool closedTimeIsSet_;
    std::string approver_;
    bool approverIsSet_;
    std::string reviewer_;
    bool reviewerIsSet_;
    std::vector<COEntity> cos_;
    bool cosIsSet_;
    std::vector<CcbEntity> ccbs_;
    bool ccbsIsSet_;
    StatusEntity oldStatus_;
    bool oldStatusIsSet_;
    std::vector<UserEntity> cc_;
    bool ccIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewEntity_H_
