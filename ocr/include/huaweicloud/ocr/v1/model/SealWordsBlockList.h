
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SealWordsBlockList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SealWordsBlockList_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  SealWordsBlockList
    : public ModelBase
{
public:
    SealWordsBlockList();
    virtual ~SealWordsBlockList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SealWordsBlockList members

    /// <summary>
    /// 印章文本块。
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 印章文本块的置信度。
    /// </summary>

    float getWordsConfidence() const;
    bool wordsConfidenceIsSet() const;
    void unsetwordsConfidence();
    void setWordsConfidence(float value);


protected:
    std::string words_;
    bool wordsIsSet_;
    float wordsConfidence_;
    bool wordsConfidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SealWordsBlockList_H_
