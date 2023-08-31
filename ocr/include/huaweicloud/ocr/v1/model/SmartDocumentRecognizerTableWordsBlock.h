
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableWordsBlock_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableWordsBlock_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerTableWordsBlock
    : public ModelBase
{
public:
    SmartDocumentRecognizerTableWordsBlock();
    virtual ~SmartDocumentRecognizerTableWordsBlock();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SmartDocumentRecognizerTableWordsBlock members

    /// <summary>
    /// 单元格内的文字识别结果。 
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 文字块占用的行信息，编号从0开始，列表形式，数据类型为Integer。 
    /// </summary>

    std::vector<int32_t>& getRows();
    bool rowsIsSet() const;
    void unsetrows();
    void setRows(std::vector<int32_t> value);

    /// <summary>
    /// 文字块占用的列信息，编号从0开始，列表形式，数据类型为Integer。 
    /// </summary>

    std::vector<int32_t>& getColumns();
    bool columnsIsSet() const;
    void unsetcolumns();
    void setColumns(std::vector<int32_t> value);


protected:
    std::string words_;
    bool wordsIsSet_;
    std::vector<int32_t> rows_;
    bool rowsIsSet_;
    std::vector<int32_t> columns_;
    bool columnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableWordsBlock_H_
