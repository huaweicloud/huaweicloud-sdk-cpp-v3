
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/VolumeTransferSummary.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderAcceptVolumeTransferResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderAcceptVolumeTransferResponse();
    virtual ~CinderAcceptVolumeTransferResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderAcceptVolumeTransferResponse members

    /// <summary>
    /// 
    /// </summary>

    VolumeTransferSummary getTransfer() const;
    bool transferIsSet() const;
    void unsettransfer();
    void setTransfer(const VolumeTransferSummary& value);


protected:
    VolumeTransferSummary transfer_;
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

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferResponse_H_
