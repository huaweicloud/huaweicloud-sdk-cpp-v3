
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_dataPoints_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_dataPoints_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PoolMonitor_statistics.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMonitor_dataPoints
    : public ModelBase
{
public:
    PoolMonitor_dataPoints();
    virtual ~PoolMonitor_dataPoints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMonitor_dataPoints members

    /// <summary>
    /// **参数解释**：指标数据时间戳，以毫秒为单位。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int32_t value);

    /// <summary>
    /// **参数解释**：指标数据单位。 **取值范围**：可选值如下： - Percent：百分比。 - Megabytes：兆字节。
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// **参数解释**：指标数据值。
    /// </summary>

    std::vector<PoolMonitor_statistics>& getStatistics();
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::vector<PoolMonitor_statistics>& value);


protected:
    int32_t timestamp_;
    bool timestampIsSet_;
    std::string unit_;
    bool unitIsSet_;
    std::vector<PoolMonitor_statistics> statistics_;
    bool statisticsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_dataPoints_H_
