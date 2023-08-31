
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerRequestBody_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
    /// 与url二选一。图片或PDF格式，base64编码，要求base64编码后大小不超过10M。 图像尺寸不小于15×15像素，最长边不超过8192像素，支持JPG/PNG/BMP/TIFF格式。 PDF以144dpi的分辨率转为图像进行文档解析，需符合上述图像尺寸规定。若PDF有多页，当前仅对第1页进行识别。 
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);

    /// <summary>
    /// 与data二选一。 图片或PDF的URL路径，目前仅支持华为云上OBS提供的匿名公开授权访问的URL以及公网URL。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

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


protected:
    std::string data_;
    bool dataIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool kv_;
    bool kvIsSet_;
    bool table_;
    bool tableIsSet_;
    bool layout_;
    bool layoutIsSet_;
    bool returnExcel_;
    bool returnExcelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerRequestBody_H_
