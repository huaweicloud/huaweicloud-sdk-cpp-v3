
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetsResponse_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/Subnet.h"
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
class HUAWEICLOUD_VPC_EXPORT  ListSubnetsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubnetsResponse();
    virtual ~ListSubnetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSubnetsResponse members

    /// <summary>
    /// subnet对象列表
    /// </summary>

    std::vector<Subnet>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<Subnet>& value);


protected:
    std::vector<Subnet> subnets_;
    bool subnetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetsResponse_H_
