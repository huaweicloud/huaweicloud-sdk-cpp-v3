
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesRequest_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"


namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  CinderListVolumeTypesRequest
    : public ModelBase
{
public:
    CinderListVolumeTypesRequest();
    virtual ~CinderListVolumeTypesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListVolumeTypesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderListVolumeTypesRequest& dereference_from_shared_ptr(std::shared_ptr<CinderListVolumeTypesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesRequest_H_
