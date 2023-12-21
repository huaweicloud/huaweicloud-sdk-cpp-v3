
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_ReqDataByIdCardImage_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_ReqDataByIdCardImage_H_


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
class HUAWEICLOUD_IVS_V2_EXPORT  ReqDataByIdCardImage
    : public ModelBase
{
public:
    ReqDataByIdCardImage();
    virtual ~ReqDataByIdCardImage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqDataByIdCardImage members

    /// <summary>
    /// 身份证人像面图像数据，使用base64编码，要求base64编码后大小不超过4M。图像各边的像素大小在300到4000之间，支持JPG格式。
    /// </summary>

    std::string getIdcardImage1() const;
    bool idcardImage1IsSet() const;
    void unsetidcardImage1();
    void setIdcardImage1(const std::string& value);

    /// <summary>
    /// 身份证国徽面图像数据，使用base64编码，要求base64编码后大小不超过4M。图像各边的像素大小在300到4000之间，支持JPG格式。
    /// </summary>

    std::string getIdcardImage2() const;
    bool idcardImage2IsSet() const;
    void unsetidcardImage2();
    void setIdcardImage2(const std::string& value);

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
    std::string idcardImage1_;
    bool idcardImage1IsSet_;
    std::string idcardImage2_;
    bool idcardImage2IsSet_;
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

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_ReqDataByIdCardImage_H_
