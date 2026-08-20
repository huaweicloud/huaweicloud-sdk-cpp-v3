
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CcbEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CcbEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/UserEntity.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CcbEntity
    : public ModelBase
{
public:
    CcbEntity();
    virtual ~CcbEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CcbEntity members

    /// <summary>
    /// 审批时间。
    /// </summary>

    std::string getApprovalTime() const;
    bool approvalTimeIsSet() const;
    void unsetapprovalTime();
    void setApprovalTime(const std::string& value);

    /// <summary>
    /// 工作项类型，审批对象固定为CCB。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 审批对象关联的评审单ID。
    /// </summary>

    std::string getCcb2review() const;
    bool ccb2reviewIsSet() const;
    void unsetccb2review();
    void setCcb2review(const std::string& value);

    /// <summary>
    /// 关联的变更对象ID。
    /// </summary>

    std::string getCoId() const;
    bool coIdIsSet() const;
    void unsetcoId();
    void setCoId(const std::string& value);

    /// <summary>
    /// 审批对象ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const UserEntity& value);

    /// <summary>
    /// 审批意见。
    /// </summary>

    std::string getApprovalComments() const;
    bool approvalCommentsIsSet() const;
    void unsetapprovalComments();
    void setApprovalComments(const std::string& value);


protected:
    std::string approvalTime_;
    bool approvalTimeIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string ccb2review_;
    bool ccb2reviewIsSet_;
    std::string coId_;
    bool coIdIsSet_;
    std::string id_;
    bool idIsSet_;
    UserEntity owner_;
    bool ownerIsSet_;
    std::string approvalComments_;
    bool approvalCommentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CcbEntity_H_
