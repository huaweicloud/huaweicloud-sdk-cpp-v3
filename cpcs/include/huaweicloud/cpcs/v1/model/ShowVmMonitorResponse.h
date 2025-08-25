
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowVmMonitorResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowVmMonitorResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cpcs/v1/model/Datapoint.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowVmMonitorResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVmMonitorResponse();
    virtual ~ShowVmMonitorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVmMonitorResponse members

    /// <summary>
    /// 指标的时间序列
    /// </summary>

    std::vector<Datapoint>& getDatapoints();
    bool datapointsIsSet() const;
    void unsetdatapoints();
    void setDatapoints(const std::vector<Datapoint>& value);

    /// <summary>
    /// 指标名称，比如:cpu_util
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);


protected:
    std::vector<Datapoint> datapoints_;
    bool datapointsIsSet_;
    std::string metricName_;
    bool metricNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowVmMonitorResponse_H_
