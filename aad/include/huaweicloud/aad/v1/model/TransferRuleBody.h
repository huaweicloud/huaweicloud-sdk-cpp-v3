
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_TransferRuleBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_TransferRuleBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  TransferRuleBody
    : public ModelBase
{
public:
    TransferRuleBody();
    virtual ~TransferRuleBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferRuleBody members

    /// <summary>
    /// 转发协议，tcp或udp
    /// </summary>

    std::string getForwardProtocol() const;
    bool forwardProtocolIsSet() const;
    void unsetforwardProtocol();
    void setForwardProtocol(const std::string& value);

    /// <summary>
    /// 转发端口
    /// </summary>

    int32_t getForwardPort() const;
    bool forwardPortIsSet() const;
    void unsetforwardPort();
    void setForwardPort(int32_t value);

    /// <summary>
    /// 源站端口
    /// </summary>

    int32_t getSourcePort() const;
    bool sourcePortIsSet() const;
    void unsetsourcePort();
    void setSourcePort(int32_t value);

    /// <summary>
    /// 源站IP，多个IP用逗号隔开，限制20个IP
    /// </summary>

    std::string getSourceIp() const;
    bool sourceIpIsSet() const;
    void unsetsourceIp();
    void setSourceIp(const std::string& value);


protected:
    std::string forwardProtocol_;
    bool forwardProtocolIsSet_;
    int32_t forwardPort_;
    bool forwardPortIsSet_;
    int32_t sourcePort_;
    bool sourcePortIsSet_;
    std::string sourceIp_;
    bool sourceIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_TransferRuleBody_H_
