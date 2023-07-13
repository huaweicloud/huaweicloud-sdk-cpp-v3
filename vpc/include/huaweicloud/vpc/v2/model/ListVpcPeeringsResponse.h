
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringsResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <huaweicloud/vpc/v2/model/VpcPeering.h>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  ListVpcPeeringsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcPeeringsResponse();
    virtual ~ListVpcPeeringsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVpcPeeringsResponse members

    /// <summary>
    /// peering对象列表
    /// </summary>

    std::vector<VpcPeering>& getPeerings();
    bool peeringsIsSet() const;
    void unsetpeerings();
    void setPeerings(const std::vector<VpcPeering>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getPeeringsLinks();
    bool peeringsLinksIsSet() const;
    void unsetpeeringsLinks();
    void setPeeringsLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<VpcPeering> peerings_;
    bool peeringsIsSet_;
    std::vector<NeutronPageLink> peeringsLinks_;
    bool peeringsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringsResponse_H_
