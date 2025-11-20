
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListGlobalConfigRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListGlobalConfigRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListGlobalConfigRequest
    : public ModelBase
{
public:
    ListGlobalConfigRequest();
    virtual ~ListGlobalConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGlobalConfigRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGlobalConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ListGlobalConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListGlobalConfigRequest_H_
