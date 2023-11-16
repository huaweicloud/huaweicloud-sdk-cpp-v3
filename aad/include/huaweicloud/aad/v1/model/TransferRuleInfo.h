
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_TransferRuleInfo_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_TransferRuleInfo_H_


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
class HUAWEICLOUD_AAD_V1_EXPORT  TransferRuleInfo
    : public ModelBase
{
public:
    TransferRuleInfo();
    virtual ~TransferRuleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferRuleInfo members

    /// <summary>
    /// 转发规则名ID
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

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
    /// LVS转发规则
    /// </summary>

    std::string getLbMethod() const;
    bool lbMethodIsSet() const;
    void unsetlbMethod();
    void setLbMethod(const std::string& value);

    /// <summary>
    /// 源站IP，多个IP用逗号隔开，限制20个IP
    /// </summary>

    std::string getSourceIp() const;
    bool sourceIpIsSet() const;
    void unsetsourceIp();
    void setSourceIp(const std::string& value);

    /// <summary>
    /// 源站状态 1 正常，2 异常
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string forwardProtocol_;
    bool forwardProtocolIsSet_;
    int32_t forwardPort_;
    bool forwardPortIsSet_;
    int32_t sourcePort_;
    bool sourcePortIsSet_;
    std::string lbMethod_;
    bool lbMethodIsSet_;
    std::string sourceIp_;
    bool sourceIpIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_TransferRuleInfo_H_
