
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableWordsBlockList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableWordsBlockList_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/WordsListIem.h>
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
/// 子区域识别文字块列表，输出顺序从左到右，先上后下。
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  GeneralTableWordsBlockList
    : public ModelBase
{
public:
    GeneralTableWordsBlockList();
    virtual ~GeneralTableWordsBlockList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GeneralTableWordsBlockList members

    /// <summary>
    /// 文字块识别结果。 
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 字段的平均置信度，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);

    /// <summary>
    /// 文字块位置信息，列表形式，分别表示文字块4个顶点的x, y坐标;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 单元格内文字段列表。输出顺序从左到右，从上到下。仅当入参\&quot;return_text_location\&quot;为true时存在。 
    /// </summary>

    std::vector<WordsListIem>& getWordsList();
    bool wordsListIsSet() const;
    void unsetwordsList();
    void setWordsList(const std::vector<WordsListIem>& value);

    /// <summary>
    /// 文字块占用的行信息，编号从0开始，列表形式，数据类型为Integer。仅在表格区域内有效，即type字段为\&quot;table\&quot;时该字段有效。 
    /// </summary>

    std::vector<int32_t>& getRows();
    bool rowsIsSet() const;
    void unsetrows();
    void setRows(std::vector<int32_t> value);

    /// <summary>
    /// 文字块占用的列信息，编号从0开始，列表形式，数据类型为Integer。仅在表格区域内有效，即type字段为\&quot;table\&quot;时该字段有效。 
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
    float confidence_;
    bool confidenceIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    std::vector<WordsListIem> wordsList_;
    bool wordsListIsSet_;
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

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableWordsBlockList_H_
