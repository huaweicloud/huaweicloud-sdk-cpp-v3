
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlStatisticInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlStatisticInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 全量SQL聚合统计信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FullSqlStatisticInfoResult
    : public ModelBase
{
public:
    FullSqlStatisticInfoResult();
    virtual ~FullSqlStatisticInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullSqlStatisticInfoResult members

    /// <summary>
    /// **参数解释**: SQL模板。未开启实例内核GUC参数（track_stmt_parameter）时，展示的是归一化SQL模板内容；开启该参数后，展示的是随机一条SQL记录中截断参数列表后的内容。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const std::string& value);

    /// <summary>
    /// **参数解释**: 归一化SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 汇总SQL条目数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getSqlCount() const;
    bool sqlCountIsSet() const;
    void unsetsqlCount();
    void setSqlCount(int64_t value);

    /// <summary>
    /// **参数解释**: 总SQL耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalSqlTime() const;
    bool totalSqlTimeIsSet() const;
    void unsettotalSqlTime();
    void setTotalSqlTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均SQL耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgSqlTime() const;
    bool avgSqlTimeIsSet() const;
    void unsetavgSqlTime();
    void setAvgSqlTime(int64_t value);

    /// <summary>
    /// **参数解释**: 总有效DB耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalDbTime() const;
    bool totalDbTimeIsSet() const;
    void unsettotalDbTime();
    void setTotalDbTime(int64_t value);

    /// <summary>
    /// **参数解释**: 总CPU耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalCpuTime() const;
    bool totalCpuTimeIsSet() const;
    void unsettotalCpuTime();
    void setTotalCpuTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均解释器时间（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgParseTime() const;
    bool avgParseTimeIsSet() const;
    void unsetavgParseTime();
    void setAvgParseTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均执行计划时间（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgPlanTime() const;
    bool avgPlanTimeIsSet() const;
    void unsetavgPlanTime();
    void setAvgPlanTime(int64_t value);

    /// <summary>
    /// **参数解释**: 总IO耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalDataIoTime() const;
    bool totalDataIoTimeIsSet() const;
    void unsettotalDataIoTime();
    void setTotalDataIoTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均返回行数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgNReturnedRows() const;
    bool avgNReturnedRowsIsSet() const;
    void unsetavgNReturnedRows();
    void setAvgNReturnedRows(int64_t value);

    /// <summary>
    /// **参数解释**: 平均扫描行数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgNTuplesFetched() const;
    bool avgNTuplesFetchedIsSet() const;
    void unsetavgNTuplesFetched();
    void setAvgNTuplesFetched(int64_t value);

    /// <summary>
    /// **参数解释**: 平均有效DB耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgDbTime() const;
    bool avgDbTimeIsSet() const;
    void unsetavgDbTime();
    void setAvgDbTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均CPU执行耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgCpuTime() const;
    bool avgCpuTimeIsSet() const;
    void unsetavgCpuTime();
    void setAvgCpuTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均IO耗时（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgDataIoTime() const;
    bool avgDataIoTimeIsSet() const;
    void unsetavgDataIoTime();
    void setAvgDataIoTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均SQL执行器内执行时间（微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgExecutionTime() const;
    bool avgExecutionTimeIsSet() const;
    void unsetavgExecutionTime();
    void setAvgExecutionTime(int64_t value);

    /// <summary>
    /// **参数解释**: 平均Buffer块命中次数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAvgNBlocksHit() const;
    bool avgNBlocksHitIsSet() const;
    void unsetavgNBlocksHit();
    void setAvgNBlocksHit(int64_t value);

    /// <summary>
    /// **参数解释**: 开始时间戳。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getStartTimeStamp() const;
    bool startTimeStampIsSet() const;
    void unsetstartTimeStamp();
    void setStartTimeStamp(int64_t value);

    /// <summary>
    /// **参数解释**: 结束时间戳。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getEndTimeStamp() const;
    bool endTimeStampIsSet() const;
    void unsetendTimeStamp();
    void setEndTimeStamp(int64_t value);


protected:
    std::string template_;
    bool templateIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    int64_t sqlCount_;
    bool sqlCountIsSet_;
    int64_t totalSqlTime_;
    bool totalSqlTimeIsSet_;
    int64_t avgSqlTime_;
    bool avgSqlTimeIsSet_;
    int64_t totalDbTime_;
    bool totalDbTimeIsSet_;
    int64_t totalCpuTime_;
    bool totalCpuTimeIsSet_;
    int64_t avgParseTime_;
    bool avgParseTimeIsSet_;
    int64_t avgPlanTime_;
    bool avgPlanTimeIsSet_;
    int64_t totalDataIoTime_;
    bool totalDataIoTimeIsSet_;
    int64_t avgNReturnedRows_;
    bool avgNReturnedRowsIsSet_;
    int64_t avgNTuplesFetched_;
    bool avgNTuplesFetchedIsSet_;
    int64_t avgDbTime_;
    bool avgDbTimeIsSet_;
    int64_t avgCpuTime_;
    bool avgCpuTimeIsSet_;
    int64_t avgDataIoTime_;
    bool avgDataIoTimeIsSet_;
    int64_t avgExecutionTime_;
    bool avgExecutionTimeIsSet_;
    int64_t avgNBlocksHit_;
    bool avgNBlocksHitIsSet_;
    int64_t startTimeStamp_;
    bool startTimeStampIsSet_;
    int64_t endTimeStamp_;
    bool endTimeStampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlStatisticInfoResult_H_
