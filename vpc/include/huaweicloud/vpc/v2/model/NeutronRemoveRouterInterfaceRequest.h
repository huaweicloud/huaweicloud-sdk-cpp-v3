
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveRouterInterfaceRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveRouterInterfaceRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/RouterInterfaceRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronRemoveRouterInterfaceRequest
    : public ModelBase
{
public:
    NeutronRemoveRouterInterfaceRequest();
    virtual ~NeutronRemoveRouterInterfaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronRemoveRouterInterfaceRequest members

    /// <summary>
    /// 路由器ID
    /// </summary>

    std::string getRouterId() const;
    bool routerIdIsSet() const;
    void unsetrouterId();
    void setRouterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RouterInterfaceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RouterInterfaceRequestBody& value);


protected:
    std::string routerId_;
    bool routerIdIsSet_;
    RouterInterfaceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronRemoveRouterInterfaceRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronRemoveRouterInterfaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveRouterInterfaceRequest_H_
