
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CPUThresholdData_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CPUThresholdData_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// CPU阈值查询结果结构体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CPUThresholdData
    : public ModelBase
{
public:
    CPUThresholdData();
    virtual ~CPUThresholdData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CPUThresholdData members

    /// <summary>
    /// 自定义的cpu阈值，单位为百分比(%)
    /// </summary>

    int32_t getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(int32_t value);

    /// <summary>
    /// cpu阈值默认值，单位为百分比(%)
    /// </summary>

    int32_t getCpuDefault() const;
    bool cpuDefaultIsSet() const;
    void unsetcpuDefault();
    void setCpuDefault(int32_t value);


protected:
    int32_t cpu_;
    bool cpuIsSet_;
    int32_t cpuDefault_;
    bool cpuDefaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CPUThresholdData_H_
