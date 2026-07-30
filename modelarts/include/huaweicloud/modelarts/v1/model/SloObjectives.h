
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SloObjectives_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SloObjectives_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SLO目标配置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SloObjectives
    : public ModelBase
{
public:
    SloObjectives();
    virtual ~SloObjectives();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SloObjectives members

    /// <summary>
    /// **参数解释：** TTFT指标，单位毫秒。 **取值范围：** 0~10000。 **约束限制：** 不涉及。 **默认取值：** 100。
    /// </summary>

    int32_t getMetricTtft() const;
    bool metricTtftIsSet() const;
    void unsetmetricTtft();
    void setMetricTtft(int32_t value);

    /// <summary>
    /// **参数解释：** TPOT指标，单位毫秒。 **取值范围：** 0~1000。 **约束限制：** 不涉及。 **默认取值：** 50。
    /// </summary>

    int32_t getMetricTpot() const;
    bool metricTpotIsSet() const;
    void unsetmetricTpot();
    void setMetricTpot(int32_t value);

    /// <summary>
    /// **参数解释：** SLO满足百分比。 **取值范围：** 0~100。
    /// </summary>

    int32_t getPercental() const;
    bool percentalIsSet() const;
    void unsetpercental();
    void setPercental(int32_t value);


protected:
    int32_t metricTtft_;
    bool metricTtftIsSet_;
    int32_t metricTpot_;
    bool metricTpotIsSet_;
    int32_t percental_;
    bool percentalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SloObjectives_H_
