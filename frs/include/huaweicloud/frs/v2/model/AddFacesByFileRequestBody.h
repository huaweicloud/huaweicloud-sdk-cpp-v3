
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesByFileRequestBody_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesByFileRequestBody_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_FRS_V2_EXPORT  AddFacesByFileRequestBody
    : public ModelBase
{
public:
    AddFacesByFileRequestBody();
    virtual ~AddFacesByFileRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddFacesByFileRequestBody members

    /// <summary>
    /// 本地图片文件，图片不能超过8MB，建议小于1MB。上传文件时，请求格式为multipart。
    /// </summary>

    HttpContent getImageFile() const;
    bool imageFileIsSet() const;
    void unsetimageFile();
    void setImageFile(const HttpContent& value);

    /// <summary>
    /// 用户指定的图片外部ID，与当前图像绑定。用户没提供，系统会生成一个。 该ID长度范围为1～36位，可以包含字母、数字、中划线或者下划线，不包含其他的特殊字符。
    /// </summary>

    std::string getExternalImageId() const;
    bool externalImageIdIsSet() const;
    void unsetexternalImageId();
    void setExternalImageId(const std::string& value);

    /// <summary>
    /// [根据用户自定义数据类型，填入相应的数值。创建faceset时定义该字段，Json字符串不校验重复性，参考[自定义字段](https://support.huaweicloud.com/api-face/face_02_0012.html)。](tag:hc) [根据用户自定义数据类型，填入相应的数值。创建faceset时定义该字段，Json字符串不校验重复性，参考[自定义字段](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0012.html)。](tag:hk)
    /// </summary>

    std::string getExternalFields() const;
    bool externalFieldsIsSet() const;
    void unsetexternalFields();
    void setExternalFields(const std::string& value);

    /// <summary>
    /// 是否将图片中的最大人脸添加至人脸库。可选值包括: • true: 传入的单张图片中如果包含多张人脸，则只将最大人脸添加到人脸库中。 • false: 默认为false。传入的单张图片中如果包含多张人脸，则将所有人脸添加至人脸库中。
    /// </summary>

    bool isSingle() const;
    bool singleIsSet() const;
    void unsetsingle();
    void setSingle(bool value);


protected:
    HttpContent imageFile_;
    bool imageFileIsSet_;
    std::string externalImageId_;
    bool externalImageIdIsSet_;
    std::string externalFields_;
    bool externalFieldsIsSet_;
    bool single_;
    bool singleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesByFileRequestBody_H_
