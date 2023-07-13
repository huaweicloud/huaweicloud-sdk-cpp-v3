
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListNetworksResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListNetworksResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <huaweicloud/vpc/v2/model/NeutronNetwork.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListNetworksResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListNetworksResponse();
    virtual ~NeutronListNetworksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListNetworksResponse members

    /// <summary>
    /// network对象列表
    /// </summary>

    std::vector<NeutronNetwork>& getNetworks();
    bool networksIsSet() const;
    void unsetnetworks();
    void setNetworks(const std::vector<NeutronNetwork>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getNetworksLinks();
    bool networksLinksIsSet() const;
    void unsetnetworksLinks();
    void setNetworksLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronNetwork> networks_;
    bool networksIsSet_;
    std::vector<NeutronPageLink> networksLinks_;
    bool networksLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListNetworksResponse_H_
