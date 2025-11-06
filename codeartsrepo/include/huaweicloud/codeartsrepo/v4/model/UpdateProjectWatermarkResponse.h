
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectWatermarkResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectWatermarkResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateProjectWatermarkResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateProjectWatermarkResponse();
    virtual ~UpdateProjectWatermarkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProjectWatermarkResponse members

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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectWatermarkResponse_H_
