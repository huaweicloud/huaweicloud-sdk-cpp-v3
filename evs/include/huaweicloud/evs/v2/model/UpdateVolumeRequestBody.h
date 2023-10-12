
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/UpdateVolumeOption.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateVolumeRequestBody
    : public ModelBase
{
public:
    UpdateVolumeRequestBody();
    virtual ~UpdateVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateVolumeOption getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const UpdateVolumeOption& value);


protected:
    UpdateVolumeOption volume_;
    bool volumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequestBody_H_
