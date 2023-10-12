
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_UpdateFaceReq_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_UpdateFaceReq_H_


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
class HUAWEICLOUD_FRS_V2_EXPORT  UpdateFaceReq
    : public ModelBase
{
public:
    UpdateFaceReq();
    virtual ~UpdateFaceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFaceReq members

    /// <summary>
    /// Json字符串不校验重复性，自定义字段的key值长度范围为[1,36]，string类型的value长度范围为[1,256]，具体参见[[自定义字段](https://support.huaweicloud.com/api-face/face_02_0012.html)](tag:hc)。[[自定义字段](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0012.html)](tag:hk)。这里是待修改的参数，external_image_id和external_fields至少选一个。
    /// </summary>

    Object getExternalFields() const;
    bool externalFieldsIsSet() const;
    void unsetexternalFields();
    void setExternalFields(const Object& value);

    /// <summary>
    /// 用户指定的图片外部ID，与当前图像绑定。用户没提供，系统会生成一个。该ID长度范围为1～36位，可以包含字母、数字、中划线或者下划线，不包含其他的特殊字符。 这里是待修改的参数，external_image_id和external_fields至少选一个。
    /// </summary>

    std::string getExternalImageId() const;
    bool externalImageIdIsSet() const;
    void unsetexternalImageId();
    void setExternalImageId(const std::string& value);

    /// <summary>
    /// 人脸库ID，由系统内部生成的唯一ID。
    /// </summary>

    std::string getFaceId() const;
    bool faceIdIsSet() const;
    void unsetfaceId();
    void setFaceId(const std::string& value);


protected:
    Object externalFields_;
    bool externalFieldsIsSet_;
    std::string externalImageId_;
    bool externalImageIdIsSet_;
    std::string faceId_;
    bool faceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_UpdateFaceReq_H_
