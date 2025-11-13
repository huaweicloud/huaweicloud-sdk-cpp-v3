
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateSmartLiveUserConfigReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateSmartLiveUserConfigReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LiveNotifyConfigReq.h>
#include <huaweicloud/metastudio/v1/model/LiveExitConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveEventCallBackConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户直播配置修改请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateSmartLiveUserConfigReq
    : public ModelBase
{
public:
    UpdateSmartLiveUserConfigReq();
    virtual ~UpdateSmartLiveUserConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSmartLiveUserConfigReq members

    /// <summary>
    /// 
    /// </summary>

    LiveExitConfig getLiveExitConfig() const;
    bool liveExitConfigIsSet() const;
    void unsetliveExitConfig();
    void setLiveExitConfig(const LiveExitConfig& value);

    /// <summary>
    /// 
    /// </summary>

    LiveEventCallBackConfig getLiveEventCallbackConfig() const;
    bool liveEventCallbackConfigIsSet() const;
    void unsetliveEventCallbackConfig();
    void setLiveEventCallbackConfig(const LiveEventCallBackConfig& value);

    /// <summary>
    /// 
    /// </summary>

    LiveNotifyConfigReq getLiveNotifyConfig() const;
    bool liveNotifyConfigIsSet() const;
    void unsetliveNotifyConfig();
    void setLiveNotifyConfig(const LiveNotifyConfigReq& value);


protected:
    LiveExitConfig liveExitConfig_;
    bool liveExitConfigIsSet_;
    LiveEventCallBackConfig liveEventCallbackConfig_;
    bool liveEventCallbackConfigIsSet_;
    LiveNotifyConfigReq liveNotifyConfig_;
    bool liveNotifyConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateSmartLiveUserConfigReq_H_
