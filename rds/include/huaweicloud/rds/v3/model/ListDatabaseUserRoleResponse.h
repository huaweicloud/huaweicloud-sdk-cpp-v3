
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDatabaseUserRoleResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDatabaseUserRoleResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListDatabaseUserRoleResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabaseUserRoleResponse();
    virtual ~ListDatabaseUserRoleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatabaseUserRoleResponse members

    /// <summary>
    /// 角色信息
    /// </summary>

    std::vector<std::string>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<std::string>& value);


protected:
    std::vector<std::string> roles_;
    bool rolesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDatabaseUserRoleResponse_H_
