
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerFormulaResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerFormulaResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerFormulaBlock.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerFormulaResult
    : public ModelBase
{
public:
    SmartDocumentRecognizerFormulaResult();
    virtual ~SmartDocumentRecognizerFormulaResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerFormulaResult members

    /// <summary>
    /// 数学公式数量。 
    /// </summary>

    int32_t getFormulaCount() const;
    bool formulaCountIsSet() const;
    void unsetformulaCount();
    void setFormulaCount(int32_t value);

    /// <summary>
    /// 数学公式识别结果列表。 
    /// </summary>

    std::vector<SmartDocumentRecognizerFormulaBlock>& getFormulaList();
    bool formulaListIsSet() const;
    void unsetformulaList();
    void setFormulaList(const std::vector<SmartDocumentRecognizerFormulaBlock>& value);


protected:
    int32_t formulaCount_;
    bool formulaCountIsSet_;
    std::vector<SmartDocumentRecognizerFormulaBlock> formulaList_;
    bool formulaListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerFormulaResult_H_
