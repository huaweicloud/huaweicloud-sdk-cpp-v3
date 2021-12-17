
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeThailandLicensePlateResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeThailandLicensePlateResponse_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/ThailandLicensePlateItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeThailandLicensePlateResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeThailandLicensePlateResponse();
    virtual ~RecognizeThailandLicensePlateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeThailandLicensePlateResponse members

    /// <summary>
    /// 调用成功时表示调用结果。 调用失败时无此字段 
    /// </summary>

    std::vector<ThailandLicensePlateItem>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ThailandLicensePlateItem>& value);


protected:
    std::vector<ThailandLicensePlateItem> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeThailandLicensePlateResponse_H_
