
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGroupWatermarkResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGroupWatermarkResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateGroupWatermarkResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateGroupWatermarkResponse();
    virtual ~UpdateGroupWatermarkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGroupWatermarkResponse members

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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGroupWatermarkResponse_H_
