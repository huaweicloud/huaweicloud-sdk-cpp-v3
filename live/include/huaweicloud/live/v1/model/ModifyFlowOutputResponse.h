
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowOutputResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowOutputResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyFlowOutputResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyFlowOutputResponse();
    virtual ~ModifyFlowOutputResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyFlowOutputResponse members

    /// <summary>
    /// ip白名单，最大20条ip白名单
    /// </summary>

    std::vector<std::string>& getCidrWhitelist();
    bool cidrWhitelistIsSet() const;
    void unsetcidrWhitelist();
    void setCidrWhitelist(const std::vector<std::string>& value);

    /// <summary>
    /// 推流地址，支持ip和域名，最大值64
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// output名称，有效字符：大小写字母，数字，中划线，下划线;且只能以字母开头
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FlowSourceDecryption getEncryption() const;
    bool encryptionIsSet() const;
    void unsetencryption();
    void setEncryption(const FlowSourceDecryption& value);

    /// <summary>
    /// 输出状态，ENABLED：启用，DISABLED：禁用
    /// </summary>

    std::string getOutputStatus() const;
    bool outputStatusIsSet() const;
    void unsetoutputStatus();
    void setOutputStatus(const std::string& value);

    /// <summary>
    /// srt-listener模式，监听地址，不支持修改
    /// </summary>

    std::string getListenerAddress() const;
    bool listenerAddressIsSet() const;
    void unsetlistenerAddress();
    void setListenerAddress(const std::string& value);

    /// <summary>
    /// 端口，如果ssrt-listener为监听端口，那么srt-caller为对端端口
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 协议，srt-caller，srt-listener
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// srt-caller模式支持设置streamid
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

    /// <summary>
    /// 输出描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 最小时延，单位毫秒，默认值2000，最小值10，最大值15000
    /// </summary>

    int32_t getMinLatency() const;
    bool minLatencyIsSet() const;
    void unsetminLatency();
    void setMinLatency(int32_t value);

    /// <summary>
    /// 转推流状态，CONNECTED：转推中，DISCONNECTED：转推中断
    /// </summary>

    std::string getHealthStatus() const;
    bool healthStatusIsSet() const;
    void unsethealthStatus();
    void setHealthStatus(const std::string& value);

    /// <summary>
    /// 输出类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::vector<std::string> cidrWhitelist_;
    bool cidrWhitelistIsSet_;
    std::string destination_;
    bool destinationIsSet_;
    std::string name_;
    bool nameIsSet_;
    FlowSourceDecryption encryption_;
    bool encryptionIsSet_;
    std::string outputStatus_;
    bool outputStatusIsSet_;
    std::string listenerAddress_;
    bool listenerAddressIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t minLatency_;
    bool minLatencyIsSet_;
    std::string healthStatus_;
    bool healthStatusIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowOutputResponse_H_
