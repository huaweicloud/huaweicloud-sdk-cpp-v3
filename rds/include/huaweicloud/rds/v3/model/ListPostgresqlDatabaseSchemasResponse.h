
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDatabaseSchemasResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDatabaseSchemasResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/PostgresqlDatabaseForListSchema.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlDatabaseSchemasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPostgresqlDatabaseSchemasResponse();
    virtual ~ListPostgresqlDatabaseSchemasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPostgresqlDatabaseSchemasResponse members

    /// <summary>
    /// 列表中每个元素表示一个数据库schema。
    /// </summary>

    std::vector<PostgresqlDatabaseForListSchema>& getDatabaseSchemas();
    bool databaseSchemasIsSet() const;
    void unsetdatabaseSchemas();
    void setDatabaseSchemas(const std::vector<PostgresqlDatabaseForListSchema>& value);

    /// <summary>
    /// 数据库schema总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<PostgresqlDatabaseForListSchema> databaseSchemas_;
    bool databaseSchemasIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlDatabaseSchemasResponse_H_
