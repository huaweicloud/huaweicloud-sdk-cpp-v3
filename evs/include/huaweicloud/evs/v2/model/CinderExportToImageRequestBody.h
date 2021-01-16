
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageRequestBody_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CinderExportToImageOption.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderExportToImageRequestBody
    : public ModelBase
{
public:
    CinderExportToImageRequestBody();
    virtual ~CinderExportToImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderExportToImageRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CinderExportToImageOption getOsVolumeUploadImage() const;
    bool osVolumeUploadImageIsSet() const;
    void unsetosVolumeUploadImage();
    void setOsVolumeUploadImage(const CinderExportToImageOption& value);


protected:
    CinderExportToImageOption osVolumeUploadImage_;
    bool osVolumeUploadImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageRequestBody_H_
