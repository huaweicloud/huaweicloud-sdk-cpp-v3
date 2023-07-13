
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronNetwork.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateNetworkResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronUpdateNetworkResponse();
    virtual ~NeutronUpdateNetworkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateNetworkResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronNetwork getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const NeutronNetwork& value);


protected:
    NeutronNetwork network_;
    bool networkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkResponse_H_
