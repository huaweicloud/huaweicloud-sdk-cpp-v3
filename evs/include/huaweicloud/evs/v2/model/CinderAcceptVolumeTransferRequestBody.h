
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequestBody_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CinderAcceptVolumeTransferOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderAcceptVolumeTransferRequestBody
    : public ModelBase
{
public:
    CinderAcceptVolumeTransferRequestBody();
    virtual ~CinderAcceptVolumeTransferRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderAcceptVolumeTransferRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CinderAcceptVolumeTransferOption getAccept() const;
    bool acceptIsSet() const;
    void unsetaccept();
    void setAccept(const CinderAcceptVolumeTransferOption& value);


protected:
    CinderAcceptVolumeTransferOption accept_;
    bool acceptIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequestBody_H_
