
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputStreamInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputStreamInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/InputAudioSelector.h>
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
    /// 频道入流协议 - FLV_PULL - RTMP_PUSH - HLS_PULL - SRT_PULL - SRT_PUSH
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
    /// 当入流协议为HLS_PULL时，需要配置的最大带宽。  用户提供的拉流URL中，针对不同码率的音视频，均会携带带宽参数“BANDWIDTH”。 - 如果这里配置最大带宽，媒体直播服务从URL拉流时，会选择小于最大带宽且码率最大的音视频流，推流到源站。 - 如果这里未配置最大带宽，媒体直播服务从URL拉流时，会默认选择“BANDWIDTH”最高的音视频流，推流到源站。
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

    /// <summary>
    /// SRT_PUSH类型时，客户push ip白名单
    /// </summary>

    std::string getIpWhitelist() const;
    bool ipWhitelistIsSet() const;
    void unsetipWhitelist();
    void setIpWhitelist(const std::string& value);

    /// <summary>
    /// 广告的scte35信号源。  仅HLS_PULL类型的频道支持此配置，且目前仅支持SEGMENTS。
    /// </summary>

    std::string getScte35Source() const;
    bool scte35SourceIsSet() const;
    void unsetscte35Source();
    void setScte35Source(const std::string& value);

    /// <summary>
    /// 广告触发器配置。  包含如下取值： - Splice insert：拼接插入 - Provider advertisement：提供商广告 - Distributor advertisement：分销商广告 - Provider placement opportunity：提供商置放机会 - Distributor placement opportunity：分销商置放机会
    /// </summary>

    std::vector<std::string>& getAdTriggers();
    bool adTriggersIsSet() const;
    void unsetadTriggers();
    void setAdTriggers(const std::vector<std::string>& value);

    /// <summary>
    /// 设置音频选择器，最多设置8个音频选择器
    /// </summary>

    std::vector<InputAudioSelector>& getAudioSelectors();
    bool audioSelectorsIsSet() const;
    void unsetaudioSelectors();
    void setAudioSelectors(const std::vector<InputAudioSelector>& value);


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
    std::string ipWhitelist_;
    bool ipWhitelistIsSet_;
    std::string scte35Source_;
    bool scte35SourceIsSet_;
    std::vector<std::string> adTriggers_;
    bool adTriggersIsSet_;
    std::vector<InputAudioSelector> audioSelectors_;
    bool audioSelectorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputStreamInfo_H_
