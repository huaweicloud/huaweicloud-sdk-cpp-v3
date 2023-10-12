
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateRouterOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateRouterRequestBody
    : public ModelBase
{
public:
    NeutronUpdateRouterRequestBody();
    virtual ~NeutronUpdateRouterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateRouterRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateRouterOption getRouter() const;
    bool routerIsSet() const;
    void unsetrouter();
    void setRouter(const NeutronUpdateRouterOption& value);


protected:
    NeutronUpdateRouterOption router_;
    bool routerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterRequestBody_H_
