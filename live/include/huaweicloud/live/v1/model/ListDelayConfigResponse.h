
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListDelayConfigResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListDelayConfigResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/DelayConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListDelayConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDelayConfigResponse();
    virtual ~ListDelayConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDelayConfigResponse members

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);

    /// <summary>
    /// 直播延时配置
    /// </summary>

    std::vector<DelayConfig>& getDelayConfig();
    bool delayConfigIsSet() const;
    void unsetdelayConfig();
    void setDelayConfig(const std::vector<DelayConfig>& value);


protected:
    std::string playDomain_;
    bool playDomainIsSet_;
    std::vector<DelayConfig> delayConfig_;
    bool delayConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListDelayConfigResponse_H_
