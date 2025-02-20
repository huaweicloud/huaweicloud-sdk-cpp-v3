
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_repair_progress_info_repair_progress_details_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_repair_progress_info_repair_progress_details_H_


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
/// 修复进度明细
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobDetailResp_repair_progress_info_repair_progress_details
    : public ModelBase
{
public:
    JobDetailResp_repair_progress_info_repair_progress_details();
    virtual ~JobDetailResp_repair_progress_info_repair_progress_details();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobDetailResp_repair_progress_info_repair_progress_details members

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// 库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// schema名。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 总行数。
    /// </summary>

    int32_t getTotalRowCount() const;
    bool totalRowCountIsSet() const;
    void unsettotalRowCount();
    void setTotalRowCount(int32_t value);

    /// <summary>
    /// 完成行数。
    /// </summary>

    int32_t getCompleteRowCount() const;
    bool completeRowCountIsSet() const;
    void unsetcompleteRowCount();
    void setCompleteRowCount(int32_t value);

    /// <summary>
    /// 过滤行数。
    /// </summary>

    int32_t getFilterRowCount() const;
    bool filterRowCountIsSet() const;
    void unsetfilterRowCount();
    void setFilterRowCount(int32_t value);

    /// <summary>
    /// 已修复行数。
    /// </summary>

    int32_t getRepairedRowCount() const;
    bool repairedRowCountIsSet() const;
    void unsetrepairedRowCount();
    void setRepairedRowCount(int32_t value);

    /// <summary>
    /// 失败行数。
    /// </summary>

    int32_t getFailedRowCount() const;
    bool failedRowCountIsSet() const;
    void unsetfailedRowCount();
    void setFailedRowCount(int32_t value);

    /// <summary>
    /// 修复状态。
    /// </summary>

    int32_t getRepairStatus() const;
    bool repairStatusIsSet() const;
    void unsetrepairStatus();
    void setRepairStatus(int32_t value);

    /// <summary>
    /// 开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string queryId_;
    bool queryIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    int32_t totalRowCount_;
    bool totalRowCountIsSet_;
    int32_t completeRowCount_;
    bool completeRowCountIsSet_;
    int32_t filterRowCount_;
    bool filterRowCountIsSet_;
    int32_t repairedRowCount_;
    bool repairedRowCountIsSet_;
    int32_t failedRowCount_;
    bool failedRowCountIsSet_;
    int32_t repairStatus_;
    bool repairStatusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_repair_progress_info_repair_progress_details_H_
