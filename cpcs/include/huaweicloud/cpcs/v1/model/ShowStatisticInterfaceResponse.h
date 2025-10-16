
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowStatisticInterfaceResponseBody_metrics.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatisticInterfaceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatisticInterfaceResponse();
    virtual ~ShowStatisticInterfaceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticInterfaceResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 接口统计列表
    /// </summary>

    std::vector<ShowStatisticInterfaceResponseBody_metrics>& getMetrics();
    bool metricsIsSet() const;
    void unsetmetrics();
    void setMetrics(const std::vector<ShowStatisticInterfaceResponseBody_metrics>& value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<ShowStatisticInterfaceResponseBody_metrics> metrics_;
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

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceResponse_H_
