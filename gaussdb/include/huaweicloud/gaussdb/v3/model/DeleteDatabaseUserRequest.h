
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteDatabaseUserRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteDatabaseUserRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ListDeleteDatabaseUserRequest.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除数据库用户请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteDatabaseUserRequest
    : public ModelBase
{
public:
    DeleteDatabaseUserRequest();
    virtual ~DeleteDatabaseUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDatabaseUserRequest members

    /// <summary>
    /// 准备删除的数据库用户列表，列表最大长度为50。
    /// </summary>

    std::vector<ListDeleteDatabaseUserRequest>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<ListDeleteDatabaseUserRequest>& value);


protected:
    std::vector<ListDeleteDatabaseUserRequest> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteDatabaseUserRequest_H_
