
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdatePermissionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdatePermissionDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/UpdatePermissionDetail.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdatePermissionDto
    : public ModelBase
{
public:
    UpdatePermissionDto();
    virtual ~UpdatePermissionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePermissionDto members

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
    /// **参数解释：** 更新权限点详情 **取值范围：** 不涉及。  
    /// </summary>

    std::vector<UpdatePermissionDetail>& getPermissions();
    bool permissionsIsSet() const;
    void unsetpermissions();
    void setPermissions(const std::vector<UpdatePermissionDetail>& value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::vector<UpdatePermissionDetail> permissions_;
    bool permissionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdatePermissionDto_H_
