
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSubnetsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSubnetsResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <huaweicloud/vpc/v2/model/NeutronSubnet.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListSubnetsResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListSubnetsResponse();
    virtual ~NeutronListSubnetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListSubnetsResponse members

    /// <summary>
    /// subnet对象列表
    /// </summary>

    std::vector<NeutronSubnet>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<NeutronSubnet>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getSubnetsLinks();
    bool subnetsLinksIsSet() const;
    void unsetsubnetsLinks();
    void setSubnetsLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronSubnet> subnets_;
    bool subnetsIsSet_;
    std::vector<NeutronPageLink> subnetsLinks_;
    bool subnetsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSubnetsResponse_H_
