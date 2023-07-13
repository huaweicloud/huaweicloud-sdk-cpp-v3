
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/WebImageWordsBlockList.h>
#include <huaweicloud/ocr/v1/model/WebImageExtractedData.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  WebImageResult
    : public ModelBase
{
public:
    WebImageResult();
    virtual ~WebImageResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WebImageResult members

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

    std::vector<WebImageWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<WebImageWordsBlockList>& value);

    /// <summary>
    /// 
    /// </summary>

    WebImageExtractedData getExtractedData() const;
    bool extractedDataIsSet() const;
    void unsetextractedData();
    void setExtractedData(const WebImageExtractedData& value);


protected:
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<WebImageWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;
    WebImageExtractedData extractedData_;
    bool extractedDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageResult_H_
