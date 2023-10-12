
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerKVBlock_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerKVBlock_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerKVWordsBlock.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerKVBlock
    : public ModelBase
{
public:
    SmartDocumentRecognizerKVBlock();
    virtual ~SmartDocumentRecognizerKVBlock();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerKVBlock members

    /// <summary>
    /// key-value对（键值对）中的key，例如“姓名：小明”中的“姓名” 
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// key-value对（键值对）中的value，例如“姓名：小明”中的“小明” 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 该键值对中所包含的文本框数量。   
    /// </summary>

    int32_t getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(int32_t value);

    /// <summary>
    /// 文本框识别结果列表。 
    /// </summary>

    std::vector<SmartDocumentRecognizerKVWordsBlock>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<SmartDocumentRecognizerKVWordsBlock>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<SmartDocumentRecognizerKVWordsBlock> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerKVBlock_H_
