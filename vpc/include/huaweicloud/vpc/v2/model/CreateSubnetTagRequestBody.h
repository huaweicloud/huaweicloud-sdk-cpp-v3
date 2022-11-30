
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateSubnetTagRequestBody
    : public ModelBase
{
public:
    CreateSubnetTagRequestBody();
    virtual ~CreateSubnetTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSubnetTagRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResourceTag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const ResourceTag& value);


protected:
    ResourceTag tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequestBody_H_
