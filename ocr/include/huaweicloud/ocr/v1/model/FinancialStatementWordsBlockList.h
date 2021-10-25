
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementWordsBlockList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementWordsBlockList_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  FinancialStatementWordsBlockList
    : public ModelBase
{
public:
    FinancialStatementWordsBlockList();
    virtual ~FinancialStatementWordsBlockList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FinancialStatementWordsBlockList members

    /// <summary>
    /// 文字块内容。当入参\&quot;return_text_location\&quot;为false时，每个单元格返回一个文本值，不同行文本由换行符 \&quot;\\n\&quot; 拼接。 
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 文字块位置信息，列表形式，分别表示文字块4个顶点的x, y坐标;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 文字块识别结果置信度信息，置信度越大，表示本次识别的对应字段的可靠性越大，在统计意义上，置信度越大正确率越高。注：置信度由算法给出，其不直接等价于对应字段的精度。 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);

    /// <summary>
    /// 单元格行信息，列表形式。多个连续值表示单元格垮多行。 
    /// </summary>

    std::vector<int32_t>& getRows();
    bool rowsIsSet() const;
    void unsetrows();
    void setRows(std::vector<int32_t> value);

    /// <summary>
    /// 单元格列信息，列表形式。多个连续值表示单元格垮多列。 
    /// </summary>

    std::vector<int32_t>& getColumns();
    bool columnsIsSet() const;
    void unsetcolumns();
    void setColumns(std::vector<int32_t> value);

    /// <summary>
    /// 单元格位置信息，列表形式，分别表示单元格4个顶点的x, y坐标;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getCellLocation();
    bool cellLocationIsSet() const;
    void unsetcellLocation();
    void setCellLocation(const std::vector<std::vector<int32_t>>& value);


protected:
    std::string words_;
    bool wordsIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    float confidence_;
    bool confidenceIsSet_;
    std::vector<int32_t> rows_;
    bool rowsIsSet_;
    std::vector<int32_t> columns_;
    bool columnsIsSet_;
    std::vector<std::vector<int32_t>> cellLocation_;
    bool cellLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementWordsBlockList_H_
