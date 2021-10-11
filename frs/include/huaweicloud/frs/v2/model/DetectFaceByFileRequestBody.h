
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByFileRequestBody_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByFileRequestBody_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_FRS_V2_EXPORT  DetectFaceByFileRequestBody
    : public ModelBase
{
public:
    DetectFaceByFileRequestBody();
    virtual ~DetectFaceByFileRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectFaceByFileRequestBody members

    /// <summary>
    /// 本地图片文件，图片不能超过8MB。上传文件时，请求格式为multipart。
    /// </summary>

    HttpContent getImageFile() const;
    bool imageFileIsSet() const;
    void unsetimageFile();
    void setImageFile(const HttpContent& value);

    /// <summary>
    /// 是否返回人脸属性，希望获取的属性列表，多个属性间使用逗号（,）隔开。目前支持的属性有： • 2：年龄 • 4：装束（帽子、眼镜） • 6：口罩 • 7：发型 • 8：胡须 • 11：图片类型 • 12：质量 • 13：表情 • 21：人脸图片旋转角（顺时针偏转角度），支持0°、90°、180°和270°图片旋转
    /// </summary>

    std::string getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const std::string& value);


protected:
    HttpContent imageFile_;
    bool imageFileIsSet_;
    std::string attributes_;
    bool attributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByFileRequestBody_H_
