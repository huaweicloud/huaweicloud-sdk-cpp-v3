
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerLayoutBlock_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerLayoutBlock_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerLayoutBlock
    : public ModelBase
{
public:
    SmartDocumentRecognizerLayoutBlock();
    virtual ~SmartDocumentRecognizerLayoutBlock();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerLayoutBlock members

    /// <summary>
    /// 文字块的区域位置信息，列表形式，包含文字区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 文档区域类别，包含text、table、figure等类别。        
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 文档区域文字内容。对于表格与图像，不返回其中的文字内容。 
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 文字识别结果索引列表，表示ocr_result的words_block_list中哪些文本框位于该文档区域内。 
    /// </summary>

    std::vector<int32_t>& getWordsIds();
    bool wordsIdsIsSet() const;
    void unsetwordsIds();
    void setWordsIds(std::vector<int32_t> value);

    /// <summary>
    /// 仅当type为\&quot;table\&quot;且入参table为True时返回该字段，表示当前逻辑表格区域对应table_result中哪一项识别结果。 
    /// </summary>

    int32_t getTableId() const;
    bool tableIdIsSet() const;
    void unsettableId();
    void setTableId(int32_t value);

    /// <summary>
    /// 仅当type为\&quot;form\&quot;且入参form为True时返回该字段，表示当前有线表单区域对应form_result中哪一项识别结果。 
    /// </summary>

    int32_t getFormId() const;
    bool formIdIsSet() const;
    void unsetformId();
    void setFormId(int32_t value);


protected:
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string text_;
    bool textIsSet_;
    std::vector<int32_t> wordsIds_;
    bool wordsIdsIsSet_;
    int32_t tableId_;
    bool tableIdIsSet_;
    int32_t formId_;
    bool formIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerLayoutBlock_H_
