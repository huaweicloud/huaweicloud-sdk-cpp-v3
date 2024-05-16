
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreTableListDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreTableListDetail_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RestoreTableListDetail
    : public ModelBase
{
public:
    RestoreTableListDetail();
    virtual ~RestoreTableListDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreTableListDetail members

    /// <summary>
    /// 库名参数必传
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// schema名  备份恢复到新实例和当前实例：使用DATABASE_TABLE级别恢复参数必传, 使用DATABASE类型恢复参数无效。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 表名  备份恢复到新实例和当前实例：使用DATABASE_TABLE级别恢复参数必传, 使用DATABASE类型恢复参数无效。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 新库名  备份恢复到新实例和当前实例：   使用DATABASE级别恢复：需注意目标实例不存在当前一样的库名，否则无法下发。   使用DATABASE_TABLE级别恢复，不填时与源库名一致。
    /// </summary>

    std::string getNewDbName() const;
    bool newDbNameIsSet() const;
    void unsetnewDbName();
    void setNewDbName(const std::string& value);

    /// <summary>
    /// 新schema_name  备份恢复到新实例和当前实例：    使用DATABASE类型恢复参数无效。   使用DATABASE_TABLE级别恢复，不填时与源schema名一致。
    /// </summary>

    std::string getNewSchemaName() const;
    bool newSchemaNameIsSet() const;
    void unsetnewSchemaName();
    void setNewSchemaName(const std::string& value);

    /// <summary>
    /// 新表名  备份恢复到新实例和当前实例：   使用DATABASE类型恢复参数无效。   使用DATABASE_TABLE级别恢复，需注意目标实例里不存在当前的表名，否则无法下发。
    /// </summary>

    std::string getNewTableName() const;
    bool newTableNameIsSet() const;
    void unsetnewTableName();
    void setNewTableName(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string newDbName_;
    bool newDbNameIsSet_;
    std::string newSchemaName_;
    bool newSchemaNameIsSet_;
    std::string newTableName_;
    bool newTableNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreTableListDetail_H_
