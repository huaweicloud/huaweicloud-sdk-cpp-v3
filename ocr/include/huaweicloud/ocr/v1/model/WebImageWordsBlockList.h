
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageWordsBlockList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageWordsBlockList_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  WebImageWordsBlockList
    : public ModelBase
{
public:
    WebImageWordsBlockList();
    virtual ~WebImageWordsBlockList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WebImageWordsBlockList members

    /// <summary>
    /// 文字块识别结果。 
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);

    /// <summary>
    /// 文字块的区域位置信息，列表形式，包含文字区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 文字块所属字体类型，列表形式，表示与文字块的文字最接近的字体类型。 
    /// </summary>

    std::vector<std::string>& getFontList();
    bool fontListIsSet() const;
    void unsetfontList();
    void setFontList(const std::vector<std::string>& value);

    /// <summary>
    /// 文字块所属字体类型的概率，列表形式，与font_list一一对应，表示文字块的文字属于某种字体类型的概率。 
    /// </summary>

    std::vector<float>& getFontScores();
    bool fontScoresIsSet() const;
    void unsetfontScores();
    void setFontScores(std::vector<float> value);


protected:
    std::string words_;
    bool wordsIsSet_;
    float confidence_;
    bool confidenceIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    std::vector<std::string> fontList_;
    bool fontListIsSet_;
    std::vector<float> fontScores_;
    bool fontScoresIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageWordsBlockList_H_
