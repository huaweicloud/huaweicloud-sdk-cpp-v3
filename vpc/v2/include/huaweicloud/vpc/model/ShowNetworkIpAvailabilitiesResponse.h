
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowNetworkIpAvailabilitiesResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowNetworkIpAvailabilitiesResponse_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/NetworkIpAvailability.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  ShowNetworkIpAvailabilitiesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNetworkIpAvailabilitiesResponse();
    virtual ~ShowNetworkIpAvailabilitiesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowNetworkIpAvailabilitiesResponse members

    /// <summary>
    /// 
    /// </summary>

    NetworkIpAvailability getNetworkIpAvailability() const;
    bool networkIpAvailabilityIsSet() const;
    void unsetnetworkIpAvailability();
    void setNetworkIpAvailability(const NetworkIpAvailability& value);


protected:
    NetworkIpAvailability networkIpAvailability_;
    bool networkIpAvailabilityIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowNetworkIpAvailabilitiesResponse_H_
