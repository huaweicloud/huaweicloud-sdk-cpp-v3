
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/FinancialStatementResult_image_size.h>
#include <string>
#include <vector>
#include <huaweicloud/ocr/v1/model/FinancialStatementWordsRegionList.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  FinancialStatementResult
    : public ModelBase
{
public:
    FinancialStatementResult();
    virtual ~FinancialStatementResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FinancialStatementResult members

    /// <summary>
    /// 识别出来的表格、文本区域个数。 
    /// </summary>

    int32_t getWordsRegionCount() const;
    bool wordsRegionCountIsSet() const;
    void unsetwordsRegionCount();
    void setWordsRegionCount(int32_t value);

    /// <summary>
    /// 返回的表格、文本区域列表。输出顺序从左到右，从上到下。 
    /// </summary>

    std::vector<FinancialStatementWordsRegionList>& getWordsRegionList();
    bool wordsRegionListIsSet() const;
    void unsetwordsRegionList();
    void setWordsRegionList(const std::vector<FinancialStatementWordsRegionList>& value);

    /// <summary>
    /// 表格图像转换为excel的base64编码，图像中的文字和表格按位置写入excel，可编辑。对返回的excel编码，可用base64.b64decode解码并保存为xlsx文件。 
    /// </summary>

    std::string getExcel() const;
    bool excelIsSet() const;
    void unsetexcel();
    void setExcel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FinancialStatementResult_image_size getImageSize() const;
    bool imageSizeIsSet() const;
    void unsetimageSize();
    void setImageSize(const FinancialStatementResult_image_size& value);


protected:
    int32_t wordsRegionCount_;
    bool wordsRegionCountIsSet_;
    std::vector<FinancialStatementWordsRegionList> wordsRegionList_;
    bool wordsRegionListIsSet_;
    std::string excel_;
    bool excelIsSet_;
    FinancialStatementResult_image_size imageSize_;
    bool imageSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementResult_H_
