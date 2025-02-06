
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateAccountAssignmentReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateAccountAssignmentReqBody_H_


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
/// CreateAccountAssignment请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  CreateAccountAssignmentReqBody
    : public ModelBase
{
public:
    CreateAccountAssignmentReqBody();
    virtual ~CreateAccountAssignmentReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccountAssignmentReqBody members

    /// <summary>
    /// 权限集唯一标识
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
    /// 创建绑定的实体类型
    /// </summary>

    std::string getPrincipalType() const;
    bool principalTypeIsSet() const;
    void unsetprincipalType();
    void setPrincipalType(const std::string& value);

    /// <summary>
    /// 待绑定的目标实体标识.
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// 创建绑定的实体类型.
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);


protected:
    std::string permissionSetId_;
    bool permissionSetIdIsSet_;
    std::string principalId_;
    bool principalIdIsSet_;
    std::string principalType_;
    bool principalTypeIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;
    std::string targetType_;
    bool targetTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateAccountAssignmentReqBody_H_
