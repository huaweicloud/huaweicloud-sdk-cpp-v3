
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ResponsePermissionInfo_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ResponsePermissionInfo_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ResponsePermissionInfo
    : public ModelBase
{
public:
    ResponsePermissionInfo();
    virtual ~ResponsePermissionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponsePermissionInfo members

    /// <summary>
    /// **参数解释：** 角色id **取值范围：** 不涉及。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色名称 **取值范围：** 不涉及。
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色中文名称 **取值范围：** 不涉及。
    /// </summary>

    std::string getRoleNameCn() const;
    bool roleNameCnIsSet() const;
    void unsetroleNameCn();
    void setRoleNameCn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::map<std::string, Object>& getResourcePermissions();
    bool resourcePermissionsIsSet() const;
    void unsetresourcePermissions();
    void setResourcePermissions(const std::map<std::string, Object>& value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::string roleNameCn_;
    bool roleNameCnIsSet_;
    std::map<std::string, Object> resourcePermissions_;
    bool resourcePermissionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ResponsePermissionInfo_H_
