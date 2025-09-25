
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupWatermarkResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupWatermarkResponse_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowGroupWatermarkResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGroupWatermarkResponse();
    virtual ~ShowGroupWatermarkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupWatermarkResponse members

    /// <summary>
    /// **参数解释：** 水印设置状态。 - true，开启水印。 - false，关闭水印。 
    /// </summary>

    bool isWatermark() const;
    bool watermarkIsSet() const;
    void unsetwatermark();
    void setWatermark(bool value);

    /// <summary>
    /// **参数解释：** 当前用户是否有权限更新水印设置。 - true，有权限更新。 - false，无权限更新。 
    /// </summary>

    bool isCanUpdate() const;
    bool canUpdateIsSet() const;
    void unsetcanUpdate();
    void setCanUpdate(bool value);


protected:
    bool watermark_;
    bool watermarkIsSet_;
    bool canUpdate_;
    bool canUpdateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupWatermarkResponse_H_
