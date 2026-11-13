
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringInfosResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringInfosResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  ListVpcPeeringInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcPeeringInfosResponse();
    virtual ~ListVpcPeeringInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVpcPeeringInfosResponse members

    /// <summary>
    /// 对等连接信息对象列表
    /// </summary>

    std::vector<VpcPeering>& getPeeringInfos();
    bool peeringInfosIsSet() const;
    void unsetpeeringInfos();
    void setPeeringInfos(const std::vector<VpcPeering>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getPeeringInfosLinks();
    bool peeringInfosLinksIsSet() const;
    void unsetpeeringInfosLinks();
    void setPeeringInfosLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<VpcPeering> peeringInfos_;
    bool peeringInfosIsSet_;
    std::vector<NeutronPageLink> peeringInfosLinks_;
    bool peeringInfosLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringInfosResponse_H_
