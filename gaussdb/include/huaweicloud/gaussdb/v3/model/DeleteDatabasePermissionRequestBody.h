
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteDatabasePermissionRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteDatabasePermissionRequestBody_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DeleteDatabasePermission.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除数据库用户的数据库权限
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteDatabasePermissionRequestBody
    : public ModelBase
{
public:
    DeleteDatabasePermissionRequestBody();
    virtual ~DeleteDatabasePermissionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteDatabasePermissionRequestBody members

    /// <summary>
    /// 数据库用户列表，列表最大长度为50。
    /// </summary>

    std::vector<DeleteDatabasePermission>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<DeleteDatabasePermission>& value);


protected:
    std::vector<DeleteDatabasePermission> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteDatabasePermissionRequestBody_H_
