
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ExtractedData_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ExtractedData_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/MathInfo.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  ExtractedData
    : public ModelBase
{
public:
    ExtractedData();
    virtual ~ExtractedData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtractedData members

    /// <summary>
    /// 
    /// </summary>

    MathInfo getMathInfo() const;
    bool mathInfoIsSet() const;
    void unsetmathInfo();
    void setMathInfo(const MathInfo& value);


protected:
    MathInfo mathInfo_;
    bool mathInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ExtractedData_H_
