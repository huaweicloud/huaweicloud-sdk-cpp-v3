
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WordsRegionList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WordsRegionList_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/GeneralTableWordsBlockList.h>
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
/// 文字区域识别结果列表，输出顺序从左到右，先上后下。
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  WordsRegionList
    : public ModelBase
{
public:
    WordsRegionList();
    virtual ~WordsRegionList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WordsRegionList members

    /// <summary>
    /// 文字识别区域类型。 - text：文本识别区域; - table：表格识别区域。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 子区域识别文字块数目。 
    /// </summary>

    int32_t getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(int32_t value);

    /// <summary>
    /// 子区域识别文字块列表，输出顺序从左到右，先上后下。 
    /// </summary>

    std::vector<GeneralTableWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<GeneralTableWordsBlockList>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<GeneralTableWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WordsRegionList_H_
