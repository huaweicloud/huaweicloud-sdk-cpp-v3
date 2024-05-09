
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckTableConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckTableConfigResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/TableConfigCheckResult.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckTableConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckTableConfigResponse();
    virtual ~CheckTableConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckTableConfigResponse members

    /// <summary>
    /// GaussDB(for MySQL)数据库名。
    /// </summary>

    std::string getSourceDatabaseName() const;
    bool sourceDatabaseNameIsSet() const;
    void unsetsourceDatabaseName();
    void setSourceDatabaseName(const std::string& value);

    /// <summary>
    /// 目标数据库名。
    /// </summary>

    std::string getTargetDatabaseName() const;
    bool targetDatabaseNameIsSet() const;
    void unsettargetDatabaseName();
    void setTargetDatabaseName(const std::string& value);

    /// <summary>
    /// 表配置检查结果。
    /// </summary>

    std::vector<TableConfigCheckResult>& getTblConfigCheckResults();
    bool tblConfigCheckResultsIsSet() const;
    void unsettblConfigCheckResults();
    void setTblConfigCheckResults(const std::vector<TableConfigCheckResult>& value);

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
    std::string targetDatabaseName_;
    bool targetDatabaseNameIsSet_;
    std::vector<TableConfigCheckResult> tblConfigCheckResults_;
    bool tblConfigCheckResultsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckTableConfigResponse_H_
