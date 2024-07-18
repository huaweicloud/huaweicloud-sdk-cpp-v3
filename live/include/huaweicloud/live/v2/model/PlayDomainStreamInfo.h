
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_PlayDomainStreamInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_PlayDomainStreamInfo_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  PlayDomainStreamInfo
    : public ModelBase
{
public:
    PlayDomainStreamInfo();
    virtual ~PlayDomainStreamInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlayDomainStreamInfo members

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);

    /// <summary>
    /// 播放流名
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 播放的协议，支持flv,hls,rtmp。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 1分钟粒度的带宽值，单位为bps。
    /// </summary>

    int64_t getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(int64_t value);

    /// <summary>
    /// 1分钟粒度的在线人数。
    /// </summary>

    int64_t getOnline() const;
    bool onlineIsSet() const;
    void unsetonline();
    void setOnline(int64_t value);


protected:
    std::string playDomain_;
    bool playDomainIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    int64_t bandwidth_;
    bool bandwidthIsSet_;
    int64_t online_;
    bool onlineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_PlayDomainStreamInfo_H_
