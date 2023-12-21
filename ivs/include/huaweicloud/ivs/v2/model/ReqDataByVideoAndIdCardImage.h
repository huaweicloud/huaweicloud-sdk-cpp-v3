
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_ReqDataByVideoAndIdCardImage_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_ReqDataByVideoAndIdCardImage_H_


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
class HUAWEICLOUD_IVS_V2_EXPORT  ReqDataByVideoAndIdCardImage
    : public ModelBase
{
public:
    ReqDataByVideoAndIdCardImage();
    virtual ~ReqDataByVideoAndIdCardImage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqDataByVideoAndIdCardImage members

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
    /// 现场拍摄人像视频数据，使用base64编码，要求base64编码后大小不超过10M。
    /// </summary>

    std::string getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const std::string& value);

    /// <summary>
    /// 动作代码顺序列表，英文逗号（,）分隔。建议单动作，目前支持的动作有： • 1：左摇头 • 2：右摇头 • 3：点头 • 4：嘴部动作
    /// </summary>

    std::string getActions() const;
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::string& value);

    /// <summary>
    /// 该参数为点头动作幅度的判断门限，取值范围：[1,90]，默认为10，单位为度。该值设置越大，则越难判断为点头。
    /// </summary>

    double getNodThreshold() const;
    bool nodThresholdIsSet() const;
    void unsetnodThreshold();
    void setNodThreshold(double value);

    /// <summary>
    /// 响应参数similarity是否详细显示，默认为false。 - true表示响应中的similarity为0~1000的小数。 - false表示响应中的similarity为0~100的整数。
    /// </summary>

    bool isDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(bool value);


protected:
    std::string idcardImage1_;
    bool idcardImage1IsSet_;
    std::string idcardImage2_;
    bool idcardImage2IsSet_;
    std::string video_;
    bool videoIsSet_;
    std::string actions_;
    bool actionsIsSet_;
    double nodThreshold_;
    bool nodThresholdIsSet_;
    bool detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_ReqDataByVideoAndIdCardImage_H_
