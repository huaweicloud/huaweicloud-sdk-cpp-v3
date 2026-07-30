
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolMonitorResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolMonitorResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolMonitor_metrics.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPoolMonitorResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPoolMonitorResponse();
    virtual ~ShowPoolMonitorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPoolMonitorResponse members

    /// <summary>
    /// **参数解释**：资源池的监控指标数据。
    /// </summary>

    std::vector<PoolMonitor_metrics>& getMetrics();
    bool metricsIsSet() const;
    void unsetmetrics();
    void setMetrics(const std::vector<PoolMonitor_metrics>& value);


protected:
    std::vector<PoolMonitor_metrics> metrics_;
    bool metricsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolMonitorResponse_H_
