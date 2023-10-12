
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceMonitorExtendResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceMonitorExtendResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowInstanceMonitorExtendResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceMonitorExtendResponse();
    virtual ~ShowInstanceMonitorExtendResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceMonitorExtendResponse members

    /// <summary>
    /// 实例秒级监控开关。  - true，表示开启。 - false，表示关闭。
    /// </summary>

    bool isMonitorSwitch() const;
    bool monitorSwitchIsSet() const;
    void unsetmonitorSwitch();
    void setMonitorSwitch(bool value);

    /// <summary>
    /// 采集周期，仅在monitor_switch为true时返回。  - 1：采集周期为1s。 - 5：采集周期为5s。
    /// </summary>

    int32_t getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(int32_t value);


protected:
    bool monitorSwitch_;
    bool monitorSwitchIsSet_;
    int32_t period_;
    bool periodIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceMonitorExtendResponse_H_
