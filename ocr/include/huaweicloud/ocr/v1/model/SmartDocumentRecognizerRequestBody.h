
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerRequestBody_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerRequestBody
    : public ModelBase
{
public:
    SmartDocumentRecognizerRequestBody();
    virtual ~SmartDocumentRecognizerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerRequestBody members

    /// <summary>
    /// 与url二选一。 图片的Base64编码，要求单个图片、PDF文件其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。  图像尺寸不小于15×15像素，最长边不超过30000像素，支持JPG/PNG/BMP/TIFF格式。 PDF以144dpi的分辨率转为图像进行文档解析，需符合上述图像尺寸规定。若PDF有多页，当前仅对第1页进行识别。 
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);

    /// <summary>
    /// 与data二选一。  单个图片、PDF文件其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图像尺寸不小于15×15像素，最长边不超过30000像素，支持JPG/PNG/BMP/TIFF格式。 PDF以144dpi的分辨率转为图像进行文档解析，需符合上述图像尺寸规定。若PDF有多页，当前仅对第1页进行识别。 图片或PDF的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 单朝向模式开关。可选值包括： - true：打开单朝向模式。 - false：关闭单朝向模式。  图片文字方向一致时，打开该开关可提升识别精度；图片文字方向不一致时，关闭该开关可支持多朝向文字识别。未传入该参数时默认为\&quot;true\&quot;，既默认图片中的文字方向为单朝向。 
    /// </summary>

    bool isSingleOrientationMode() const;
    bool singleOrientationModeIsSet() const;
    void unsetsingleOrientationMode();
    void setSingleOrientationMode(bool value);

    /// <summary>
    /// 语种选择，未传入该参数时默认为中英文识别模式。参考[华为云通用文字支持语种](https://support.huaweicloud.com/api-ocr/ocr_03_0042.html)。 
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 是否进行键值对（key-value）提取。若是，结果会以“kv_result”这一关键字返回。 
    /// </summary>

    bool isKv() const;
    bool kvIsSet() const;
    void unsetkv();
    void setKv(bool value);

    /// <summary>
    /// 是否进行表格识别。此处表格特指逻辑表格，通常具有M行N列的形式，且第一行或第一列为表头。若是，结果会以“table_result”这一关键字返回。 
    /// </summary>

    bool isTable() const;
    bool tableIsSet() const;
    void unsettable();
    void setTable(bool value);

    /// <summary>
    /// 是否进行版面分析。若是，结果会以“layout_result”这一关键字返回。 
    /// </summary>

    bool isLayout() const;
    bool layoutIsSet() const;
    void unsetlayout();
    void setLayout(bool value);

    /// <summary>
    /// 仅当table为True时有效。是否返回表格转换Microsoft Excel的Base64编码字段。 
    /// </summary>

    bool isReturnExcel() const;
    bool returnExcelIsSet() const;
    void unsetreturnExcel();
    void setReturnExcel(bool value);

    /// <summary>
    /// 是否进行有线表单识别。有线表单指关键信息以有线单元格形式进行呈现，例如户口本、机动车发票等。若是，结果会以\&quot;form_result\&quot;这一关键字返回。 
    /// </summary>

    bool isForm() const;
    bool formIsSet() const;
    void unsetform();
    void setForm(bool value);

    /// <summary>
    /// 是否进行公式识别，识别结果为latex序列。若是，结果会以“formula_result”这一关键字返回。  - 开启公式识别后会降低响应速度。 - 当前仅支持3行以内公式识别，不支持3行以上的多行公式。 
    /// </summary>

    bool isFormula() const;
    bool formulaIsSet() const;
    void unsetformula();
    void setFormula(bool value);

    /// <summary>
    /// 是否对文档中的图片进行二次版面分析。若是，结果会在“layout_result”中返回，并带有“image_layout”的关键字。 
    /// </summary>

    bool isImageLayout() const;
    bool imageLayoutIsSet() const;
    void unsetimageLayout();
    void setImageLayout(bool value);

    /// <summary>
    /// 需要传入字典的json序列化后字符串，用于对kv_result中的特定key值进行归一化映射。例如，kv_result中包含{\&quot;名称\&quot;：\&quot;小明\&quot;}的键值对，若传入{\&quot;名称\&quot;：\&quot;姓名\&quot;}的kv_map，则返回结果为{“姓名”：“小明”}。  &gt; 参数传入示例： - \&quot;kv_map\&quot;:\&quot;{\\\&quot;名称\\\&quot;:\\\&quot;姓名\\\&quot;}\&quot; 
    /// </summary>

    std::string getKvMap() const;
    bool kvMapIsSet() const;
    void unsetkvMap();
    void setKvMap(const std::string& value);

    /// <summary>
    /// 是否打开印章擦除功能。可选值包括： - true：打开印章擦除功能。 - false：关闭印章擦除功能。  开启后，可提升印章遮挡区域的文字识别精度。 
    /// </summary>

    bool isEraseSeal() const;
    bool eraseSealIsSet() const;
    void unseteraseSeal();
    void setEraseSeal(bool value);

    /// <summary>
    /// 指定PDF页码识别。传入该参数时，则识别指定页码的内容。如果不传该参数，则默认识别第1页。 
    /// </summary>

    int32_t getPdfPageNumber() const;
    bool pdfPageNumberIsSet() const;
    void unsetpdfPageNumber();
    void setPdfPageNumber(int32_t value);

    /// <summary>
    /// 是否返回单字符信息。开启后，单字符识别结果将会在“ocr_result”中的“char_list”返回单字符信息。如果不传入该参数，则默认不返回单字符信息。 
    /// </summary>

    bool isCharacterMode() const;
    bool characterModeIsSet() const;
    void unsetcharacterMode();
    void setCharacterMode(bool value);


protected:
    std::string data_;
    bool dataIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool singleOrientationMode_;
    bool singleOrientationModeIsSet_;
    std::string language_;
    bool languageIsSet_;
    bool kv_;
    bool kvIsSet_;
    bool table_;
    bool tableIsSet_;
    bool layout_;
    bool layoutIsSet_;
    bool returnExcel_;
    bool returnExcelIsSet_;
    bool form_;
    bool formIsSet_;
    bool formula_;
    bool formulaIsSet_;
    bool imageLayout_;
    bool imageLayoutIsSet_;
    std::string kvMap_;
    bool kvMapIsSet_;
    bool eraseSeal_;
    bool eraseSealIsSet_;
    int32_t pdfPageNumber_;
    bool pdfPageNumberIsSet_;
    bool characterMode_;
    bool characterModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerRequestBody_H_
