
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDatabaseUserRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDatabaseUserRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CreateDatabaseUserList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建数据库用户的请求信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateDatabaseUserRequest
    : public ModelBase
{
public:
    CreateDatabaseUserRequest();
    virtual ~CreateDatabaseUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatabaseUserRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<CreateDatabaseUserList>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<CreateDatabaseUserList>& value);


protected:
    std::vector<CreateDatabaseUserList> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDatabaseUserRequest_H_
