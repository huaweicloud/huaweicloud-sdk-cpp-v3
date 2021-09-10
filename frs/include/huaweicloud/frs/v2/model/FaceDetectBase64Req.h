
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceDetectBase64Req_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceDetectBase64Req_H_

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
class HUAWEICLOUD_FRS_V2_EXPORT  FaceDetectBase64Req
    : public ModelBase
{
public:
    FaceDetectBase64Req();
    virtual ~FaceDetectBase64Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FaceDetectBase64Req members

    /// <summary>
    /// 图像数据，Base64编码，要求： • Base64编码后大小不超过8MB，建议小于1MB。 • 图片为JPG/JPEG/BMP/PNG格式。
    /// </summary>

    std::string getImageBase64() const;
    bool imageBase64IsSet() const;
    void unsetimageBase64();
    void setImageBase64(const std::string& value);

    /// <summary>
    /// 是否返回人脸属性，希望获取的属性列表，多个属性间使用逗号（,）隔开。目前支持的属性有：   • 1：性别   • 2：年龄   • 4：装束（帽子、眼镜）   • 6：口罩   • 7：发型   • 8：胡须   • 9：肤色   • 10：民族   • 11：图片类型   • 12：质量   • 13：表情   • 21：人脸图片旋转角（顺时针偏转角度），支持0°、90°、180°和270°图片旋转
    /// </summary>

    std::string getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const std::string& value);


protected:
    std::string imageBase64_;
    bool imageBase64IsSet_;
    std::string attributes_;
    bool attributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceDetectBase64Req_H_
