
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipTagsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipTagsRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  ListPublicipTagsRequest
    : public ModelBase
{
public:
    ListPublicipTagsRequest();
    virtual ~ListPublicipTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicipTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPublicipTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPublicipTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipTagsRequest_H_
