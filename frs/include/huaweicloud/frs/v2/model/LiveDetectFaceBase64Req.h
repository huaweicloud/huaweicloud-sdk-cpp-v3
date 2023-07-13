
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectFaceBase64Req_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectFaceBase64Req_H_

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
class HUAWEICLOUD_FRS_V2_EXPORT  LiveDetectFaceBase64Req
    : public ModelBase
{
public:
    LiveDetectFaceBase64Req();
    virtual ~LiveDetectFaceBase64Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LiveDetectFaceBase64Req members

    /// <summary>
    /// 图像数据，Base64编码，要求： • Base64编码后大小不超过8MB。 • 图片编码格式： JPG、PNG、JPEG、BMP格式的图片。
    /// </summary>

    std::string getImageBase64() const;
    bool imageBase64IsSet() const;
    void unsetimageBase64();
    void setImageBase64(const std::string& value);


protected:
    std::string imageBase64_;
    bool imageBase64IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectFaceBase64Req_H_
