
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageRequestBody_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_OCR_V1_EXPORT  WebImageRequestBody
    : public ModelBase
{
public:
    WebImageRequestBody();
    virtual ~WebImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WebImageRequestBody members

    /// <summary>
    /// 与url二选一  图像数据，base64编码，要求base64编码后大小不超过10MB。图片最小边不小于15px，最长边不超过30000px，支持JPEG、JPG、PNG、BMP、TIFF、GIF、WEBP格式。  图片文件Base64编码字符串，点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 图片朝向检测开关，可选值包括： - true：检测图片朝向; - false：不检测图片朝向。  &gt; 说明： - 支持任意角度的图片朝向检测。未传入该参数时默认为false，即不检测图片朝向。 
    /// </summary>

    bool isDetectDirection() const;
    bool detectDirectionIsSet() const;
    void unsetdetectDirection();
    void setDetectDirection(bool value);

    /// <summary>
    /// 结构化数据提取参数列表，目前只支持联系人信息、图像宽高，其入参值分别为\&quot;contact_info\&quot;，\&quot;image_size\&quot;，若该字段为空列表或缺失该字段，默认不提取。 
    /// </summary>

    std::vector<std::string>& getExtractType();
    bool extractTypeIsSet() const;
    void unsetextractType();
    void setExtractType(const std::vector<std::string>& value);

    /// <summary>
    /// 为Boolean类型，若不传该字段，默认不检测切片字体，为True时，将检测切片的字体类型，并返回最相似的5种字体名称。 
    /// </summary>

    bool isDetectFont() const;
    bool detectFontIsSet() const;
    void unsetdetectFont();
    void setDetectFont(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool detectDirection_;
    bool detectDirectionIsSet_;
    std::vector<std::string> extractType_;
    bool extractTypeIsSet_;
    bool detectFont_;
    bool detectFontIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageRequestBody_H_
