
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckClickHouseTableConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckClickHouseTableConfigResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChDatabaseTableConfigCheckResult.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckClickHouseTableConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckClickHouseTableConfigResponse();
    virtual ~CheckClickHouseTableConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckClickHouseTableConfigResponse members

    /// <summary>
    /// 源数据库名。
    /// </summary>

    std::string getSourceDatabaseName() const;
    bool sourceDatabaseNameIsSet() const;
    void unsetsourceDatabaseName();
    void setSourceDatabaseName(const std::string& value);

    /// <summary>
    /// 表配置检查结果。
    /// </summary>

    std::vector<ChDatabaseTableConfigCheckResult>& getTableConfigCheckResults();
    bool tableConfigCheckResultsIsSet() const;
    void unsettableConfigCheckResults();
    void setTableConfigCheckResults(const std::vector<ChDatabaseTableConfigCheckResult>& value);


protected:
    std::string sourceDatabaseName_;
    bool sourceDatabaseNameIsSet_;
    std::vector<ChDatabaseTableConfigCheckResult> tableConfigCheckResults_;
    bool tableConfigCheckResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckClickHouseTableConfigResponse_H_
