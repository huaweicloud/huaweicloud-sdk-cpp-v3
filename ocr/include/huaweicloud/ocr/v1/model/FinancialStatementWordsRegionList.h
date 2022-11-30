
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementWordsRegionList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementWordsRegionList_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/FinancialStatementWordsBlockList.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  FinancialStatementWordsRegionList
    : public ModelBase
{
public:
    FinancialStatementWordsRegionList();
    virtual ~FinancialStatementWordsRegionList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FinancialStatementWordsRegionList members

    /// <summary>
    /// 区域属性：文本或表格。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 区域内文字块数目。对文本区，文字块以文本字段为单位；对表格区，文字块以单元格内所有字段为单位。 
    /// </summary>

    float getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(float value);

    /// <summary>
    /// 表格位置信息，列表形式，分别表示表格4个顶点的x, y坐标;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getTableLocation();
    bool tableLocationIsSet() const;
    void unsettableLocation();
    void setTableLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 区域内文字块列表，输出顺序从左到右，从上到下。 
    /// </summary>

    std::vector<FinancialStatementWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<FinancialStatementWordsBlockList>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    float wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<std::vector<int32_t>> tableLocation_;
    bool tableLocationIsSet_;
    std::vector<FinancialStatementWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementWordsRegionList_H_
