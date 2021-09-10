
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MathInfo_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MathInfo_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/AnswerBlockList.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  MathInfo
    : public ModelBase
{
public:
    MathInfo();
    virtual ~MathInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MathInfo members

    /// <summary>
    /// 数学试卷返回结果，表示题号。 
    /// </summary>

    std::string getQuestionNumber() const;
    bool questionNumberIsSet() const;
    void unsetquestionNumber();
    void setQuestionNumber(const std::string& value);

    /// <summary>
    /// 数学试卷答案的文字块数目。 
    /// </summary>

    int32_t getAnswerBlockCount() const;
    bool answerBlockCountIsSet() const;
    void unsetanswerBlockCount();
    void setAnswerBlockCount(int32_t value);

    /// <summary>
    /// 数学试卷答案识别文字块列表，输出顺序从左到右，从上到下。 
    /// </summary>

    std::vector<AnswerBlockList>& getAnswerBlockList();
    bool answerBlockListIsSet() const;
    void unsetanswerBlockList();
    void setAnswerBlockList(const std::vector<AnswerBlockList>& value);


protected:
    std::string questionNumber_;
    bool questionNumberIsSet_;
    int32_t answerBlockCount_;
    bool answerBlockCountIsSet_;
    std::vector<AnswerBlockList> answerBlockList_;
    bool answerBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MathInfo_H_
