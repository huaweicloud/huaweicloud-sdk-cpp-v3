
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateWatermarkTemplateResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateWatermarkTemplateResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateWatermarkTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateWatermarkTemplateResponse();
    virtual ~CreateWatermarkTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWatermarkTemplateResponse members

    /// <summary>
    /// 水印配置模板id&lt;br/&gt; 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 水印图片上传地址&lt;br/&gt; 
    /// </summary>

    std::string getUploadUrl() const;
    bool uploadUrlIsSet() const;
    void unsetuploadUrl();
    void setUploadUrl(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string uploadUrl_;
    bool uploadUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateWatermarkTemplateResponse_H_
