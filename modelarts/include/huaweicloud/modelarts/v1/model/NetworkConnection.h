
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkConnection_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkConnection_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PeerConnectionItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 当前网络与其他网络的连接信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkConnection
    : public ModelBase
{
public:
    NetworkConnection();
    virtual ~NetworkConnection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkConnection members

    /// <summary>
    /// **参数解释**：Peer方式打通网络列表。
    /// </summary>

    std::vector<PeerConnectionItem>& getPeerConnectionList();
    bool peerConnectionListIsSet() const;
    void unsetpeerConnectionList();
    void setPeerConnectionList(const std::vector<PeerConnectionItem>& value);


protected:
    std::vector<PeerConnectionItem> peerConnectionList_;
    bool peerConnectionListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkConnection_H_
