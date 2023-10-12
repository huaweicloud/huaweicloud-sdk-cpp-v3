
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/NeutronUpdateRouterRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateRouterRequest
    : public ModelBase
{
public:
    NeutronUpdateRouterRequest();
    virtual ~NeutronUpdateRouterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateRouterRequest members

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

    NeutronUpdateRouterRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdateRouterRequestBody& value);


protected:
    std::string routerId_;
    bool routerIdIsSet_;
    NeutronUpdateRouterRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdateRouterRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdateRouterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterRequest_H_
