
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_Datapoint_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_Datapoint_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 时间点的统计数据
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  Datapoint
    : public ModelBase
{
public:
    Datapoint();
    virtual ~Datapoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Datapoint members

    /// <summary>
    /// 最大值，未计算默认为0
    /// </summary>

    double getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(double value);

    /// <summary>
    /// 最小值，未计算默认为0
    /// </summary>

    double getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(double value);

    /// <summary>
    /// 平均值，未计算默认为0
    /// </summary>

    double getAverage() const;
    bool averageIsSet() const;
    void unsetaverage();
    void setAverage(double value);

    /// <summary>
    /// 综合，未计算默认为0
    /// </summary>

    double getSum() const;
    bool sumIsSet() const;
    void unsetsum();
    void setSum(double value);

    /// <summary>
    /// 方差，未计算默认为0
    /// </summary>

    double getVariance() const;
    bool varianceIsSet() const;
    void unsetvariance();
    void setVariance(double value);

    /// <summary>
    /// 毫秒时间戳
    /// </summary>

    int64_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int64_t value);

    /// <summary>
    /// 数据单位，比如%，个
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    double max_;
    bool maxIsSet_;
    double min_;
    bool minIsSet_;
    double average_;
    bool averageIsSet_;
    double sum_;
    bool sumIsSet_;
    double variance_;
    bool varianceIsSet_;
    int64_t timestamp_;
    bool timestampIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_Datapoint_H_
