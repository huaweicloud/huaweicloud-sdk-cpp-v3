
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRoutetableReqBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRoutetableReqBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/UpdateRouteTableReq.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateRoutetableReqBody
    : public ModelBase
{
public:
    UpdateRoutetableReqBody();
    virtual ~UpdateRoutetableReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRoutetableReqBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateRouteTableReq getRoutetable() const;
    bool routetableIsSet() const;
    void unsetroutetable();
    void setRoutetable(const UpdateRouteTableReq& value);


protected:
    UpdateRouteTableReq routetable_;
    bool routetableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRoutetableReqBody_H_
