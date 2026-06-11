
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TopObjectOverview_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TopObjectOverview_H_


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
/// top对象总览
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TopObjectOverview
    : public ModelBase
{
public:
    TopObjectOverview();
    virtual ~TopObjectOverview();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopObjectOverview members

    /// <summary>
    /// 平均cpu耗时(单位为毫秒)
    /// </summary>

    double getAvgCpuTime() const;
    bool avgCpuTimeIsSet() const;
    void unsetavgCpuTime();
    void setAvgCpuTime(double value);

    /// <summary>
    /// 平均cpu耗时百分比
    /// </summary>

    double getAvgCpuTimePercentage() const;
    bool avgCpuTimePercentageIsSet() const;
    void unsetavgCpuTimePercentage();
    void setAvgCpuTimePercentage(double value);

    /// <summary>
    /// 平均执行耗时(单位为毫秒)
    /// </summary>

    double getAvgExecutionTime() const;
    bool avgExecutionTimeIsSet() const;
    void unsetavgExecutionTime();
    void setAvgExecutionTime(double value);

    /// <summary>
    /// 平均执行耗时百分比
    /// </summary>

    double getAvgExecutionTimePercentage() const;
    bool avgExecutionTimePercentageIsSet() const;
    void unsetavgExecutionTimePercentage();
    void setAvgExecutionTimePercentage(double value);

    /// <summary>
    /// 平均逻辑io
    /// </summary>

    double getAvgLogicalIo() const;
    bool avgLogicalIoIsSet() const;
    void unsetavgLogicalIo();
    void setAvgLogicalIo(double value);

    /// <summary>
    /// 平均逻辑io百分比
    /// </summary>

    double getAvgLogicalIoPercentage() const;
    bool avgLogicalIoPercentageIsSet() const;
    void unsetavgLogicalIoPercentage();
    void setAvgLogicalIoPercentage(double value);

    /// <summary>
    /// 平均逻辑读
    /// </summary>

    double getAvgLogicalReads() const;
    bool avgLogicalReadsIsSet() const;
    void unsetavgLogicalReads();
    void setAvgLogicalReads(double value);

    /// <summary>
    /// 平均逻辑读百分比
    /// </summary>

    double getAvgLogicalReadsPercentage() const;
    bool avgLogicalReadsPercentageIsSet() const;
    void unsetavgLogicalReadsPercentage();
    void setAvgLogicalReadsPercentage(double value);

    /// <summary>
    /// 平均逻辑写
    /// </summary>

    double getAvgLogicalWrites() const;
    bool avgLogicalWritesIsSet() const;
    void unsetavgLogicalWrites();
    void setAvgLogicalWrites(double value);

    /// <summary>
    /// 平均逻辑写百分比
    /// </summary>

    double getAvgLogicalWritesPercentage() const;
    bool avgLogicalWritesPercentageIsSet() const;
    void unsetavgLogicalWritesPercentage();
    void setAvgLogicalWritesPercentage(double value);

    /// <summary>
    /// 平均物理读
    /// </summary>

    double getAvgPhysicalReads() const;
    bool avgPhysicalReadsIsSet() const;
    void unsetavgPhysicalReads();
    void setAvgPhysicalReads(double value);

    /// <summary>
    /// 平均物理读百分比
    /// </summary>

    double getAvgPhysicalReadsPercentage() const;
    bool avgPhysicalReadsPercentageIsSet() const;
    void unsetavgPhysicalReadsPercentage();
    void setAvgPhysicalReadsPercentage(double value);

    /// <summary>
    /// 平均返回行
    /// </summary>

    double getAvgRows() const;
    bool avgRowsIsSet() const;
    void unsetavgRows();
    void setAvgRows(double value);

    /// <summary>
    /// 平均返回行百分比
    /// </summary>

    double getAvgRowsPercentage() const;
    bool avgRowsPercentageIsSet() const;
    void unsetavgRowsPercentage();
    void setAvgRowsPercentage(double value);

    /// <summary>
    /// 数据库名
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 对象id
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 对象名称
    /// </summary>

    std::string getObjectName() const;
    bool objectNameIsSet() const;
    void unsetobjectName();
    void setObjectName(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    std::string getRowId() const;
    bool rowIdIsSet() const;
    void unsetrowId();
    void setRowId(const std::string& value);

    /// <summary>
    /// 对象类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 模式
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 总cpu耗时(单位为毫秒)
    /// </summary>

    double getTotalCpuTime() const;
    bool totalCpuTimeIsSet() const;
    void unsettotalCpuTime();
    void setTotalCpuTime(double value);

    /// <summary>
    /// 总cpu耗时百分比
    /// </summary>

    double getTotalCpuTimePercentage() const;
    bool totalCpuTimePercentageIsSet() const;
    void unsettotalCpuTimePercentage();
    void setTotalCpuTimePercentage(double value);

    /// <summary>
    /// 总执行耗时(单位为毫秒)
    /// </summary>

    double getTotalExecutionTime() const;
    bool totalExecutionTimeIsSet() const;
    void unsettotalExecutionTime();
    void setTotalExecutionTime(double value);

    /// <summary>
    /// 总执行耗时百分比
    /// </summary>

    double getTotalExecutionTimePercentage() const;
    bool totalExecutionTimePercentageIsSet() const;
    void unsettotalExecutionTimePercentage();
    void setTotalExecutionTimePercentage(double value);

    /// <summary>
    /// 总执行次数
    /// </summary>

    double getTotalExecutionCount() const;
    bool totalExecutionCountIsSet() const;
    void unsettotalExecutionCount();
    void setTotalExecutionCount(double value);

    /// <summary>
    /// 总逻辑io
    /// </summary>

    double getTotalLogicalIo() const;
    bool totalLogicalIoIsSet() const;
    void unsettotalLogicalIo();
    void setTotalLogicalIo(double value);

    /// <summary>
    /// 总逻辑io百分比
    /// </summary>

    double getTotalLogicalIoPercentage() const;
    bool totalLogicalIoPercentageIsSet() const;
    void unsettotalLogicalIoPercentage();
    void setTotalLogicalIoPercentage(double value);

    /// <summary>
    /// 总逻辑读
    /// </summary>

    double getTotalLogicalReads() const;
    bool totalLogicalReadsIsSet() const;
    void unsettotalLogicalReads();
    void setTotalLogicalReads(double value);

    /// <summary>
    /// 总逻辑读百分比
    /// </summary>

    double getTotalLogicalReadsPercentage() const;
    bool totalLogicalReadsPercentageIsSet() const;
    void unsettotalLogicalReadsPercentage();
    void setTotalLogicalReadsPercentage(double value);

    /// <summary>
    /// 总逻辑写
    /// </summary>

    double getTotalLogicalWrites() const;
    bool totalLogicalWritesIsSet() const;
    void unsettotalLogicalWrites();
    void setTotalLogicalWrites(double value);

    /// <summary>
    /// 总逻辑写百分比
    /// </summary>

    double getTotalLogicalWritesPercentage() const;
    bool totalLogicalWritesPercentageIsSet() const;
    void unsettotalLogicalWritesPercentage();
    void setTotalLogicalWritesPercentage(double value);

    /// <summary>
    /// 总物理读
    /// </summary>

    double getTotalPhysicalReads() const;
    bool totalPhysicalReadsIsSet() const;
    void unsettotalPhysicalReads();
    void setTotalPhysicalReads(double value);

    /// <summary>
    /// 总物理读百分比
    /// </summary>

    double getTotalPhysicalReadsPercentage() const;
    bool totalPhysicalReadsPercentageIsSet() const;
    void unsettotalPhysicalReadsPercentage();
    void setTotalPhysicalReadsPercentage(double value);

    /// <summary>
    /// 总返回行
    /// </summary>

    double getTotalRows() const;
    bool totalRowsIsSet() const;
    void unsettotalRows();
    void setTotalRows(double value);

    /// <summary>
    /// 总返回行百分比
    /// </summary>

    double getTotalRowsPercentage() const;
    bool totalRowsPercentageIsSet() const;
    void unsettotalRowsPercentage();
    void setTotalRowsPercentage(double value);


protected:
    double avgCpuTime_;
    bool avgCpuTimeIsSet_;
    double avgCpuTimePercentage_;
    bool avgCpuTimePercentageIsSet_;
    double avgExecutionTime_;
    bool avgExecutionTimeIsSet_;
    double avgExecutionTimePercentage_;
    bool avgExecutionTimePercentageIsSet_;
    double avgLogicalIo_;
    bool avgLogicalIoIsSet_;
    double avgLogicalIoPercentage_;
    bool avgLogicalIoPercentageIsSet_;
    double avgLogicalReads_;
    bool avgLogicalReadsIsSet_;
    double avgLogicalReadsPercentage_;
    bool avgLogicalReadsPercentageIsSet_;
    double avgLogicalWrites_;
    bool avgLogicalWritesIsSet_;
    double avgLogicalWritesPercentage_;
    bool avgLogicalWritesPercentageIsSet_;
    double avgPhysicalReads_;
    bool avgPhysicalReadsIsSet_;
    double avgPhysicalReadsPercentage_;
    bool avgPhysicalReadsPercentageIsSet_;
    double avgRows_;
    bool avgRowsIsSet_;
    double avgRowsPercentage_;
    bool avgRowsPercentageIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string objectName_;
    bool objectNameIsSet_;
    std::string rowId_;
    bool rowIdIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    double totalCpuTime_;
    bool totalCpuTimeIsSet_;
    double totalCpuTimePercentage_;
    bool totalCpuTimePercentageIsSet_;
    double totalExecutionTime_;
    bool totalExecutionTimeIsSet_;
    double totalExecutionTimePercentage_;
    bool totalExecutionTimePercentageIsSet_;
    double totalExecutionCount_;
    bool totalExecutionCountIsSet_;
    double totalLogicalIo_;
    bool totalLogicalIoIsSet_;
    double totalLogicalIoPercentage_;
    bool totalLogicalIoPercentageIsSet_;
    double totalLogicalReads_;
    bool totalLogicalReadsIsSet_;
    double totalLogicalReadsPercentage_;
    bool totalLogicalReadsPercentageIsSet_;
    double totalLogicalWrites_;
    bool totalLogicalWritesIsSet_;
    double totalLogicalWritesPercentage_;
    bool totalLogicalWritesPercentageIsSet_;
    double totalPhysicalReads_;
    bool totalPhysicalReadsIsSet_;
    double totalPhysicalReadsPercentage_;
    bool totalPhysicalReadsPercentageIsSet_;
    double totalRows_;
    bool totalRowsIsSet_;
    double totalRowsPercentage_;
    bool totalRowsPercentageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TopObjectOverview_H_
