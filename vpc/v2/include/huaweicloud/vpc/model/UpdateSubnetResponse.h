
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetResponse_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/SubnetResult.h"

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
class HUAWEICLOUD_VPC_EXPORT  UpdateSubnetResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateSubnetResponse();
    virtual ~UpdateSubnetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSubnetResponse members

    /// <summary>
    /// 
    /// </summary>

    SubnetResult getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const SubnetResult& value);


protected:
    SubnetResult subnet_;
    bool subnetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetResponse_H_
