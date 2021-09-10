
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByFileRequestBody_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByFileRequestBody_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveFaceByFileRequestBody
    : public ModelBase
{
public:
    DetectLiveFaceByFileRequestBody();
    virtual ~DetectLiveFaceByFileRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectLiveFaceByFileRequestBody members

    /// <summary>
    /// 本地图片文件。上传文件时，请求格式为multipart。
    /// </summary>

    HttpContent getImageFile() const;
    bool imageFileIsSet() const;
    void unsetimageFile();
    void setImageFile(const HttpContent& value);


protected:
    HttpContent imageFile_;
    bool imageFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByFileRequestBody_H_
