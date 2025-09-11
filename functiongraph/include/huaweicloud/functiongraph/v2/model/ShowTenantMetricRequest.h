
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowTenantMetricRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowTenantMetricRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowTenantMetricRequest
    : public ModelBase
{
public:
    ShowTenantMetricRequest();
    virtual ~ShowTenantMetricRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantMetricRequest members

    /// <summary>
    /// 时间段，单位为分钟
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 开始时间，精确到ms的时间戳
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，精确到ms的时间戳
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 指标类型，为空或不在取值范围内时，查询所有指标。取值范围：totalCount 调用次数；errorCount 错误次数； averageDuration 运行时间；running 运行中个数；rejectCount  拒绝个数。
    /// </summary>

    std::string getMetricType() const;
    bool metricTypeIsSet() const;
    void unsetmetricType();
    void setMetricType(const std::string& value);


protected:
    std::string period_;
    bool periodIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string metricType_;
    bool metricTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTenantMetricRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTenantMetricRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowTenantMetricRequest_H_
