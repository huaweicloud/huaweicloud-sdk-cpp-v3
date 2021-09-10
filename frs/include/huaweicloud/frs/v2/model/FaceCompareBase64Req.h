
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceCompareBase64Req_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceCompareBase64Req_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_FRS_V2_EXPORT  FaceCompareBase64Req
    : public ModelBase
{
public:
    FaceCompareBase64Req();
    virtual ~FaceCompareBase64Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FaceCompareBase64Req members

    /// <summary>
    /// 图像数据，Base64编码，要求： • Base64编码后大小不超过8MB，建议小于1MB。 • 图片为JPG/JPEG/BMP/PNG格式。
    /// </summary>

    std::string getImage2Base64() const;
    bool image2Base64IsSet() const;
    void unsetimage2Base64();
    void setImage2Base64(const std::string& value);

    /// <summary>
    /// 图像数据，Base64编码，要求： • Base64编码后大小不超过8MB，建议小于1MB。 • 图片为JPG/JPEG/BMP/PNG格式。
    /// </summary>

    std::string getImage1Base64() const;
    bool image1Base64IsSet() const;
    void unsetimage1Base64();
    void setImage1Base64(const std::string& value);


protected:
    std::string image2Base64_;
    bool image2Base64IsSet_;
    std::string image1Base64_;
    bool image1Base64IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceCompareBase64Req_H_
