
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_statistics_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_statistics_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMonitor_statistics
    : public ModelBase
{
public:
    PoolMonitor_statistics();
    virtual ~PoolMonitor_statistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMonitor_statistics members

    /// <summary>
    /// **参数解释**：资源池监控信息在指定时间粒度下的统计方式。 **取值范围**：可选值如下： - maximum：最大值统计，默认值。 - minimum：最小值统计。 - sum：求和统计。 - average：平均值统计。 - sampleCount：采样统计。
    /// </summary>

    std::string getStatistic() const;
    bool statisticIsSet() const;
    void unsetstatistic();
    void setStatistic(const std::string& value);

    /// <summary>
    /// **参数解释**：指标数据的值，值为-1时表示无该指标数据。 **取值范围**：不涉及。
    /// </summary>

    float getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(float value);


protected:
    std::string statistic_;
    bool statisticIsSet_;
    float value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_statistics_H_
