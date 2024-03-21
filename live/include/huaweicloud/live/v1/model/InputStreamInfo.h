
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputStreamInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputStreamInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/SourcesInfo.h>
#include <huaweicloud/live/v1/model/FailoverConditions.h>
#include <string>
#include <huaweicloud/live/v1/model/SecondarySourcesInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 频道入流信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  InputStreamInfo
    : public ModelBase
{
public:
    InputStreamInfo();
    virtual ~InputStreamInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputStreamInfo members

    /// <summary>
    /// 频道入流协议 - FLV_PULL - RTMP_PUSH - RTMP_PULL - HLS_PULL - SRT_PULL - SRT_PUSH
    /// </summary>

    std::string getInputProtocol() const;
    bool inputProtocolIsSet() const;
    void unsetinputProtocol();
    void setInputProtocol(const std::string& value);

    /// <summary>
    /// 频道主源流信息。入流协议为RTMP_PUSH和SRT_PUSH时，非必填项。其他情况下，均为必填项。
    /// </summary>

    std::vector<SourcesInfo>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourcesInfo>& value);

    /// <summary>
    /// 备入流数组，非必填项。如果有备入流，则主备入流必须保证路数、codec和分辨率均一致。入流协议为RTMP_PUSH时，无需填写。
    /// </summary>

    std::vector<SecondarySourcesInfo>& getSecondarySources();
    bool secondarySourcesIsSet() const;
    void unsetsecondarySources();
    void setSecondarySources(const std::vector<SecondarySourcesInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    FailoverConditions getFailoverConditions() const;
    bool failoverConditionsIsSet() const;
    void unsetfailoverConditions();
    void setFailoverConditions(const FailoverConditions& value);

    /// <summary>
    /// 当入流协议为HLS_PULL时，最大带宽限制。 未配置会默认选择BANDWIDTH最高的流
    /// </summary>

    int32_t getMaxBandwidthLimit() const;
    bool maxBandwidthLimitIsSet() const;
    void unsetmaxBandwidthLimit();
    void setMaxBandwidthLimit(int32_t value);

    /// <summary>
    /// 当推流协议为SRT_PUSH时，如果配置了直推源站，编码器不支持输入streamid，需要打开设置为true
    /// </summary>

    bool isIpPortMode() const;
    bool ipPortModeIsSet() const;
    void unsetipPortMode();
    void setIpPortMode(bool value);


protected:
    std::string inputProtocol_;
    bool inputProtocolIsSet_;
    std::vector<SourcesInfo> sources_;
    bool sourcesIsSet_;
    std::vector<SecondarySourcesInfo> secondarySources_;
    bool secondarySourcesIsSet_;
    FailoverConditions failoverConditions_;
    bool failoverConditionsIsSet_;
    int32_t maxBandwidthLimit_;
    bool maxBandwidthLimitIsSet_;
    bool ipPortMode_;
    bool ipPortModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputStreamInfo_H_
