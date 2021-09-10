
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateRouteTableRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateRouteTableRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateRoutetableReqBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateRouteTableRequest
    : public ModelBase
{
public:
    CreateRouteTableRequest();
    virtual ~CreateRouteTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateRouteTableRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateRoutetableReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateRoutetableReqBody& value);


protected:
    CreateRoutetableReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRouteTableRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRouteTableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateRouteTableRequest_H_
