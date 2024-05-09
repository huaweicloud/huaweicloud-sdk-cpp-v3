
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DataBaseInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DataBaseInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/DbConfigCheckResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库校验信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DataBaseInfo
    : public ModelBase
{
public:
    DataBaseInfo();
    virtual ~DataBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataBaseInfo members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 数据库配置检查结果。
    /// </summary>

    std::vector<DbConfigCheckResult>& getDbConfigCheckResults();
    bool dbConfigCheckResultsIsSet() const;
    void unsetdbConfigCheckResults();
    void setDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::vector<DbConfigCheckResult> dbConfigCheckResults_;
    bool dbConfigCheckResultsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DataBaseInfo_H_
