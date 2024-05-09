
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableConfigCheckResult_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableConfigCheckResult_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 表配置校验结果。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TableConfigCheckResult
    : public ModelBase
{
public:
    TableConfigCheckResult();
    virtual ~TableConfigCheckResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TableConfigCheckResult members

    /// <summary>
    /// 表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 表配置项。
    /// </summary>

    std::string getTableConfig() const;
    bool tableConfigIsSet() const;
    void unsettableConfig();
    void setTableConfig(const std::string& value);

    /// <summary>
    /// 校验结果。
    /// </summary>

    std::string getCheckResult() const;
    bool checkResultIsSet() const;
    void unsetcheckResult();
    void setCheckResult(const std::string& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string tableConfig_;
    bool tableConfigIsSet_;
    std::string checkResult_;
    bool checkResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableConfigCheckResult_H_
