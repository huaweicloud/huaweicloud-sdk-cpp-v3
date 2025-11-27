
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Table_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Table_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Table
    : public ModelBase
{
public:
    Table();
    virtual ~Table();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Table members

    /// <summary>
    /// 指定数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 指定模式名称。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 指定表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Table_H_
