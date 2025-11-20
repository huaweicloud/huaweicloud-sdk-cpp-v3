
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveUserConfigResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveUserConfigResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LiveNotifyConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveExitConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LiveEventCallBackConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowSmartLiveUserConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSmartLiveUserConfigResponse();
    virtual ~ShowSmartLiveUserConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSmartLiveUserConfigResponse members

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

    LiveNotifyConfig getLiveNotifyConfig() const;
    bool liveNotifyConfigIsSet() const;
    void unsetliveNotifyConfig();
    void setLiveNotifyConfig(const LiveNotifyConfig& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    LiveExitConfig liveExitConfig_;
    bool liveExitConfigIsSet_;
    LiveEventCallBackConfig liveEventCallbackConfig_;
    bool liveEventCallbackConfigIsSet_;
    LiveNotifyConfig liveNotifyConfig_;
    bool liveNotifyConfigIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveUserConfigResponse_H_
