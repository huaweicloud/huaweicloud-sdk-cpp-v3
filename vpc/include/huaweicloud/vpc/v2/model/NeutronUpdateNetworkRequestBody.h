
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateNetworkOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateNetworkRequestBody
    : public ModelBase
{
public:
    NeutronUpdateNetworkRequestBody();
    virtual ~NeutronUpdateNetworkRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateNetworkRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateNetworkOption getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const NeutronUpdateNetworkOption& value);


protected:
    NeutronUpdateNetworkOption network_;
    bool networkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkRequestBody_H_
