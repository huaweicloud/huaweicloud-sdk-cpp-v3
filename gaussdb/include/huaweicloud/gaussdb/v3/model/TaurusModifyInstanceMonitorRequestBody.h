
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusModifyInstanceMonitorRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusModifyInstanceMonitorRequestBody_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 秒级监控修改请求
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusModifyInstanceMonitorRequestBody
    : public ModelBase
{
public:
    TaurusModifyInstanceMonitorRequestBody();
    virtual ~TaurusModifyInstanceMonitorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TaurusModifyInstanceMonitorRequestBody members

    /// <summary>
    /// 实例秒级监控开关。  - true：开启 - false：关闭
    /// </summary>

    bool isMonitorSwitch() const;
    bool monitorSwitchIsSet() const;
    void unsetmonitorSwitch();
    void setMonitorSwitch(bool value);

    /// <summary>
    /// 采集周期，仅在monitor_switch为true时生效。默认为5s。monitor_switch为false时，不传该参数。取值：  - 1：采集周期为1s。 - 5：采集周期为5s。
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusModifyInstanceMonitorRequestBody_H_
