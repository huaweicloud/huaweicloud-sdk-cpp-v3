
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkConnectionStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkConnectionStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/SfsTurboConnectionStatus.h>
#include <huaweicloud/modelarts/v1/model/PeerConnectionStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 当前网络与其他云服务的连接状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkConnectionStatus
    : public ModelBase
{
public:
    NetworkConnectionStatus();
    virtual ~NetworkConnectionStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkConnectionStatus members

    /// <summary>
    /// **参数解释**：Peer方式打通网络的状态信息列表。
    /// </summary>

    std::vector<PeerConnectionStatus>& getPeerConnectionStatus();
    bool peerConnectionStatusIsSet() const;
    void unsetpeerConnectionStatus();
    void setPeerConnectionStatus(const std::vector<PeerConnectionStatus>& value);

    /// <summary>
    /// **参数解释**：网络可连通的SFS Turbo信息列表。
    /// </summary>

    std::vector<SfsTurboConnectionStatus>& getSfsTurboStatus();
    bool sfsTurboStatusIsSet() const;
    void unsetsfsTurboStatus();
    void setSfsTurboStatus(const std::vector<SfsTurboConnectionStatus>& value);


protected:
    std::vector<PeerConnectionStatus> peerConnectionStatus_;
    bool peerConnectionStatusIsSet_;
    std::vector<SfsTurboConnectionStatus> sfsTurboStatus_;
    bool sfsTurboStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkConnectionStatus_H_
