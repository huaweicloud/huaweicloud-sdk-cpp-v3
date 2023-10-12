
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GrantDatabasePermissionRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GrantDatabasePermissionRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/GrantDatabasePermission.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 授予数据库用户数据库权限。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GrantDatabasePermissionRequestBody
    : public ModelBase
{
public:
    GrantDatabasePermissionRequestBody();
    virtual ~GrantDatabasePermissionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GrantDatabasePermissionRequestBody members

    /// <summary>
    /// 数据库用户列表，列表最大长度为50。
    /// </summary>

    std::vector<GrantDatabasePermission>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<GrantDatabasePermission>& value);


protected:
    std::vector<GrantDatabasePermission> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GrantDatabasePermissionRequestBody_H_
