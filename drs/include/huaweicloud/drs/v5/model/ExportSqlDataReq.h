
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportSqlDataReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportSqlDataReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 导出流量回放任务SQL文件请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ExportSqlDataReq
    : public ModelBase
{
public:
    ExportSqlDataReq();
    virtual ~ExportSqlDataReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportSqlDataReq members

    /// <summary>
    /// 导出的sql文件类型。取值范围： - abnormal_sql ：异常sql列表 - abnormal_sql_detail ：异常sql详情 - slow_sql ：慢sql列表 - slow_sql_detail ： 慢sql详情
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 导出的字段名。file_type为时为error_sql_detail、slow_sql_detail必填。取值范围： -id ：自增ID -gmtCreate ：创建时间 -gmtModified ：修改时间 -shardId ：分片ID -startTimestamp ：源库SQL开始执行时间戳 -executeTimePartition ：回放时间分区 -schemaName ：库名 -queryType ：SQL类型 -sqlStatement ：SQL内容 -sqlTemplate ：SQL模板 -errorInfo ：异常信息 -targetType ：目标库类型
    /// </summary>

    std::vector<std::string>& getFieldNames();
    bool fieldNamesIsSet() const;
    void unsetfieldNames();
    void setFieldNames(const std::vector<std::string>& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string fileType_;
    bool fileTypeIsSet_;
    std::vector<std::string> fieldNames_;
    bool fieldNamesIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportSqlDataReq_H_
