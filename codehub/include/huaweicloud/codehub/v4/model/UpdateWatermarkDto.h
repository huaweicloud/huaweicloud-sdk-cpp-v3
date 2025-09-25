
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateWatermarkDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateWatermarkDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateWatermarkDto
    : public ModelBase
{
public:
    UpdateWatermarkDto();
    virtual ~UpdateWatermarkDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWatermarkDto members

    /// <summary>
    /// **参数解释：** 水印开启状态。 - true，开启水印。 - false，关闭水印。 
    /// </summary>

    bool isWatermark() const;
    bool watermarkIsSet() const;
    void unsetwatermark();
    void setWatermark(bool value);


protected:
    bool watermark_;
    bool watermarkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateWatermarkDto_H_
