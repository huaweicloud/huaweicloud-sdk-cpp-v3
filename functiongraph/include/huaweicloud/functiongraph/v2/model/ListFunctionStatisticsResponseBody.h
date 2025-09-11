
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionStatisticsResponseBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionStatisticsResponseBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/SlaReportsValue.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数指标
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionStatisticsResponseBody
    : public ModelBase
{
public:
    ListFunctionStatisticsResponseBody();
    virtual ~ListFunctionStatisticsResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionStatisticsResponseBody members

    /// <summary>
    /// 调用次数
    /// </summary>

    std::vector<SlaReportsValue>& getCount();
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 平均时延，单位毫秒
    /// </summary>

    std::vector<SlaReportsValue>& getDuration();
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 错误次数
    /// </summary>

    std::vector<SlaReportsValue>& getFailCount();
    bool failCountIsSet() const;
    void unsetfailCount();
    void setFailCount(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 最大时延，单位毫秒
    /// </summary>

    std::vector<SlaReportsValue>& getMaxDuration();
    bool maxDurationIsSet() const;
    void unsetmaxDuration();
    void setMaxDuration(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 最小时延，单位毫秒
    /// </summary>

    std::vector<SlaReportsValue>& getMinDuration();
    bool minDurationIsSet() const;
    void unsetminDuration();
    void setMinDuration(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 被拒绝次数
    /// </summary>

    std::vector<SlaReportsValue>& getRejectCount();
    bool rejectCountIsSet() const;
    void unsetrejectCount();
    void setRejectCount(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 函数错误次数
    /// </summary>

    std::vector<SlaReportsValue>& getFunctionErrorCount();
    bool functionErrorCountIsSet() const;
    void unsetfunctionErrorCount();
    void setFunctionErrorCount(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 系统错误次数
    /// </summary>

    std::vector<SlaReportsValue>& getSystemErrorCount();
    bool systemErrorCountIsSet() const;
    void unsetsystemErrorCount();
    void setSystemErrorCount(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 预留实例指标
    /// </summary>

    std::vector<SlaReportsValue>& getReservedInstanceNum();
    bool reservedInstanceNumIsSet() const;
    void unsetreservedInstanceNum();
    void setReservedInstanceNum(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 弹性实例指标
    /// </summary>

    std::vector<SlaReportsValue>& getConcurrencyNum();
    bool concurrencyNumIsSet() const;
    void unsetconcurrencyNum();
    void setConcurrencyNum(const std::vector<SlaReportsValue>& value);


protected:
    std::vector<SlaReportsValue> count_;
    bool countIsSet_;
    std::vector<SlaReportsValue> duration_;
    bool durationIsSet_;
    std::vector<SlaReportsValue> failCount_;
    bool failCountIsSet_;
    std::vector<SlaReportsValue> maxDuration_;
    bool maxDurationIsSet_;
    std::vector<SlaReportsValue> minDuration_;
    bool minDurationIsSet_;
    std::vector<SlaReportsValue> rejectCount_;
    bool rejectCountIsSet_;
    std::vector<SlaReportsValue> functionErrorCount_;
    bool functionErrorCountIsSet_;
    std::vector<SlaReportsValue> systemErrorCount_;
    bool systemErrorCountIsSet_;
    std::vector<SlaReportsValue> reservedInstanceNum_;
    bool reservedInstanceNumIsSet_;
    std::vector<SlaReportsValue> concurrencyNum_;
    bool concurrencyNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionStatisticsResponseBody_H_
