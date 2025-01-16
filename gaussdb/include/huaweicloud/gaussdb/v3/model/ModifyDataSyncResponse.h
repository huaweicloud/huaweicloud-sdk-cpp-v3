
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDataSyncResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDataSyncResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/DbConfigCheckResult.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyDataSyncResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyDataSyncResponse();
    virtual ~ModifyDataSyncResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyDataSyncResponse members

    /// <summary>
    /// **参数解释**：  TaurusDB数据库名。  **取值范围**：  长度限制3~1024位，仅支持英文大小写字母、数字以及下划线。
    /// </summary>

    std::string getSourceDatabaseName() const;
    bool sourceDatabaseNameIsSet() const;
    void unsetsourceDatabaseName();
    void setSourceDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标数据库名。  **取值范围**：  长度限制3~1024位，仅支持英文大小写字母、数字以及下划线。
    /// </summary>

    std::string getTargetDatabaseName() const;
    bool targetDatabaseNameIsSet() const;
    void unsettargetDatabaseName();
    void setTargetDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**：  TaurusDB数据库配置检查结果。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<DbConfigCheckResult>& getSourceDbConfigCheckResults();
    bool sourceDbConfigCheckResultsIsSet() const;
    void unsetsourceDbConfigCheckResults();
    void setSourceDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value);

    /// <summary>
    /// **参数解释**：  表配置检查结果。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<TableConfigCheckResult>& getTblConfigCheckResults();
    bool tblConfigCheckResultsIsSet() const;
    void unsettblConfigCheckResults();
    void setTblConfigCheckResults(const std::vector<TableConfigCheckResult>& value);

    /// <summary>
    /// **参数解释**：  同步任务名称。  **取值范围**：  长度限制3~128位，仅支持英文大小写字母、数字以及下划线。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**：  修改同步配置工作流ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string sourceDatabaseName_;
    bool sourceDatabaseNameIsSet_;
    std::string targetDatabaseName_;
    bool targetDatabaseNameIsSet_;
    std::vector<DbConfigCheckResult> sourceDbConfigCheckResults_;
    bool sourceDbConfigCheckResultsIsSet_;
    std::vector<TableConfigCheckResult> tblConfigCheckResults_;
    bool tblConfigCheckResultsIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDataSyncResponse_H_
