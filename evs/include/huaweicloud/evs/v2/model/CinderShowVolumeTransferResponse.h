
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/VolumeTransfer.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderShowVolumeTransferResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderShowVolumeTransferResponse();
    virtual ~CinderShowVolumeTransferResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderShowVolumeTransferResponse members

    /// <summary>
    /// 
    /// </summary>

    VolumeTransfer getTransfer() const;
    bool transferIsSet() const;
    void unsettransfer();
    void setTransfer(const VolumeTransfer& value);


protected:
    VolumeTransfer transfer_;
    bool transferIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferResponse_H_
