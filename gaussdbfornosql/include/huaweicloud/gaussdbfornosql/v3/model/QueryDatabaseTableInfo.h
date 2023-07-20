
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryDatabaseTableInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryDatabaseTableInfo_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份里的库表信息。 - 为空表示实例级查询 - 非空表示库表级查询
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  QueryDatabaseTableInfo
    : public ModelBase
{
public:
    QueryDatabaseTableInfo();
    virtual ~QueryDatabaseTableInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryDatabaseTableInfo members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 表名称列表。 - table_names为空的时候，表示库级别查询。 - table_names非空的时候，表示表级别查询。
    /// </summary>

    std::vector<std::string>& getTableNames();
    bool tableNamesIsSet() const;
    void unsettableNames();
    void setTableNames(const std::vector<std::string>& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::vector<std::string> tableNames_;
    bool tableNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryDatabaseTableInfo_H_
