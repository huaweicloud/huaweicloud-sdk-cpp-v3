
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerLayoutResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerLayoutResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerLayoutBlock.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerLayoutResult
    : public ModelBase
{
public:
    SmartDocumentRecognizerLayoutResult();
    virtual ~SmartDocumentRecognizerLayoutResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerLayoutResult members

    /// <summary>
    /// 模型识别到的文档版面区域数量。        
    /// </summary>

    int32_t getLayoutBlockCount() const;
    bool layoutBlockCountIsSet() const;
    void unsetlayoutBlockCount();
    void setLayoutBlockCount(int32_t value);

    /// <summary>
    /// 文档版面区域识别结果列表。 
    /// </summary>

    std::vector<SmartDocumentRecognizerLayoutBlock>& getLayoutBlockList();
    bool layoutBlockListIsSet() const;
    void unsetlayoutBlockList();
    void setLayoutBlockList(const std::vector<SmartDocumentRecognizerLayoutBlock>& value);


protected:
    int32_t layoutBlockCount_;
    bool layoutBlockCountIsSet_;
    std::vector<SmartDocumentRecognizerLayoutBlock> layoutBlockList_;
    bool layoutBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerLayoutResult_H_
