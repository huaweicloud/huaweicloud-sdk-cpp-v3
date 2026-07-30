
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PeerConnectionStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PeerConnectionStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Peer方式打通网络状态参数模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PeerConnectionStatus
    : public ModelBase
{
public:
    PeerConnectionStatus();
    virtual ~PeerConnectionStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PeerConnectionStatus members

    /// <summary>
    /// **参数解释**：对端的VPC ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getPeerVpcId() const;
    bool peerVpcIdIsSet() const;
    void unsetpeerVpcId();
    void setPeerVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**：对端的子网ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getPeerSubnetId() const;
    bool peerSubnetIdIsSet() const;
    void unsetpeerSubnetId();
    void setPeerSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：创建默认路由的开关。 **取值范围**：默认为false不创建。
    /// </summary>

    bool isDefaultGateWay() const;
    bool defaultGateWayIsSet() const;
    void unsetdefaultGateWay();
    void setDefaultGateWay(bool value);

    /// <summary>
    /// **参数解释**：网络的连接状态。 **取值范围**：可选值如下： - Connecting：网络连接中 - Active：网络连接正常 - Abnormal：网络连接不正常
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);


protected:
    std::string peerVpcId_;
    bool peerVpcIdIsSet_;
    std::string peerSubnetId_;
    bool peerSubnetIdIsSet_;
    bool defaultGateWay_;
    bool defaultGateWayIsSet_;
    std::string phase_;
    bool phaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PeerConnectionStatus_H_
