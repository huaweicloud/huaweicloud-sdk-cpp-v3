
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateWatermarkTemplateResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateWatermarkTemplateResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateWatermarkTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateWatermarkTemplateResponse();
    virtual ~UpdateWatermarkTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateWatermarkTemplateResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateWatermarkTemplateResponse_H_
