
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckClickHouseDataBaseConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckClickHouseDataBaseConfigResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/ChDatabaseConfigCheckResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckClickHouseDataBaseConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckClickHouseDataBaseConfigResponse();
    virtual ~CheckClickHouseDataBaseConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckClickHouseDataBaseConfigResponse members

    /// <summary>
    /// 源数据库名称。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 源数据库配置检查结果。
    /// </summary>

    std::vector<ChDatabaseConfigCheckResult>& getDbConfigCheckResults();
    bool dbConfigCheckResultsIsSet() const;
    void unsetdbConfigCheckResults();
    void setDbConfigCheckResults(const std::vector<ChDatabaseConfigCheckResult>& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::vector<ChDatabaseConfigCheckResult> dbConfigCheckResults_;
    bool dbConfigCheckResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckClickHouseDataBaseConfigResponse_H_
