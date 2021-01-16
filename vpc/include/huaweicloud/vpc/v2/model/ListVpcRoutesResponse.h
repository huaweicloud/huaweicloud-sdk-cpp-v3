
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcRoutesResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcRoutesResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/VpcRoute.h>
#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  ListVpcRoutesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcRoutesResponse();
    virtual ~ListVpcRoutesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVpcRoutesResponse members

    /// <summary>
    /// route对象列表
    /// </summary>

    std::vector<VpcRoute>& getRoutes();
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const std::vector<VpcRoute>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getRoutesLinks();
    bool routesLinksIsSet() const;
    void unsetroutesLinks();
    void setRoutesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<VpcRoute> routes_;
    bool routesIsSet_;
    std::vector<NeutronPageLink> routesLinks_;
    bool routesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcRoutesResponse_H_
