
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetCPUThresholdData_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetCPUThresholdData_H_


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
/// CPU阈值设置请求体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SetCPUThresholdData
    : public ModelBase
{
public:
    SetCPUThresholdData();
    virtual ~SetCPUThresholdData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetCPUThresholdData members

    /// <summary>
    /// CPU阈值设定值，单位为百分比(%)。 取值范围：0 - 100。
    /// </summary>

    int32_t getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(int32_t value);


protected:
    int32_t cpu_;
    bool cpuIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetCPUThresholdData_H_
