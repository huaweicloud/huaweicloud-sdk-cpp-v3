
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDbUserPaginatedResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDbUserPaginatedResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/PostgresqlUserForList.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlDbUserPaginatedResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPostgresqlDbUserPaginatedResponse();
    virtual ~ListPostgresqlDbUserPaginatedResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPostgresqlDbUserPaginatedResponse members

    /// <summary>
    /// 列表中每个元素表示一个数据库用户。
    /// </summary>

    std::vector<PostgresqlUserForList>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<PostgresqlUserForList>& value);

    /// <summary>
    /// 数据库用户总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<PostgresqlUserForList> users_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDbUserPaginatedResponse_H_
