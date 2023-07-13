
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderDeleteVolumeTransferResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderDeleteVolumeTransferResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderDeleteVolumeTransferResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderDeleteVolumeTransferResponse();
    virtual ~CinderDeleteVolumeTransferResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderDeleteVolumeTransferResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderDeleteVolumeTransferResponse_H_
