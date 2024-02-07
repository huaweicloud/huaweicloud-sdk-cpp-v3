
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseUserRoleRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseUserRoleRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DatabaseUserRoleRequest
    : public ModelBase
{
public:
    DatabaseUserRoleRequest();
    virtual ~DatabaseUserRoleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseUserRoleRequest members

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 角色名称
    /// </summary>

    std::vector<std::string>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<std::string>& value);


protected:
    std::string user_;
    bool userIsSet_;
    std::vector<std::string> roles_;
    bool rolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseUserRoleRequest_H_
