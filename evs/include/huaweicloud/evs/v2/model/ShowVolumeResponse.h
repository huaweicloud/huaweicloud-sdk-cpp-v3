
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVolumeResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVolumeResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/VolumeDetail.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  ShowVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVolumeResponse();
    virtual ~ShowVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVolumeResponse members

    /// <summary>
    /// 
    /// </summary>

    VolumeDetail getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const VolumeDetail& value);


protected:
    VolumeDetail volume_;
    bool volumeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVolumeResponse_H_
