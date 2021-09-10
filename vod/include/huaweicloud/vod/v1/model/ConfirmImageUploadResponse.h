
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ConfirmImageUploadResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ConfirmImageUploadResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ConfirmImageUploadResponse
    : public ModelBase, public HttpResponse
{
public:
    ConfirmImageUploadResponse();
    virtual ~ConfirmImageUploadResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ConfirmImageUploadResponse members

    /// <summary>
    /// 水印配置模板id&lt;br/&gt; 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 水印图片的下载url&lt;br/&gt; 
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ConfirmImageUploadResponse_H_
