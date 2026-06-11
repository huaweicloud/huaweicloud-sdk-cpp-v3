
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TopObject_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TopObject_H_


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
/// top对象详情
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TopObject
    : public ModelBase
{
public:
    TopObject();
    virtual ~TopObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopObject members

    /// <summary>
    /// id
    /// </summary>

    std::string getRowId() const;
    bool rowIdIsSet() const;
    void unsetrowId();
    void setRowId(const std::string& value);

    /// <summary>
    /// 数据库名
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 模式
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 对象名
    /// </summary>

    std::string getObjectName() const;
    bool objectNameIsSet() const;
    void unsetobjectName();
    void setObjectName(const std::string& value);

    /// <summary>
    /// 对象id
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 对象类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// sql文本
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// 执行次数
    /// </summary>

    std::string getExecutionCount() const;
    bool executionCountIsSet() const;
    void unsetexecutionCount();
    void setExecutionCount(const std::string& value);

    /// <summary>
    /// 获取执行计划次数
    /// </summary>

    std::string getPlanGenerationNum() const;
    bool planGenerationNumIsSet() const;
    void unsetplanGenerationNum();
    void setPlanGenerationNum(const std::string& value);

    /// <summary>
    /// 最近执行时间
    /// </summary>

    std::string getLastExecutionTime() const;
    bool lastExecutionTimeIsSet() const;
    void unsetlastExecutionTime();
    void setLastExecutionTime(const std::string& value);

    /// <summary>
    /// 平均cpu耗时(单位为毫秒)
    /// </summary>

    std::string getAvgWorkerTime() const;
    bool avgWorkerTimeIsSet() const;
    void unsetavgWorkerTime();
    void setAvgWorkerTime(const std::string& value);

    /// <summary>
    /// 总cpu耗时(单位为毫秒)
    /// </summary>

    std::string getTotalWorkerTime() const;
    bool totalWorkerTimeIsSet() const;
    void unsettotalWorkerTime();
    void setTotalWorkerTime(const std::string& value);

    /// <summary>
    /// 最近cpu耗时(单位为毫秒)
    /// </summary>

    std::string getLastWorkerTime() const;
    bool lastWorkerTimeIsSet() const;
    void unsetlastWorkerTime();
    void setLastWorkerTime(const std::string& value);

    /// <summary>
    /// 最小cpu耗时(单位为毫秒)
    /// </summary>

    std::string getMinWorkerTime() const;
    bool minWorkerTimeIsSet() const;
    void unsetminWorkerTime();
    void setMinWorkerTime(const std::string& value);

    /// <summary>
    /// 最大cpu耗时(单位为毫秒)
    /// </summary>

    std::string getMaxWorkerTime() const;
    bool maxWorkerTimeIsSet() const;
    void unsetmaxWorkerTime();
    void setMaxWorkerTime(const std::string& value);

    /// <summary>
    /// 平均逻辑读
    /// </summary>

    std::string getAvgLogicalReads() const;
    bool avgLogicalReadsIsSet() const;
    void unsetavgLogicalReads();
    void setAvgLogicalReads(const std::string& value);

    /// <summary>
    /// 总共逻辑读
    /// </summary>

    std::string getTotalLogicalReads() const;
    bool totalLogicalReadsIsSet() const;
    void unsettotalLogicalReads();
    void setTotalLogicalReads(const std::string& value);

    /// <summary>
    /// 最近逻辑读
    /// </summary>

    std::string getLastLogicalReads() const;
    bool lastLogicalReadsIsSet() const;
    void unsetlastLogicalReads();
    void setLastLogicalReads(const std::string& value);

    /// <summary>
    /// 最小逻辑读
    /// </summary>

    std::string getMinLogicalReads() const;
    bool minLogicalReadsIsSet() const;
    void unsetminLogicalReads();
    void setMinLogicalReads(const std::string& value);

    /// <summary>
    /// 最大逻辑读
    /// </summary>

    std::string getMaxLogicalReads() const;
    bool maxLogicalReadsIsSet() const;
    void unsetmaxLogicalReads();
    void setMaxLogicalReads(const std::string& value);

    /// <summary>
    /// 平均逻辑写
    /// </summary>

    std::string getAvgLogicalWrites() const;
    bool avgLogicalWritesIsSet() const;
    void unsetavgLogicalWrites();
    void setAvgLogicalWrites(const std::string& value);

    /// <summary>
    /// 总共逻辑写
    /// </summary>

    std::string getTotalLogicalWrites() const;
    bool totalLogicalWritesIsSet() const;
    void unsettotalLogicalWrites();
    void setTotalLogicalWrites(const std::string& value);

    /// <summary>
    /// 最近逻辑写
    /// </summary>

    std::string getLastLogicalWrites() const;
    bool lastLogicalWritesIsSet() const;
    void unsetlastLogicalWrites();
    void setLastLogicalWrites(const std::string& value);

    /// <summary>
    /// 最小逻辑写
    /// </summary>

    std::string getMinLogicalWrites() const;
    bool minLogicalWritesIsSet() const;
    void unsetminLogicalWrites();
    void setMinLogicalWrites(const std::string& value);

    /// <summary>
    /// 最大逻辑写
    /// </summary>

    std::string getMaxLogicalWrites() const;
    bool maxLogicalWritesIsSet() const;
    void unsetmaxLogicalWrites();
    void setMaxLogicalWrites(const std::string& value);

    /// <summary>
    /// 平均逻辑io
    /// </summary>

    std::string getAvgLogicalIo() const;
    bool avgLogicalIoIsSet() const;
    void unsetavgLogicalIo();
    void setAvgLogicalIo(const std::string& value);

    /// <summary>
    /// 总共逻辑io
    /// </summary>

    std::string getTotalLogicalIo() const;
    bool totalLogicalIoIsSet() const;
    void unsettotalLogicalIo();
    void setTotalLogicalIo(const std::string& value);

    /// <summary>
    /// 最近逻辑io
    /// </summary>

    std::string getLastLogicalIo() const;
    bool lastLogicalIoIsSet() const;
    void unsetlastLogicalIo();
    void setLastLogicalIo(const std::string& value);

    /// <summary>
    /// 最小逻辑io
    /// </summary>

    std::string getMinLogicalIo() const;
    bool minLogicalIoIsSet() const;
    void unsetminLogicalIo();
    void setMinLogicalIo(const std::string& value);

    /// <summary>
    /// 最大逻辑io
    /// </summary>

    std::string getMaxLogicalIo() const;
    bool maxLogicalIoIsSet() const;
    void unsetmaxLogicalIo();
    void setMaxLogicalIo(const std::string& value);

    /// <summary>
    /// 平均物理读
    /// </summary>

    std::string getAvgPhysicalReads() const;
    bool avgPhysicalReadsIsSet() const;
    void unsetavgPhysicalReads();
    void setAvgPhysicalReads(const std::string& value);

    /// <summary>
    /// 总共物理读
    /// </summary>

    std::string getTotalPhysicalReads() const;
    bool totalPhysicalReadsIsSet() const;
    void unsettotalPhysicalReads();
    void setTotalPhysicalReads(const std::string& value);

    /// <summary>
    /// 最近物理读
    /// </summary>

    std::string getLastPhysicalReads() const;
    bool lastPhysicalReadsIsSet() const;
    void unsetlastPhysicalReads();
    void setLastPhysicalReads(const std::string& value);

    /// <summary>
    /// 最小物理读
    /// </summary>

    std::string getMinPhysicalReads() const;
    bool minPhysicalReadsIsSet() const;
    void unsetminPhysicalReads();
    void setMinPhysicalReads(const std::string& value);

    /// <summary>
    /// 最大物理读
    /// </summary>

    std::string getMaxPhysicalReads() const;
    bool maxPhysicalReadsIsSet() const;
    void unsetmaxPhysicalReads();
    void setMaxPhysicalReads(const std::string& value);

    /// <summary>
    /// 平均执行耗时
    /// </summary>

    std::string getAvgElapsedTime() const;
    bool avgElapsedTimeIsSet() const;
    void unsetavgElapsedTime();
    void setAvgElapsedTime(const std::string& value);

    /// <summary>
    /// 总共执行耗时
    /// </summary>

    std::string getTotalElapsedTime() const;
    bool totalElapsedTimeIsSet() const;
    void unsettotalElapsedTime();
    void setTotalElapsedTime(const std::string& value);

    /// <summary>
    /// 最近执行耗时
    /// </summary>

    std::string getLastElapsedTime() const;
    bool lastElapsedTimeIsSet() const;
    void unsetlastElapsedTime();
    void setLastElapsedTime(const std::string& value);

    /// <summary>
    /// 最小执行耗时
    /// </summary>

    std::string getMinElapsedTime() const;
    bool minElapsedTimeIsSet() const;
    void unsetminElapsedTime();
    void setMinElapsedTime(const std::string& value);

    /// <summary>
    /// 最大执行耗时
    /// </summary>

    std::string getMaxElapsedTime() const;
    bool maxElapsedTimeIsSet() const;
    void unsetmaxElapsedTime();
    void setMaxElapsedTime(const std::string& value);

    /// <summary>
    /// 平均返回行
    /// </summary>

    std::string getAvgRows() const;
    bool avgRowsIsSet() const;
    void unsetavgRows();
    void setAvgRows(const std::string& value);

    /// <summary>
    /// 总返回行
    /// </summary>

    std::string getTotalRows() const;
    bool totalRowsIsSet() const;
    void unsettotalRows();
    void setTotalRows(const std::string& value);

    /// <summary>
    /// 最近返回行
    /// </summary>

    std::string getLastRows() const;
    bool lastRowsIsSet() const;
    void unsetlastRows();
    void setLastRows(const std::string& value);

    /// <summary>
    /// 最小返回行
    /// </summary>

    std::string getMinRows() const;
    bool minRowsIsSet() const;
    void unsetminRows();
    void setMinRows(const std::string& value);

    /// <summary>
    /// 最大返回行
    /// </summary>

    std::string getMaxRows() const;
    bool maxRowsIsSet() const;
    void unsetmaxRows();
    void setMaxRows(const std::string& value);


protected:
    std::string rowId_;
    bool rowIdIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string objectName_;
    bool objectNameIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    std::string executionCount_;
    bool executionCountIsSet_;
    std::string planGenerationNum_;
    bool planGenerationNumIsSet_;
    std::string lastExecutionTime_;
    bool lastExecutionTimeIsSet_;
    std::string avgWorkerTime_;
    bool avgWorkerTimeIsSet_;
    std::string totalWorkerTime_;
    bool totalWorkerTimeIsSet_;
    std::string lastWorkerTime_;
    bool lastWorkerTimeIsSet_;
    std::string minWorkerTime_;
    bool minWorkerTimeIsSet_;
    std::string maxWorkerTime_;
    bool maxWorkerTimeIsSet_;
    std::string avgLogicalReads_;
    bool avgLogicalReadsIsSet_;
    std::string totalLogicalReads_;
    bool totalLogicalReadsIsSet_;
    std::string lastLogicalReads_;
    bool lastLogicalReadsIsSet_;
    std::string minLogicalReads_;
    bool minLogicalReadsIsSet_;
    std::string maxLogicalReads_;
    bool maxLogicalReadsIsSet_;
    std::string avgLogicalWrites_;
    bool avgLogicalWritesIsSet_;
    std::string totalLogicalWrites_;
    bool totalLogicalWritesIsSet_;
    std::string lastLogicalWrites_;
    bool lastLogicalWritesIsSet_;
    std::string minLogicalWrites_;
    bool minLogicalWritesIsSet_;
    std::string maxLogicalWrites_;
    bool maxLogicalWritesIsSet_;
    std::string avgLogicalIo_;
    bool avgLogicalIoIsSet_;
    std::string totalLogicalIo_;
    bool totalLogicalIoIsSet_;
    std::string lastLogicalIo_;
    bool lastLogicalIoIsSet_;
    std::string minLogicalIo_;
    bool minLogicalIoIsSet_;
    std::string maxLogicalIo_;
    bool maxLogicalIoIsSet_;
    std::string avgPhysicalReads_;
    bool avgPhysicalReadsIsSet_;
    std::string totalPhysicalReads_;
    bool totalPhysicalReadsIsSet_;
    std::string lastPhysicalReads_;
    bool lastPhysicalReadsIsSet_;
    std::string minPhysicalReads_;
    bool minPhysicalReadsIsSet_;
    std::string maxPhysicalReads_;
    bool maxPhysicalReadsIsSet_;
    std::string avgElapsedTime_;
    bool avgElapsedTimeIsSet_;
    std::string totalElapsedTime_;
    bool totalElapsedTimeIsSet_;
    std::string lastElapsedTime_;
    bool lastElapsedTimeIsSet_;
    std::string minElapsedTime_;
    bool minElapsedTimeIsSet_;
    std::string maxElapsedTime_;
    bool maxElapsedTimeIsSet_;
    std::string avgRows_;
    bool avgRowsIsSet_;
    std::string totalRows_;
    bool totalRowsIsSet_;
    std::string lastRows_;
    bool lastRowsIsSet_;
    std::string minRows_;
    bool minRowsIsSet_;
    std::string maxRows_;
    bool maxRowsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TopObject_H_
