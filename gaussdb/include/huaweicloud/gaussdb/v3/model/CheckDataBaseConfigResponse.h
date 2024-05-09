
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckDataBaseConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckDataBaseConfigResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckDataBaseConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckDataBaseConfigResponse();
    virtual ~CheckDataBaseConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckDataBaseConfigResponse members

    /// <summary>
    /// GaussDB(for MySQL)数据库名称。
    /// </summary>

    std::string getSourceDatabaseName() const;
    bool sourceDatabaseNameIsSet() const;
    void unsetsourceDatabaseName();
    void setSourceDatabaseName(const std::string& value);

    /// <summary>
    /// GaussDB(for MySQL)数据库配置检查结果。
    /// </summary>

    std::vector<DbConfigCheckResult>& getSourceDbConfigCheckResults();
    bool sourceDbConfigCheckResultsIsSet() const;
    void unsetsourceDbConfigCheckResults();
    void setSourceDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value);

    /// <summary>
    /// 目标数据库名称。
    /// </summary>

    std::string getTargetDatabaseName() const;
    bool targetDatabaseNameIsSet() const;
    void unsettargetDatabaseName();
    void setTargetDatabaseName(const std::string& value);

    /// <summary>
    /// 目标数据库配置检查结果。
    /// </summary>

    std::vector<DbConfigCheckResult>& getTargetDbConfigCheckResults();
    bool targetDbConfigCheckResultsIsSet() const;
    void unsettargetDbConfigCheckResults();
    void setTargetDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value);

    /// <summary>
    /// 同步任务名称。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);


protected:
    std::string sourceDatabaseName_;
    bool sourceDatabaseNameIsSet_;
    std::vector<DbConfigCheckResult> sourceDbConfigCheckResults_;
    bool sourceDbConfigCheckResultsIsSet_;
    std::string targetDatabaseName_;
    bool targetDatabaseNameIsSet_;
    std::vector<DbConfigCheckResult> targetDbConfigCheckResults_;
    bool targetDbConfigCheckResultsIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckDataBaseConfigResponse_H_
