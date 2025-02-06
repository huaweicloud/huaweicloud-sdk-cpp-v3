
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccountAssignmentDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccountAssignmentDto_H_


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
/// 创建绑定的实体类型
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AccountAssignmentDto
    : public ModelBase
{
public:
    AccountAssignmentDto();
    virtual ~AccountAssignmentDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountAssignmentDto members

    /// <summary>
    /// 账号的唯一标识
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 权限集唯一标识.
    /// </summary>

    std::string getPermissionSetId() const;
    bool permissionSetIdIsSet() const;
    void unsetpermissionSetId();
    void setPermissionSetId(const std::string& value);

    /// <summary>
    /// IAM身份中心中的一个实体身份唯一标识，例如用户或用户组
    /// </summary>

    std::string getPrincipalId() const;
    bool principalIdIsSet() const;
    void unsetprincipalId();
    void setPrincipalId(const std::string& value);

    /// <summary>
    /// 绑定的实体类型
    /// </summary>

    std::string getPrincipalType() const;
    bool principalTypeIsSet() const;
    void unsetprincipalType();
    void setPrincipalType(const std::string& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    std::string permissionSetId_;
    bool permissionSetIdIsSet_;
    std::string principalId_;
    bool principalIdIsSet_;
    std::string principalType_;
    bool principalTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccountAssignmentDto_H_
