
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricObject_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricObject_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 运行指标。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  MetricObject
    : public ModelBase
{
public:
    MetricObject();
    virtual ~MetricObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricObject members

    /// <summary>
    /// 运行指标，可选值如下： - cpuUsage：CPU使用率 - memUsage：物理内存使用率 - gpuUtil：GPU使用率 - gpuMemUsage：显存使用率 - npuUtil：NPU使用率 - npuMemUsage：NPU显存使用率
    /// </summary>

    std::string getMetric() const;
    bool metricIsSet() const;
    void unsetmetric();
    void setMetric(const std::string& value);

    /// <summary>
    /// 运行指标对应数值，1min统计一个平均值。
    /// </summary>

    std::vector<double>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(std::vector<double> value);


protected:
    std::string metric_;
    bool metricIsSet_;
    std::vector<double> value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricObject_H_
