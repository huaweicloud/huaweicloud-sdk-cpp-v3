
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowAvailableUpdatesRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowAvailableUpdatesRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowAvailableUpdatesRequest
    : public ModelBase
{
public:
    ShowAvailableUpdatesRequest();
    virtual ~ShowAvailableUpdatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAvailableUpdatesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAvailableUpdatesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAvailableUpdatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowAvailableUpdatesRequest_H_
