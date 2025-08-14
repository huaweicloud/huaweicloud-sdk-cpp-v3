
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceTunnelsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceTunnelsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/TunnelInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDeviceTunnelsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDeviceTunnelsResponse();
    virtual ~ListDeviceTunnelsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDeviceTunnelsResponse members

    /// <summary>
    /// 隧道信息列表。
    /// </summary>

    std::vector<TunnelInfo>& getTunnels();
    bool tunnelsIsSet() const;
    void unsettunnels();
    void setTunnels(const std::vector<TunnelInfo>& value);


protected:
    std::vector<TunnelInfo> tunnels_;
    bool tunnelsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceTunnelsResponse_H_
