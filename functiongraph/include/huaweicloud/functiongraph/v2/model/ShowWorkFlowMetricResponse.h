
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkFlowMetricResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkFlowMetricResponse_H_


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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowWorkFlowMetricResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkFlowMetricResponse();
    virtual ~ShowWorkFlowMetricResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkFlowMetricResponse members

    /// <summary>
    /// 执行次数
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
    /// 运行中数量
    /// </summary>

    std::vector<SlaReportsValue>& getRunningCount();
    bool runningCountIsSet() const;
    void unsetrunningCount();
    void setRunningCount(const std::vector<SlaReportsValue>& value);


protected:
    std::vector<SlaReportsValue> count_;
    bool countIsSet_;
    std::vector<SlaReportsValue> duration_;
    bool durationIsSet_;
    std::vector<SlaReportsValue> failCount_;
    bool failCountIsSet_;
    std::vector<SlaReportsValue> runningCount_;
    bool runningCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkFlowMetricResponse_H_
