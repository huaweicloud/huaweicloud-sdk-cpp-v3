
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequestBody_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CreateVolumeTransferOption.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderCreateVolumeTransferRequestBody
    : public ModelBase
{
public:
    CinderCreateVolumeTransferRequestBody();
    virtual ~CinderCreateVolumeTransferRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderCreateVolumeTransferRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateVolumeTransferOption getTransfer() const;
    bool transferIsSet() const;
    void unsettransfer();
    void setTransfer(const CreateVolumeTransferOption& value);


protected:
    CreateVolumeTransferOption transfer_;
    bool transferIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequestBody_H_
