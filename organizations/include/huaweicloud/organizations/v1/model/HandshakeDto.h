
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_HandshakeDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_HandshakeDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/TargetDto.h>
#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 两个账号（发起者和接收者）之间为了能安全地建立关系，所需要交换的信息。例如，当管理账号（发起者）邀请另一个账号（接收者）加入其组织时，两个账号一系列邀请（握手）请求和响应交换信息。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  HandshakeDto
    : public ModelBase
{
public:
    HandshakeDto();
    virtual ~HandshakeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HandshakeDto members

    /// <summary>
    /// 邀请（握手）的唯一标识符（ID）。源账号在发起邀请（握手）时创建ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 邀请（握手）的统一资源名称。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// 邀请（握手）请求被接受、取消、拒绝或到期的日期和时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 提出邀请（握手）请求的日期和时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 组织管理账号的唯一标识符（ID）。
    /// </summary>

    std::string getManagementAccountId() const;
    bool managementAccountIdIsSet() const;
    void unsetmanagementAccountId();
    void setManagementAccountId(const std::string& value);

    /// <summary>
    /// 组织管理账号的名称。
    /// </summary>

    std::string getManagementAccountName() const;
    bool managementAccountNameIsSet() const;
    void unsetmanagementAccountName();
    void setManagementAccountName(const std::string& value);

    /// <summary>
    /// 组织的唯一标识符（ID）。
    /// </summary>

    std::string getOrganizationId() const;
    bool organizationIdIsSet() const;
    void unsetorganizationId();
    void setOrganizationId(const std::string& value);

    /// <summary>
    /// 给收件账号所有者的邮件中的附加信息。
    /// </summary>

    std::string getNotes() const;
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TargetDto getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const TargetDto& value);

    /// <summary>
    /// 邀请（握手）的当前状态, pending：邀请中；accepted：接受邀请；cancelled：取消邀请；declined：拒绝邀请；expired：邀请过期。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string urn_;
    bool urnIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    std::string managementAccountId_;
    bool managementAccountIdIsSet_;
    std::string managementAccountName_;
    bool managementAccountNameIsSet_;
    std::string organizationId_;
    bool organizationIdIsSet_;
    std::string notes_;
    bool notesIsSet_;
    TargetDto target_;
    bool targetIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_HandshakeDto_H_
