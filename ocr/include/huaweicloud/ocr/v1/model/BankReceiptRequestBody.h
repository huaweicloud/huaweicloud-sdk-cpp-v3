
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptRequestBody_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  BankReceiptRequestBody
    : public ModelBase
{
public:
    BankReceiptRequestBody();
    virtual ~BankReceiptRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BankReceiptRequestBody members

    /// <summary>
    /// 该参数与url二选一。  图片的Base64编码，要求单个图片、PDF文件其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图像尺寸不小于15×15像素，最长边不超过8192像素，支持JPG/PNG/BMP/TIFF/PDF格式。 PDF以200dpi的分辨率转为图像进行识别，需符合上述图像尺寸规定。若PDF有多页，当前仅对第1页进行识别。 
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);

    /// <summary>
    /// 与data二选一。  单个图片、PDF文件其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图像尺寸不小于15×15像素，最长边不超过8192像素，支持JPG/PNG/BMP/TIFF/PDF格式。 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 指定PDF页码识别。传入该参数时，则识别指定页码的内容。如果不传该参数，则默认识别第1页，该参数仅在文件为PDF格式时有效。 
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 单朝向模式开关。可选值包括： - true：打开单朝向模式。 - false：关闭单朝向模式。  图片文字方向一致时，打开该开关可提升识别精度；图片文字方向不一致时，关闭该开关可支持多朝向文字识别。未传入该参数时默认为\&quot;true\&quot;，既默认图片中的文字方向为单朝向。 
    /// </summary>

    bool isSingleOrientationMode() const;
    bool singleOrientationModeIsSet() const;
    void unsetsingleOrientationMode();
    void setSingleOrientationMode(bool value);

    /// <summary>
    /// 是否打开印章擦除功能。可选值包括： - true：打开印章擦除功能。 - false：关闭印章擦除功能。  开启后，可提升印章遮挡区域的文字识别精度。 
    /// </summary>

    bool isEraseSeal() const;
    bool eraseSealIsSet() const;
    void unseteraseSeal();
    void setEraseSeal(bool value);


protected:
    std::string data_;
    bool dataIsSet_;
    std::string url_;
    bool urlIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    bool singleOrientationMode_;
    bool singleOrientationModeIsSet_;
    bool eraseSeal_;
    bool eraseSealIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptRequestBody_H_
