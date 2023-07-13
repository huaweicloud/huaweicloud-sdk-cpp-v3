
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/UpdateRoutetableReqBody.h>
#include <string>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateRouteTableRequest
    : public ModelBase
{
public:
    UpdateRouteTableRequest();
    virtual ~UpdateRouteTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateRouteTableRequest members

    /// <summary>
    /// 路由表ID
    /// </summary>

    std::string getRoutetableId() const;
    bool routetableIdIsSet() const;
    void unsetroutetableId();
    void setRoutetableId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateRoutetableReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateRoutetableReqBody& value);


protected:
    std::string routetableId_;
    bool routetableIdIsSet_;
    UpdateRoutetableReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRouteTableRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRouteTableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableRequest_H_
