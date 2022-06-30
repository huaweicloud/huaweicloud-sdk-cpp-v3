
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMainlandTravelPermitResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMainlandTravelPermitResponse_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeMainlandTravelPermitResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeMainlandTravelPermitResponse();
    virtual ~RecognizeMainlandTravelPermitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeMainlandTravelPermitResponse members

    /// <summary>
    /// 调用成功时表示调用结果。  调用失败时无此字段。 
    /// </summary>

    Object getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const Object& value);


protected:
    Object result_;
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

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMainlandTravelPermitResponse_H_