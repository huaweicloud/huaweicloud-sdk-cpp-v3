
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateRouterResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateRouterResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronRouter.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateRouterResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronCreateRouterResponse();
    virtual ~NeutronCreateRouterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateRouterResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronRouter getRouter() const;
    bool routerIsSet() const;
    void unsetrouter();
    void setRouter(const NeutronRouter& value);


protected:
    NeutronRouter router_;
    bool routerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateRouterResponse_H_
