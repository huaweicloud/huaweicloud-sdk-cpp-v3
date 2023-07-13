
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_VPC_V2_EXPORT  ListSubnetTagsRequest
    : public ModelBase
{
public:
    ListSubnetTagsRequest();
    virtual ~ListSubnetTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSubnetTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSubnetTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSubnetTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsRequest_H_
