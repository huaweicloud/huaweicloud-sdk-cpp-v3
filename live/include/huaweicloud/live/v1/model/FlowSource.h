
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowSource_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowSource_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/FlowSourceDecryption.h>
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
/// 入流信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  FlowSource
    : public ModelBase
{
public:
    FlowSource();
    virtual ~FlowSource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowSource members

    /// <summary>
    /// 拉流地址
    /// </summary>

    std::string getSourceListenerAddress() const;
    bool sourceListenerAddressIsSet() const;
    void unsetsourceListenerAddress();
    void setSourceListenerAddress(const std::string& value);

    /// <summary>
    /// 拉流端口，2077/2088不可选
    /// </summary>

    int32_t getSourceListenerPort() const;
    bool sourceListenerPortIsSet() const;
    void unsetsourceListenerPort();
    void setSourceListenerPort(int32_t value);

    /// <summary>
    /// srt拉流streamid
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

    /// <summary>
    /// 最小时延，单位ms
    /// </summary>

    int32_t getMinLatency() const;
    bool minLatencyIsSet() const;
    void unsetminLatency();
    void setMinLatency(int32_t value);

    /// <summary>
    /// 推流CIDR IP白名单列表
    /// </summary>

    std::vector<std::string>& getCidrWhitelist();
    bool cidrWhitelistIsSet() const;
    void unsetcidrWhitelist();
    void setCidrWhitelist(const std::vector<std::string>& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 协议，srt-caller，srt-listener
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 入流资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FlowSourceDecryption getDecryption() const;
    bool decryptionIsSet() const;
    void unsetdecryption();
    void setDecryption(const FlowSourceDecryption& value);

    /// <summary>
    /// **参数解释**： 转推流状态 **约束限制**： 不涉及 **取值范围**： - CONNECTED：转推中 - DISCONNECTED：转推中断 
    /// </summary>

    std::string getHealthStatus() const;
    bool healthStatusIsSet() const;
    void unsethealthStatus();
    void setHealthStatus(const std::string& value);


protected:
    std::string sourceListenerAddress_;
    bool sourceListenerAddressIsSet_;
    int32_t sourceListenerPort_;
    bool sourceListenerPortIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    int32_t minLatency_;
    bool minLatencyIsSet_;
    std::vector<std::string> cidrWhitelist_;
    bool cidrWhitelistIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string name_;
    bool nameIsSet_;
    FlowSourceDecryption decryption_;
    bool decryptionIsSet_;
    std::string healthStatus_;
    bool healthStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowSource_H_
