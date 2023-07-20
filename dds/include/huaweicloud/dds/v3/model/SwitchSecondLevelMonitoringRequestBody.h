
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchSecondLevelMonitoringRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchSecondLevelMonitoringRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SwitchSecondLevelMonitoringRequestBody
    : public ModelBase
{
public:
    SwitchSecondLevelMonitoringRequestBody();
    virtual ~SwitchSecondLevelMonitoringRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SwitchSecondLevelMonitoringRequestBody members

    /// <summary>
    /// 是否开启秒级监控。 取值为true为开启，取值为false为关闭。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchSecondLevelMonitoringRequestBody_H_
