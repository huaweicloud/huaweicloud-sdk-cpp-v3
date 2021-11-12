
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/WordsRegionList.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  GeneralTableResult
    : public ModelBase
{
public:
    GeneralTableResult();
    virtual ~GeneralTableResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GeneralTableResult members

    /// <summary>
    /// 文字区域数目。          
    /// </summary>

    int32_t getWordsRegionCount() const;
    bool wordsRegionCountIsSet() const;
    void unsetwordsRegionCount();
    void setWordsRegionCount(int32_t value);

    /// <summary>
    /// 文字区域识别结果列表，输出顺序从左到右，先上后下。 
    /// </summary>

    std::vector<WordsRegionList>& getWordsRegionList();
    bool wordsRegionListIsSet() const;
    void unsetwordsRegionList();
    void setWordsRegionList(const std::vector<WordsRegionList>& value);

    /// <summary>
    /// 表格图像转换为excel的base64编码，图像中的文字和表格按位置写入excel。对返回的excel编码可用base64.b64decode解码并保存为.xlsx文件。 
    /// </summary>

    std::string getExcel() const;
    bool excelIsSet() const;
    void unsetexcel();
    void setExcel(const std::string& value);


protected:
    int32_t wordsRegionCount_;
    bool wordsRegionCountIsSet_;
    std::vector<WordsRegionList> wordsRegionList_;
    bool wordsRegionListIsSet_;
    std::string excel_;
    bool excelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableResult_H_
