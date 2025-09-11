
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

    std::string getStartTimeStamp() const;
    bool startTimeStampIsSet() const;
    void unsetstartTimeStamp();
    void setStartTimeStamp(const std::string& value);

    /// <summary>
    /// **参数解释**: 结束时间戳。 **取值范围**: 不涉及。
    /// </summary>

    std::string getEndTimeStamp() const;
    bool endTimeStampIsSet() const;
    void unsetendTimeStamp();
    void setEndTimeStamp(const std::string& value);


protected:
    std::string template_;
    bool templateIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    int64_t sqlCount_;
    bool sqlCountIsSet_;
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
    std::string startTimeStamp_;
    bool startTimeStampIsSet_;
    std::string endTimeStamp_;
    bool endTimeStampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlStatisticInfoResult_H_
