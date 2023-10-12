
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectFilteringResult_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectFilteringResult_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 数据库表过滤规则响应体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DbObjectFilteringResult
    : public ModelBase
{
public:
    DbObjectFilteringResult();
    virtual ~DbObjectFilteringResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DbObjectFilteringResult members

    /// <summary>
    /// 数据库库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据库Schema名称。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 数据库表名称。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 数据过滤校验结果。
    /// </summary>

    bool isIsSuccess() const;
    bool isSuccessIsSet() const;
    void unsetisSuccess();
    void setIsSuccess(bool value);

    /// <summary>
    /// 当数据过滤校验结果是false，返回校验失败的原因。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    bool isSuccess_;
    bool isSuccessIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectFilteringResult_H_
