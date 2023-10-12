
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesUrlReq_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesUrlReq_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_FRS_V2_EXPORT  AddFacesUrlReq
    : public ModelBase
{
public:
    AddFacesUrlReq();
    virtual ~AddFacesUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddFacesUrlReq members

    /// <summary>
    /// [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/api-face/face_02_0006.html)。](tag:hc) [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0006.html)。](tag:hk)
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// 根据用户自定义数据类型，填入相应的数值。 创建faceset时定义该字段，Json字符串不校验重复性，参考[[自定义字段](https://support.huaweicloud.com/api-face/face_02_0012.html)。](tag:hc)[[自定义字段](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0012.html)。](tag:hk)
    /// </summary>

    Object getExternalFields() const;
    bool externalFieldsIsSet() const;
    void unsetexternalFields();
    void setExternalFields(const Object& value);

    /// <summary>
    /// 用户指定的图片外部ID，与当前图像绑定。用户没提供，系统会生成一个。 该ID长度范围为1～36位，可以包含字母、数字、中划线或者下划线，不包含其他的特殊字符。
    /// </summary>

    std::string getExternalImageId() const;
    bool externalImageIdIsSet() const;
    void unsetexternalImageId();
    void setExternalImageId(const std::string& value);

    /// <summary>
    /// 是否将图片中的最大人脸添加至人脸库。可选值包括: • true: 传入的单张图片中如果包含多张人脸，则只将最大人脸添加到人脸库中。 • false: 默认为false。传入的单张图片中如果包含多张人脸，则将所有人脸添加至人脸库中。
    /// </summary>

    bool isSingle() const;
    bool singleIsSet() const;
    void unsetsingle();
    void setSingle(bool value);


protected:
    std::string imageUrl_;
    bool imageUrlIsSet_;
    Object externalFields_;
    bool externalFieldsIsSet_;
    std::string externalImageId_;
    bool externalImageIdIsSet_;
    bool single_;
    bool singleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesUrlReq_H_
