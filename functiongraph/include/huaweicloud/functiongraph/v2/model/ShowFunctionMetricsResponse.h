
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionMetricsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionMetricsResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowFunctionMetricsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFunctionMetricsResponse();
    virtual ~ShowFunctionMetricsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFunctionMetricsResponse members

    /// <summary>
    /// 并发数
    /// </summary>

    std::vector<SlaReportsValue>& getConcurrencyNum();
    bool concurrencyNumIsSet() const;
    void unsetconcurrencyNum();
    void setConcurrencyNum(const std::vector<SlaReportsValue>& value);

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
    /// 弹性实例数
    /// </summary>

    std::vector<SlaReportsValue>& getInstanceNum();
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(const std::vector<SlaReportsValue>& value);

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
    /// 预留实例数
    /// </summary>

    std::vector<SlaReportsValue>& getReservedInstanceNum();
    bool reservedInstanceNumIsSet() const;
    void unsetreservedInstanceNum();
    void setReservedInstanceNum(const std::vector<SlaReportsValue>& value);


protected:
    std::vector<SlaReportsValue> concurrencyNum_;
    bool concurrencyNumIsSet_;
    std::vector<SlaReportsValue> count_;
    bool countIsSet_;
    std::vector<SlaReportsValue> duration_;
    bool durationIsSet_;
    std::vector<SlaReportsValue> failCount_;
    bool failCountIsSet_;
    std::vector<SlaReportsValue> functionErrorCount_;
    bool functionErrorCountIsSet_;
    std::vector<SlaReportsValue> systemErrorCount_;
    bool systemErrorCountIsSet_;
    std::vector<SlaReportsValue> instanceNum_;
    bool instanceNumIsSet_;
    std::vector<SlaReportsValue> maxDuration_;
    bool maxDurationIsSet_;
    std::vector<SlaReportsValue> minDuration_;
    bool minDurationIsSet_;
    std::vector<SlaReportsValue> rejectCount_;
    bool rejectCountIsSet_;
    std::vector<SlaReportsValue> reservedInstanceNum_;
    bool reservedInstanceNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionMetricsResponse_H_
