
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardReqDataByNameAndId_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardReqDataByNameAndId_H_


#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  StandardReqDataByNameAndId
    : public ModelBase
{
public:
    StandardReqDataByNameAndId();
    virtual ~StandardReqDataByNameAndId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StandardReqDataByNameAndId members

    /// <summary>
    /// 被验证人的姓名。
    /// </summary>

    std::string getVerificationName() const;
    bool verificationNameIsSet() const;
    void unsetverificationName();
    void setVerificationName(const std::string& value);

    /// <summary>
    /// 被验证人的身份证号码。
    /// </summary>

    std::string getVerificationId() const;
    bool verificationIdIsSet() const;
    void unsetverificationId();
    void setVerificationId(const std::string& value);

    /// <summary>
    /// 现场人像图像数据，使用base64编码，要求base64编码后大小不超过4M。图像各边的像素大小在300到4000之间，支持JPG格式。
    /// </summary>

    std::string getFaceImage() const;
    bool faceImageIsSet() const;
    void unsetfaceImage();
    void setFaceImage(const std::string& value);

    /// <summary>
    /// 响应参数similarity是否详细显示，默认为false。 - true表示响应中的similarity为0~1000的小数。 - false表示响应中的similarity为0~100的整数。
    /// </summary>

    bool isDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(bool value);

    /// <summary>
    /// 是否允许对入参face_image进行人脸检测及图片裁剪，默认为true，表示允许。
    /// </summary>

    bool isCrop() const;
    bool cropIsSet() const;
    void unsetcrop();
    void setCrop(bool value);


protected:
    std::string verificationName_;
    bool verificationNameIsSet_;
    std::string verificationId_;
    bool verificationIdIsSet_;
    std::string faceImage_;
    bool faceImageIsSet_;
    bool detail_;
    bool detailIsSet_;
    bool crop_;
    bool cropIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardReqDataByNameAndId_H_
