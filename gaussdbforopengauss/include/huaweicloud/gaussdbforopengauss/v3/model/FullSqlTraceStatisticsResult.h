
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlTraceStatisticsResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlTraceStatisticsResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 链路详情信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FullSqlTraceStatisticsResult
    : public ModelBase
{
public:
    FullSqlTraceStatisticsResult();
    virtual ~FullSqlTraceStatisticsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullSqlTraceStatisticsResult members

    /// <summary>
    /// **参数解释**: 命中率。 **取值范围**: 不涉及。
    /// </summary>

    double getHitRate() const;
    bool hitRateIsSet() const;
    void unsethitRate();
    void setHitRate(double value);

    /// <summary>
    /// **参数解释**: 有效DB时间花费。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getDbTime() const;
    bool dbTimeIsSet() const;
    void unsetdbTime();
    void setDbTime(int32_t value);

    /// <summary>
    /// **参数解释**: CPU时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCpuTime() const;
    bool cpuTimeIsSet() const;
    void unsetcpuTime();
    void setCpuTime(int32_t value);

    /// <summary>
    /// **参数解释**: IO时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getIoTime() const;
    bool ioTimeIsSet() const;
    void unsetioTime();
    void setIoTime(int32_t value);

    /// <summary>
    /// **参数解释**: 执行器内执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int32_t value);

    /// <summary>
    /// **参数解释**: 扫描行数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getScanRows() const;
    bool scanRowsIsSet() const;
    void unsetscanRows();
    void setScanRows(int32_t value);

    /// <summary>
    /// **参数解释**: 更新行数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getUpdateRows() const;
    bool updateRowsIsSet() const;
    void unsetupdateRows();
    void setUpdateRows(int32_t value);

    /// <summary>
    /// **参数解释**: 插入行数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getInsertRows() const;
    bool insertRowsIsSet() const;
    void unsetinsertRows();
    void setInsertRows(int32_t value);

    /// <summary>
    /// **参数解释**: 删除行数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getDeleteRows() const;
    bool deleteRowsIsSet() const;
    void unsetdeleteRows();
    void setDeleteRows(int32_t value);


protected:
    double hitRate_;
    bool hitRateIsSet_;
    int32_t dbTime_;
    bool dbTimeIsSet_;
    int32_t cpuTime_;
    bool cpuTimeIsSet_;
    int32_t ioTime_;
    bool ioTimeIsSet_;
    int32_t executionTime_;
    bool executionTimeIsSet_;
    int32_t scanRows_;
    bool scanRowsIsSet_;
    int32_t updateRows_;
    bool updateRowsIsSet_;
    int32_t insertRows_;
    bool insertRowsIsSet_;
    int32_t deleteRows_;
    bool deleteRowsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlTraceStatisticsResult_H_
