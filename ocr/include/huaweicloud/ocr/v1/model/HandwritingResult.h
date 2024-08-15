
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_HandwritingResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_HandwritingResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/HandwritingWordsBlockList.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  HandwritingResult
    : public ModelBase
{
public:
    HandwritingResult();
    virtual ~HandwritingResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HandwritingResult members

    /// <summary>
    /// 代表检测识别出来的文字块数目。 \&quot;segment_digit\&quot; 和\&quot;segment\&quot;默认为1。 
    /// </summary>

    int32_t getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(int32_t value);

    /// <summary>
    /// 识别文字块列表，输出顺序从左到右，从上到下。 
    /// </summary>

    std::vector<HandwritingWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<HandwritingWordsBlockList>& value);


protected:
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<HandwritingWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_HandwritingResult_H_
