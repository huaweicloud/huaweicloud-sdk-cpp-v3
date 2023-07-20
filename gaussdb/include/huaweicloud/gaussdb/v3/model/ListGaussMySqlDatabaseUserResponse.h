
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseUserResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseUserResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseUser.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListGaussMySqlDatabaseUserResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGaussMySqlDatabaseUserResponse();
    virtual ~ListGaussMySqlDatabaseUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListGaussMySqlDatabaseUserResponse members

    /// <summary>
    /// 数据库用户列表。
    /// </summary>

    std::vector<ListGaussMySqlDatabaseUser>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<ListGaussMySqlDatabaseUser>& value);

    /// <summary>
    /// 实例的数据库用户总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListGaussMySqlDatabaseUser> users_;
    bool usersIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseUserResponse_H_
