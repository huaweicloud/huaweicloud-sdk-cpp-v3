
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DirtyData_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DirtyData_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 异常数据。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DirtyData
    : public ModelBase
{
public:
    DirtyData();
    virtual ~DirtyData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DirtyData members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 模式名称。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 表名称。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 异常SQL。
    /// </summary>

    std::string getErrorSql() const;
    bool errorSqlIsSet() const;
    void unseterrorSql();
    void setErrorSql(const std::string& value);

    /// <summary>
    /// 发生异常时间，UTC时间，例如：2023-06-10T03:01:52Z
    /// </summary>

    std::string getErrorTime() const;
    bool errorTimeIsSet() const;
    void unseterrorTime();
    void setErrorTime(const std::string& value);

    /// <summary>
    /// 异常信息。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string errorSql_;
    bool errorSqlIsSet_;
    std::string errorTime_;
    bool errorTimeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DirtyData_H_
