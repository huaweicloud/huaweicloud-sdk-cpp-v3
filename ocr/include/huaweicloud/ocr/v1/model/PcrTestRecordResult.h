
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/PcrTestRecordWordsBlockList.h>
#include <string>
#include <huaweicloud/ocr/v1/model/PcrTestRecordConfidence.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  PcrTestRecordResult
    : public ModelBase
{
public:
    PcrTestRecordResult();
    virtual ~PcrTestRecordResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PcrTestRecordResult members

    /// <summary>
    /// 姓名 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 核酸检测采样时间 
    /// </summary>

    std::string getSamplingTime() const;
    bool samplingTimeIsSet() const;
    void unsetsamplingTime();
    void setSamplingTime(const std::string& value);

    /// <summary>
    /// 核酸检测结果更新时间 
    /// </summary>

    std::string getTestTime() const;
    bool testTimeIsSet() const;
    void unsettestTime();
    void setTestTime(const std::string& value);

    /// <summary>
    /// 核酸检测结果，可选值包括：  - \&quot;positive\&quot;,即阳性  - \&quot;negative\&quot;,即阴性  - \&quot;unknown\&quot;,未知 
    /// </summary>

    std::string getTestResult() const;
    bool testResultIsSet() const;
    void unsettestResult();
    void setTestResult(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PcrTestRecordConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const PcrTestRecordConfidence& value);

    /// <summary>
    /// 代表检测识别出来的文字块数目。 
    /// </summary>

    int32_t getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(int32_t value);

    /// <summary>
    /// 识别文字块列表，输出顺序从左到右，从上到下。 
    /// </summary>

    std::vector<PcrTestRecordWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<PcrTestRecordWordsBlockList>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string samplingTime_;
    bool samplingTimeIsSet_;
    std::string testTime_;
    bool testTimeIsSet_;
    std::string testResult_;
    bool testResultIsSet_;
    PcrTestRecordConfidence confidence_;
    bool confidenceIsSet_;
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<PcrTestRecordWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordResult_H_
