
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageResponse_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/evs/model/Image.h"

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
class HUAWEICLOUD_EVS_EXPORT  CinderExportToImageResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderExportToImageResponse();
    virtual ~CinderExportToImageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderExportToImageResponse members

    /// <summary>
    /// 
    /// </summary>

    Image getOsVolumeUploadImage() const;
    bool osVolumeUploadImageIsSet() const;
    void unsetosVolumeUploadImage();
    void setOsVolumeUploadImage(const Image& value);


protected:
    Image osVolumeUploadImage_;
    bool osVolumeUploadImageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageResponse_H_
