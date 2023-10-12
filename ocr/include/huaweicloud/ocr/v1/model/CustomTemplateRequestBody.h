
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_CustomTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_CustomTemplateRequestBody_H_


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
/// 自定义模板OCR请求体
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  CustomTemplateRequestBody
    : public ModelBase
{
public:
    CustomTemplateRequestBody();
    virtual ~CustomTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomTemplateRequestBody members

    /// <summary>
    /// 与url二选一  图像数据，base64编码，要求base64编码后大小不超过10MB。图片最小边不小于15px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF、GIF、WEBP格式。  图片文件Base64编码字符串，点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/intl/zh-cn/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 该参数与classifier_id二选一。 模板id，如果传入，启用单模板识别模式。 
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 该参数与template_id二选一。 分类器id，如果传入，启用多模板识别模式。 
    /// </summary>

    std::string getClassifierId() const;
    bool classifierIdIsSet() const;
    void unsetclassifierId();
    void setClassifierId(const std::string& value);

    /// <summary>
    /// 该参数与classifier_id参数配合使用，可选值如下所示： - true：仅返回模板分类结果 - false：正常返回多模板识别结果 &gt; 说明： - 如果未传入该参数时默认为false，即正常返回多模板识别结果。 
    /// </summary>

    bool isClassifierMode() const;
    bool classifierModeIsSet() const;
    void unsetclassifierMode();
    void setClassifierMode(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string classifierId_;
    bool classifierIdIsSet_;
    bool classifierMode_;
    bool classifierModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_CustomTemplateRequestBody_H_
