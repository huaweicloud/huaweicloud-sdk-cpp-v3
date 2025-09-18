
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequest3_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequest3_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/projectman/v4/model/MetricRequest3_dividend.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  MetricRequest3
    : public ModelBase
{
public:
    MetricRequest3();
    virtual ~MetricRequest3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricRequest3 members

    /// <summary>
    /// 统计周期
    /// </summary>

    std::string getDateRange() const;
    bool dateRangeIsSet() const;
    void unsetdateRange();
    void setDateRange(const std::string& value);

    /// <summary>
    /// 指标类型
    /// </summary>

    std::string getMetricType() const;
    bool metricTypeIsSet() const;
    void unsetmetricType();
    void setMetricType(const std::string& value);

    /// <summary>
    /// 迭代ID
    /// </summary>

    std::string getSprintId() const;
    bool sprintIdIsSet() const;
    void unsetsprintId();
    void setSprintId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MetricRequest3_dividend getDividend() const;
    bool dividendIsSet() const;
    void unsetdividend();
    void setDividend(const MetricRequest3_dividend& value);

    /// <summary>
    /// 指标分母过滤条件
    /// </summary>

    Object getDivisor() const;
    bool divisorIsSet() const;
    void unsetdivisor();
    void setDivisor(const Object& value);


protected:
    std::string dateRange_;
    bool dateRangeIsSet_;
    std::string metricType_;
    bool metricTypeIsSet_;
    std::string sprintId_;
    bool sprintIdIsSet_;
    MetricRequest3_dividend dividend_;
    bool dividendIsSet_;
    Object divisor_;
    bool divisorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequest3_H_
