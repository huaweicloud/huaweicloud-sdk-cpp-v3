
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerOcrResult.h>
#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerTableResult.h>
#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerKvResult.h>
#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerLayoutResult.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerResult
    : public ModelBase
{
public:
    SmartDocumentRecognizerResult();
    virtual ~SmartDocumentRecognizerResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SmartDocumentRecognizerResult members

    /// <summary>
    /// 
    /// </summary>

    SmartDocumentRecognizerOcrResult getOcrResult() const;
    bool ocrResultIsSet() const;
    void unsetocrResult();
    void setOcrResult(const SmartDocumentRecognizerOcrResult& value);

    /// <summary>
    /// 
    /// </summary>

    SmartDocumentRecognizerKvResult getKvResult() const;
    bool kvResultIsSet() const;
    void unsetkvResult();
    void setKvResult(const SmartDocumentRecognizerKvResult& value);

    /// <summary>
    /// 
    /// </summary>

    SmartDocumentRecognizerTableResult getTableResult() const;
    bool tableResultIsSet() const;
    void unsettableResult();
    void setTableResult(const SmartDocumentRecognizerTableResult& value);

    /// <summary>
    /// 
    /// </summary>

    SmartDocumentRecognizerLayoutResult getLayoutResult() const;
    bool layoutResultIsSet() const;
    void unsetlayoutResult();
    void setLayoutResult(const SmartDocumentRecognizerLayoutResult& value);


protected:
    SmartDocumentRecognizerOcrResult ocrResult_;
    bool ocrResultIsSet_;
    SmartDocumentRecognizerKvResult kvResult_;
    bool kvResultIsSet_;
    SmartDocumentRecognizerTableResult tableResult_;
    bool tableResultIsSet_;
    SmartDocumentRecognizerLayoutResult layoutResult_;
    bool layoutResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerResult_H_
