
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListUserResourcesRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListUserResourcesRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListUserResourcesRequest
    : public ModelBase
{
public:
    ListUserResourcesRequest();
    virtual ~ListUserResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserResourcesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUserResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<ListUserResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListUserResourcesRequest_H_
