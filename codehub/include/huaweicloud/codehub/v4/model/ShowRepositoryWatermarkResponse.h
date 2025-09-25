
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryWatermarkResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryWatermarkResponse_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowRepositoryWatermarkResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryWatermarkResponse();
    virtual ~ShowRepositoryWatermarkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryWatermarkResponse members

    /// <summary>
    /// **参数解释：** 水印设置状态。 - true，开启水印。 - false，关闭水印。 
    /// </summary>

    bool isWatermark() const;
    bool watermarkIsSet() const;
    void unsetwatermark();
    void setWatermark(bool value);

    /// <summary>
    /// **参数解释：** 仓库水印状态。 - true，开启水印。 - false，关闭水印。 
    /// </summary>

    bool isViewWatermark() const;
    bool viewWatermarkIsSet() const;
    void unsetviewWatermark();
    void setViewWatermark(bool value);


protected:
    bool watermark_;
    bool watermarkIsSet_;
    bool viewWatermark_;
    bool viewWatermarkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryWatermarkResponse_H_
