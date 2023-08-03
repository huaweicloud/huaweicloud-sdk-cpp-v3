
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDatabasesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDatabasesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgresqlListDatabase.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlDatabasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPostgresqlDatabasesResponse();
    virtual ~ListPostgresqlDatabasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPostgresqlDatabasesResponse members

    /// <summary>
    /// 列表中每个元素表示一个数据库。
    /// </summary>

    std::vector<PostgresqlListDatabase>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<PostgresqlListDatabase>& value);

    /// <summary>
    /// 数据库总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<PostgresqlListDatabase> databases_;
    bool databasesIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDatabasesResponse_H_
