
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PermissionSetProvisioningStatusDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PermissionSetProvisioningStatusDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 为指定的权限集提供配置操作的状态
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  PermissionSetProvisioningStatusDto
    : public ModelBase
{
public:
    PermissionSetProvisioningStatusDto();
    virtual ~PermissionSetProvisioningStatusDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionSetProvisioningStatusDto members

    /// <summary>
    /// 账号的唯一身份标识
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 权限集创建日期
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailureReason() const;
    bool failureReasonIsSet() const;
    void unsetfailureReason();
    void setFailureReason(const std::string& value);

    /// <summary>
    /// 权限集唯一标识
    /// </summary>

    std::string getPermissionSetId() const;
    bool permissionSetIdIsSet() const;
    void unsetpermissionSetId();
    void setPermissionSetId(const std::string& value);

    /// <summary>
    /// 请求唯一标识
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 权限集授权状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string failureReason_;
    bool failureReasonIsSet_;
    std::string permissionSetId_;
    bool permissionSetIdIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PermissionSetProvisioningStatusDto_H_
