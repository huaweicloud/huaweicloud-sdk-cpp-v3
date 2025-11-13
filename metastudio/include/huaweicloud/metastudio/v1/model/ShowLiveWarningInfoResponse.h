
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowLiveWarningInfoResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowLiveWarningInfoResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LiveWarningItem.h>
#include <vector>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowLiveWarningInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLiveWarningInfoResponse();
    virtual ~ShowLiveWarningInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLiveWarningInfoResponse members

    /// <summary>
    /// 开播风险告警列表。
    /// </summary>

    std::vector<LiveWarningItem>& getLiveWarningInfo();
    bool liveWarningInfoIsSet() const;
    void unsetliveWarningInfo();
    void setLiveWarningInfo(const std::vector<LiveWarningItem>& value);

    /// <summary>
    /// **参数解释**： 配置的最大直播时长。单位小时。 0 为不限制。 **约束限制**： 停止直播逻辑配置为立即停止则直播停止误差在5分钟之内。其他逻辑则加上处理时长。 **默认取值**： 不设置则表示不限时。
    /// </summary>

    int32_t getLimitDuration() const;
    bool limitDurationIsSet() const;
    void unsetlimitDuration();
    void setLimitDuration(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<LiveWarningItem> liveWarningInfo_;
    bool liveWarningInfoIsSet_;
    int32_t limitDuration_;
    bool limitDurationIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowLiveWarningInfoResponse_H_
