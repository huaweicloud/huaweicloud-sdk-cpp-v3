
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementRequestBody_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  FinancialStatementRequestBody
    : public ModelBase
{
public:
    FinancialStatementRequestBody();
    virtual ~FinancialStatementRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FinancialStatementRequestBody members

    /// <summary>
    /// 与url二选一。  图片的Base64编码，要求单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于15px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF格式。  图片文件Base64编码字符串，点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一。  单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于15px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF格式。 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 返回文本块坐标及单元格坐标信息，可选值包括： - true：返回文本块和单元格坐标; - false：不返回。  &gt; 说明： - 未传入该参数时默认为false，即不返回。 
    /// </summary>

    bool isReturnTextLocation() const;
    bool returnTextLocationIsSet() const;
    void unsetreturnTextLocation();
    void setReturnTextLocation(bool value);

    /// <summary>
    /// 返回字段识别置信度，小数点后四位。可选值包括： - true：返回字段置信度; - false：不返回。  &gt; 说明： - 未传入该参数时默认为false，即不返回字段置信度。 
    /// </summary>

    bool isReturnConfidence() const;
    bool returnConfidenceIsSet() const;
    void unsetreturnConfidence();
    void setReturnConfidence(bool value);

    /// <summary>
    /// 是否返回表格转换Microsoft Excel的base64编码字段。可选值包括： - true：返回’excel’字段，表示xlsx格式的表格识别结果的base64编码; - false：不返回。  &gt; 说明： - 对返回的Excel编码，可用Python函数 base64.b64decode解码后保存为xlsx文件。 
    /// </summary>

    bool isReturnExcel() const;
    bool returnExcelIsSet() const;
    void unsetreturnExcel();
    void setReturnExcel(bool value);

    /// <summary>
    /// 返回表格坐标，可选值包括： - true：返回表格坐标; - false：不返回。  &gt; 说明： - 未传入该参数时默认为false，即不返回。 
    /// </summary>

    bool isReturnTableLocation() const;
    bool returnTableLocationIsSet() const;
    void unsetreturnTableLocation();
    void setReturnTableLocation(bool value);

    /// <summary>
    /// 返回矫正后的图像大小，可选值包括： - true：返回矫正图像大小; - false：不返回。  &gt; 说明： - 未传入该参数时默认为false，即不返回。 
    /// </summary>

    bool isReturnImageSize() const;
    bool returnImageSizeIsSet() const;
    void unsetreturnImageSize();
    void setReturnImageSize(bool value);

    /// <summary>
    /// 透视变换矩阵，可选值包括： - true：返回透视变换矩阵; - false：不返回。  &gt; 说明： - 未传入该参数时默认为false，即不返回透视变换矩阵。 
    /// </summary>

    bool isReturnRectificationMatrix() const;
    bool returnRectificationMatrixIsSet() const;
    void unsetreturnRectificationMatrix();
    void setReturnRectificationMatrix(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool returnTextLocation_;
    bool returnTextLocationIsSet_;
    bool returnConfidence_;
    bool returnConfidenceIsSet_;
    bool returnExcel_;
    bool returnExcelIsSet_;
    bool returnTableLocation_;
    bool returnTableLocationIsSet_;
    bool returnImageSize_;
    bool returnImageSizeIsSet_;
    bool returnRectificationMatrix_;
    bool returnRectificationMatrixIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementRequestBody_H_
