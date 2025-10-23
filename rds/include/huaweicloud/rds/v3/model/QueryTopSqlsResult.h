
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryTopSqlsResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryTopSqlsResult_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  QueryTopSqlsResult
    : public ModelBase
{
public:
    QueryTopSqlsResult();
    virtual ~QueryTopSqlsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTopSqlsResult members

    /// <summary>
    /// 对查询计算的二进制哈希值，用于标识具有类似逻辑的查询。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 当前执行的SQL语句。
    /// </summary>

    std::string getStatement() const;
    bool statementIsSet() const;
    void unsetstatement();
    void setStatement(const std::string& value);

    /// <summary>
    /// SQL全文。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 执行总次数。
    /// </summary>

    std::string getExecutionCount() const;
    bool executionCountIsSet() const;
    void unsetexecutionCount();
    void setExecutionCount(const std::string& value);

    /// <summary>
    /// 执行总次数百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getExecutionCountPercent() const;
    bool executionCountPercentIsSet() const;
    void unsetexecutionCountPercent();
    void setExecutionCountPercent(const std::string& value);

    /// <summary>
    /// 总CPU耗时，单位ms。
    /// </summary>

    std::string getTotalCpuTime() const;
    bool totalCpuTimeIsSet() const;
    void unsettotalCpuTime();
    void setTotalCpuTime(const std::string& value);

    /// <summary>
    /// 总CPU耗时百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getTotalCpuTimePercent() const;
    bool totalCpuTimePercentIsSet() const;
    void unsettotalCpuTimePercent();
    void setTotalCpuTimePercent(const std::string& value);

    /// <summary>
    /// 平均CPU耗时，单位ms。
    /// </summary>

    std::string getAvgCpuTime() const;
    bool avgCpuTimeIsSet() const;
    void unsetavgCpuTime();
    void setAvgCpuTime(const std::string& value);

    /// <summary>
    /// 平均CPU耗时百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getAvgCpuTimePercent() const;
    bool avgCpuTimePercentIsSet() const;
    void unsetavgCpuTimePercent();
    void setAvgCpuTimePercent(const std::string& value);

    /// <summary>
    /// 总执行耗时。
    /// </summary>

    std::string getTotalDurationTime() const;
    bool totalDurationTimeIsSet() const;
    void unsettotalDurationTime();
    void setTotalDurationTime(const std::string& value);

    /// <summary>
    /// 总执行耗时百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getTotalDurationTimePercent() const;
    bool totalDurationTimePercentIsSet() const;
    void unsettotalDurationTimePercent();
    void setTotalDurationTimePercent(const std::string& value);

    /// <summary>
    /// 平均执行耗时。
    /// </summary>

    std::string getAvgDurationTime() const;
    bool avgDurationTimeIsSet() const;
    void unsetavgDurationTime();
    void setAvgDurationTime(const std::string& value);

    /// <summary>
    /// 平均执行耗时百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getAvgDurationTimePercent() const;
    bool avgDurationTimePercentIsSet() const;
    void unsetavgDurationTimePercent();
    void setAvgDurationTimePercent(const std::string& value);

    /// <summary>
    /// 总返回行。
    /// </summary>

    std::string getTotalRows() const;
    bool totalRowsIsSet() const;
    void unsettotalRows();
    void setTotalRows(const std::string& value);

    /// <summary>
    /// 总返回行百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getTotalRowsPercent() const;
    bool totalRowsPercentIsSet() const;
    void unsettotalRowsPercent();
    void setTotalRowsPercent(const std::string& value);

    /// <summary>
    /// 平均返回行。
    /// </summary>

    std::string getAvgRows() const;
    bool avgRowsIsSet() const;
    void unsetavgRows();
    void setAvgRows(const std::string& value);

    /// <summary>
    /// 平均返回行百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getAvgRowsPercent() const;
    bool avgRowsPercentIsSet() const;
    void unsetavgRowsPercent();
    void setAvgRowsPercent(const std::string& value);

    /// <summary>
    /// 总逻辑读消耗。
    /// </summary>

    std::string getTotalLogicalReads() const;
    bool totalLogicalReadsIsSet() const;
    void unsettotalLogicalReads();
    void setTotalLogicalReads(const std::string& value);

    /// <summary>
    /// 总逻辑读百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getTotalLogicalReadsPercent() const;
    bool totalLogicalReadsPercentIsSet() const;
    void unsettotalLogicalReadsPercent();
    void setTotalLogicalReadsPercent(const std::string& value);

    /// <summary>
    /// 平均逻辑读消耗。
    /// </summary>

    std::string getAvgLogicalReads() const;
    bool avgLogicalReadsIsSet() const;
    void unsetavgLogicalReads();
    void setAvgLogicalReads(const std::string& value);

    /// <summary>
    /// 平均逻辑读百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getAvgLogicalReadsPercent() const;
    bool avgLogicalReadsPercentIsSet() const;
    void unsetavgLogicalReadsPercent();
    void setAvgLogicalReadsPercent(const std::string& value);

    /// <summary>
    /// 平均逻辑写消耗。
    /// </summary>

    std::string getAvgLogicalWrite() const;
    bool avgLogicalWriteIsSet() const;
    void unsetavgLogicalWrite();
    void setAvgLogicalWrite(const std::string& value);

    /// <summary>
    /// 平均逻辑写百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getAvgLogicalWritePercent() const;
    bool avgLogicalWritePercentIsSet() const;
    void unsetavgLogicalWritePercent();
    void setAvgLogicalWritePercent(const std::string& value);

    /// <summary>
    /// 总逻辑写消耗。
    /// </summary>

    std::string getTotalLogicalWrite() const;
    bool totalLogicalWriteIsSet() const;
    void unsettotalLogicalWrite();
    void setTotalLogicalWrite(const std::string& value);

    /// <summary>
    /// 总逻辑写百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getTotalLogicalWritePercent() const;
    bool totalLogicalWritePercentIsSet() const;
    void unsettotalLogicalWritePercent();
    void setTotalLogicalWritePercent(const std::string& value);

    /// <summary>
    /// 平均物理读消耗。
    /// </summary>

    std::string getAvgPhysicalReads() const;
    bool avgPhysicalReadsIsSet() const;
    void unsetavgPhysicalReads();
    void setAvgPhysicalReads(const std::string& value);

    /// <summary>
    /// 平均物理读百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getAvgPhysicalReadsPercent() const;
    bool avgPhysicalReadsPercentIsSet() const;
    void unsetavgPhysicalReadsPercent();
    void setAvgPhysicalReadsPercent(const std::string& value);

    /// <summary>
    /// 总物理读消耗。
    /// </summary>

    std::string getTotalPhysicalReads() const;
    bool totalPhysicalReadsIsSet() const;
    void unsettotalPhysicalReads();
    void setTotalPhysicalReads(const std::string& value);

    /// <summary>
    /// 总物理读百分比，范围0.0000-1.0000。
    /// </summary>

    std::string getTotalPhysicalReadsPercent() const;
    bool totalPhysicalReadsPercentIsSet() const;
    void unsettotalPhysicalReadsPercent();
    void setTotalPhysicalReadsPercent(const std::string& value);

    /// <summary>
    /// 上次执行时间。
    /// </summary>

    std::string getLastExecutionTime() const;
    bool lastExecutionTimeIsSet() const;
    void unsetlastExecutionTime();
    void setLastExecutionTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string statement_;
    bool statementIsSet_;
    std::string query_;
    bool queryIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string executionCount_;
    bool executionCountIsSet_;
    std::string executionCountPercent_;
    bool executionCountPercentIsSet_;
    std::string totalCpuTime_;
    bool totalCpuTimeIsSet_;
    std::string totalCpuTimePercent_;
    bool totalCpuTimePercentIsSet_;
    std::string avgCpuTime_;
    bool avgCpuTimeIsSet_;
    std::string avgCpuTimePercent_;
    bool avgCpuTimePercentIsSet_;
    std::string totalDurationTime_;
    bool totalDurationTimeIsSet_;
    std::string totalDurationTimePercent_;
    bool totalDurationTimePercentIsSet_;
    std::string avgDurationTime_;
    bool avgDurationTimeIsSet_;
    std::string avgDurationTimePercent_;
    bool avgDurationTimePercentIsSet_;
    std::string totalRows_;
    bool totalRowsIsSet_;
    std::string totalRowsPercent_;
    bool totalRowsPercentIsSet_;
    std::string avgRows_;
    bool avgRowsIsSet_;
    std::string avgRowsPercent_;
    bool avgRowsPercentIsSet_;
    std::string totalLogicalReads_;
    bool totalLogicalReadsIsSet_;
    std::string totalLogicalReadsPercent_;
    bool totalLogicalReadsPercentIsSet_;
    std::string avgLogicalReads_;
    bool avgLogicalReadsIsSet_;
    std::string avgLogicalReadsPercent_;
    bool avgLogicalReadsPercentIsSet_;
    std::string avgLogicalWrite_;
    bool avgLogicalWriteIsSet_;
    std::string avgLogicalWritePercent_;
    bool avgLogicalWritePercentIsSet_;
    std::string totalLogicalWrite_;
    bool totalLogicalWriteIsSet_;
    std::string totalLogicalWritePercent_;
    bool totalLogicalWritePercentIsSet_;
    std::string avgPhysicalReads_;
    bool avgPhysicalReadsIsSet_;
    std::string avgPhysicalReadsPercent_;
    bool avgPhysicalReadsPercentIsSet_;
    std::string totalPhysicalReads_;
    bool totalPhysicalReadsIsSet_;
    std::string totalPhysicalReadsPercent_;
    bool totalPhysicalReadsPercentIsSet_;
    std::string lastExecutionTime_;
    bool lastExecutionTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryTopSqlsResult_H_
