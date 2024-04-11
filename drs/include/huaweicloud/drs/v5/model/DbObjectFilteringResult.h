
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

    /// <summary>
    /// 对比的来源 - job 表示数据同步时的过滤 - compare 表示数据对比的过滤
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 校验目标库比对条件过滤的结果
    /// </summary>

    std::string getTargetResult() const;
    bool targetResultIsSet() const;
    void unsettargetResult();
    void setTargetResult(const std::string& value);

    /// <summary>
    /// 校验源库比对条件过滤的结果
    /// </summary>

    std::string getSourceResult() const;
    bool sourceResultIsSet() const;
    void unsetsourceResult();
    void setSourceResult(const std::string& value);

    /// <summary>
    /// 校验目标库比对条件过滤的失败原因
    /// </summary>

    std::string getTargetMessage() const;
    bool targetMessageIsSet() const;
    void unsettargetMessage();
    void setTargetMessage(const std::string& value);

    /// <summary>
    /// 校验源库比对条件过滤的失败原因
    /// </summary>

    std::string getSourceMessage() const;
    bool sourceMessageIsSet() const;
    void unsetsourceMessage();
    void setSourceMessage(const std::string& value);


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
    std::string source_;
    bool sourceIsSet_;
    std::string targetResult_;
    bool targetResultIsSet_;
    std::string sourceResult_;
    bool sourceResultIsSet_;
    std::string targetMessage_;
    bool targetMessageIsSet_;
    std::string sourceMessage_;
    bool sourceMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectFilteringResult_H_
