
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerOcrResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerOcrResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerWordsBlockList.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerOcrResult
    : public ModelBase
{
public:
    SmartDocumentRecognizerOcrResult();
    virtual ~SmartDocumentRecognizerOcrResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerOcrResult members

    /// <summary>
    /// 图片朝向 
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

    std::vector<SmartDocumentRecognizerWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<SmartDocumentRecognizerWordsBlockList>& value);


protected:
    float direction_;
    bool directionIsSet_;
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<SmartDocumentRecognizerWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerOcrResult_H_
