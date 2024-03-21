
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateOttChannelInfoReq_record_settings_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateOttChannelInfoReq_record_settings_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 最大回看录制时长。在此时间段内会连续不断的录制，为必选项  单位：秒。取值为“0”时，表示不支持录制；最大支持录制14天
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateOttChannelInfoReq_record_settings
    : public ModelBase
{
public:
    CreateOttChannelInfoReq_record_settings();
    virtual ~CreateOttChannelInfoReq_record_settings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOttChannelInfoReq_record_settings members

    /// <summary>
    /// 最大回看录制时长。在此时间段内会连续不断的录制，为必选项  单位：秒。取值为“0”时，表示不支持录制；最大支持录制14天
    /// </summary>

    int32_t getRollingbufferDuration() const;
    bool rollingbufferDurationIsSet() const;
    void unsetrollingbufferDuration();
    void setRollingbufferDuration(int32_t value);


protected:
    int32_t rollingbufferDuration_;
    bool rollingbufferDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateOttChannelInfoReq_record_settings_H_
