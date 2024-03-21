
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerFormResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerFormResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerTableBlock.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerFormResult
    : public ModelBase
{
public:
    SmartDocumentRecognizerFormResult();
    virtual ~SmartDocumentRecognizerFormResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerFormResult members

    /// <summary>
    /// 模型识别到的有线表单数量。 
    /// </summary>

    int32_t getFormCount() const;
    bool formCountIsSet() const;
    void unsetformCount();
    void setFormCount(int32_t value);

    /// <summary>
    /// 有线表单识别结果列表。 
    /// </summary>

    std::vector<SmartDocumentRecognizerTableBlock>& getFormList();
    bool formListIsSet() const;
    void unsetformList();
    void setFormList(const std::vector<SmartDocumentRecognizerTableBlock>& value);


protected:
    int32_t formCount_;
    bool formCountIsSet_;
    std::vector<SmartDocumentRecognizerTableBlock> formList_;
    bool formListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerFormResult_H_
