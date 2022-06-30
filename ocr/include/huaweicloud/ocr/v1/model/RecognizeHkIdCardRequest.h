
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeHkIdCardRequest_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeHkIdCardRequest_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/HkIdCardRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeHkIdCardRequest
    : public ModelBase
{
public:
    RecognizeHkIdCardRequest();
    virtual ~RecognizeHkIdCardRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeHkIdCardRequest members

    /// <summary>
    /// 
    /// </summary>

    HkIdCardRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const HkIdCardRequestBody& value);


protected:
    HkIdCardRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RecognizeHkIdCardRequest& dereference_from_shared_ptr(std::shared_ptr<RecognizeHkIdCardRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeHkIdCardRequest_H_
