
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sql_operated_obj_info_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sql_operated_obj_info_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditSqlResponse_sql_operated_obj_info
    : public ModelBase
{
public:
    AuditSqlResponse_sql_operated_obj_info();
    virtual ~AuditSqlResponse_sql_operated_obj_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditSqlResponse_sql_operated_obj_info members

    /// <summary>
    /// 列名
    /// </summary>

    std::string getColumnName() const;
    bool columnNameIsSet() const;
    void unsetcolumnName();
    void setColumnName(const std::string& value);

    /// <summary>
    /// 操作对象类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// schema名称
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// sql类型
    /// </summary>

    std::string getSqlType() const;
    bool sqlTypeIsSet() const;
    void unsetsqlType();
    void setSqlType(const std::string& value);

    /// <summary>
    /// 系统名称
    /// </summary>

    std::string getSysName() const;
    bool sysNameIsSet() const;
    void unsetsysName();
    void setSysName(const std::string& value);

    /// <summary>
    /// 表名
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);


protected:
    std::string columnName_;
    bool columnNameIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string sqlType_;
    bool sqlTypeIsSet_;
    std::string sysName_;
    bool sysNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sql_operated_obj_info_H_
