
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateDatabaseRoleRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateDatabaseRoleRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RolesOption.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CreateDatabaseRoleRequestBody
    : public ModelBase
{
public:
    CreateDatabaseRoleRequestBody();
    virtual ~CreateDatabaseRoleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDatabaseRoleRequestBody members

    /// <summary>
    /// 创建角色名称。 - 长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、中划线、下划线和点。
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// 角色所在的数据库名称，默认admin。 - 长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、下划线。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 新用户所拥有的角色。
    /// </summary>

    std::vector<RolesOption>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<RolesOption>& value);


protected:
    std::string roleName_;
    bool roleNameIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<RolesOption> roles_;
    bool rolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateDatabaseRoleRequestBody_H_
