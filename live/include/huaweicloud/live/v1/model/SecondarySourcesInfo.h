
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_SecondarySourcesInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_SecondarySourcesInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主入流信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  SecondarySourcesInfo
    : public ModelBase
{
public:
    SecondarySourcesInfo();
    virtual ~SecondarySourcesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecondarySourcesInfo members

    /// <summary>
    /// 频道源流URL，用于外部拉流
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 码率。无需直播转码时，此参数为必填项  单位：bps。取值范围：0 - 104,857,600（100Mbps）
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 分辨率对应宽的值，非必填项  取值范围：0 - 4096（4K）
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 分辨率对应高的值，非必填项  取值范围：0 - 2160（4K）
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 是否使用bitrate来固定码率。默认值：false
    /// </summary>

    bool isBitrateFor3u8() const;
    bool bitrateFor3u8IsSet() const;
    void unsetbitrateFor3u8();
    void setBitrateFor3u8(bool value);

    /// <summary>
    /// 协议为SRT_PUSH时的加密信息
    /// </summary>

    std::string getPassphrase() const;
    bool passphraseIsSet() const;
    void unsetpassphrase();
    void setPassphrase(const std::string& value);

    /// <summary>
    /// 备入流地址列表
    /// </summary>

    std::vector<std::string>& getBackupUrls();
    bool backupUrlsIsSet() const;
    void unsetbackupUrls();
    void setBackupUrls(const std::vector<std::string>& value);

    /// <summary>
    /// 协议为SRT_PULL时，拉流地址的streamid
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

    /// <summary>
    /// 协议为SRT_PULL时，拉流时延
    /// </summary>

    int32_t getLatency() const;
    bool latencyIsSet() const;
    void unsetlatency();
    void setLatency(int32_t value);


protected:
    std::string url_;
    bool urlIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    bool bitrateFor3u8_;
    bool bitrateFor3u8IsSet_;
    std::string passphrase_;
    bool passphraseIsSet_;
    std::vector<std::string> backupUrls_;
    bool backupUrlsIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    int32_t latency_;
    bool latencyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_SecondarySourcesInfo_H_
