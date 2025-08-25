
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowVmMonitorRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowVmMonitorRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowVmMonitorRequest
    : public ModelBase
{
public:
    ShowVmMonitorRequest();
    virtual ~ShowVmMonitorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVmMonitorRequest members

    /// <summary>
    /// 所属空间，分别从不同的来源获取监控数据，有：ECS，DHSM
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 指标名称，有：mem_util，cpu_uttl，network_outgoing_bytes_rate_inband
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 实例id，默认空字符串，默认查询所有实例。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 虚拟机id
    /// </summary>

    std::string getVsmId() const;
    bool vsmIdIsSet() const;
    void unsetvsmId();
    void setVsmId(const std::string& value);

    /// <summary>
    /// 查询时间范围的起始时间，毫秒时间戳，默认0，默认查询从三天前。
    /// </summary>

    int64_t getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();
    void setFrom(int64_t value);

    /// <summary>
    /// 查询时间范围的终止时间，毫秒时间戳，默认0，默认查询到当前时间。
    /// </summary>

    int64_t getTo() const;
    bool toIsSet() const;
    void unsetto();
    void setTo(int64_t value);

    /// <summary>
    /// 统计数据周期，默认0，默认周期为5分钟
    /// </summary>

    int32_t getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(int32_t value);

    /// <summary>
    /// 统计值类型，默认min，默认查询最小值
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);


protected:
    std::string namespace_;
    bool namespaceIsSet_;
    std::string metricName_;
    bool metricNameIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string vsmId_;
    bool vsmIdIsSet_;
    int64_t from_;
    bool fromIsSet_;
    int64_t to_;
    bool toIsSet_;
    int32_t period_;
    bool periodIsSet_;
    std::string filter_;
    bool filterIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVmMonitorRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVmMonitorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowVmMonitorRequest_H_
