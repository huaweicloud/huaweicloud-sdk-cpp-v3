
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/RoutetableAssociateReqbody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  AssociateRouteTableRequest
    : public ModelBase
{
public:
    AssociateRouteTableRequest();
    virtual ~AssociateRouteTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociateRouteTableRequest members

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

    RoutetableAssociateReqbody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RoutetableAssociateReqbody& value);


protected:
    std::string routetableId_;
    bool routetableIdIsSet_;
    RoutetableAssociateReqbody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateRouteTableRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateRouteTableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableRequest_H_
