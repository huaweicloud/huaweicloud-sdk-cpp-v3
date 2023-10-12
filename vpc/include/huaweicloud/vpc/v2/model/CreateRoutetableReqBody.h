
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateRoutetableReqBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateRoutetableReqBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateRouteTableReq.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateRoutetableReqBody
    : public ModelBase
{
public:
    CreateRoutetableReqBody();
    virtual ~CreateRoutetableReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRoutetableReqBody members

    /// <summary>
    /// 
    /// </summary>

    CreateRouteTableReq getRoutetable() const;
    bool routetableIsSet() const;
    void unsetroutetable();
    void setRoutetable(const CreateRouteTableReq& value);


protected:
    CreateRouteTableReq routetable_;
    bool routetableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateRoutetableReqBody_H_
