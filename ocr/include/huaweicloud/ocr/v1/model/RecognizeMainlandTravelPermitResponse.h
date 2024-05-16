
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMainlandTravelPermitResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMainlandTravelPermitResponse_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/MainlandTravelPermitResult.h>

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
    /// 
    /// </summary>

    MainlandTravelPermitResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const MainlandTravelPermitResult& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    MainlandTravelPermitResult result_;
    bool resultIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

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
