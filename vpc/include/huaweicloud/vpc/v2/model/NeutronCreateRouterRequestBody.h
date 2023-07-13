
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateRouterRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateRouterRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateRouterOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateRouterRequestBody
    : public ModelBase
{
public:
    NeutronCreateRouterRequestBody();
    virtual ~NeutronCreateRouterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateRouterRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateRouterOption getRouter() const;
    bool routerIsSet() const;
    void unsetrouter();
    void setRouter(const NeutronCreateRouterOption& value);


protected:
    NeutronCreateRouterOption router_;
    bool routerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateRouterRequestBody_H_
