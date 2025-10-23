
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTextResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTextResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/GeneralTextWordsBlockList.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  GeneralTextResult
    : public ModelBase
{
public:
    GeneralTextResult();
    virtual ~GeneralTextResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralTextResult members

    /// <summary>
    /// 图片朝向，仅当detect_direction为true时，该字段有效。返回图片逆时针旋转角度，值区间为[0， 359],保留四位小数。 当detect_direction为false时，该字段值为 -1。 
    /// </summary>

    float getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(float value);

    /// <summary>
    /// 识别文字块数目。 
    /// </summary>

    int32_t getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(int32_t value);

    /// <summary>
    /// 识别文字块列表，输出顺序从左到右，先上后下。 
    /// </summary>

    std::vector<GeneralTextWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<GeneralTextWordsBlockList>& value);

    /// <summary>
    /// 所有文字块拼接的识别结果，同一行的文字块使用“\\t”拼接，不同行的文字块使用“\\n”拼接。 当return_markdown_result为true时，返回该字段值，否则，不返回该字段。 
    /// </summary>

    std::string getMarkdownResult() const;
    bool markdownResultIsSet() const;
    void unsetmarkdownResult();
    void setMarkdownResult(const std::string& value);


protected:
    float direction_;
    bool directionIsSet_;
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<GeneralTextWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;
    std::string markdownResult_;
    bool markdownResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTextResult_H_
