
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowSecondLevelMonitoringStatusResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowSecondLevelMonitoringStatusResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowSecondLevelMonitoringStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSecondLevelMonitoringStatusResponse();
    virtual ~ShowSecondLevelMonitoringStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSecondLevelMonitoringStatusResponse members

    /// <summary>
    /// 秒级监控开启状态。  取值为true,开启，取值为false，关闭。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    bool enabled_;
    bool enabledIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowSecondLevelMonitoringStatusResponse_H_
