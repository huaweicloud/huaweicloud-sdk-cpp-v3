
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeThailandIdcardRequest_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeThailandIdcardRequest_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/ThailandIdcardRequestBody.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeThailandIdcardRequest
    : public ModelBase
{
public:
    RecognizeThailandIdcardRequest();
    virtual ~RecognizeThailandIdcardRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeThailandIdcardRequest members

    /// <summary>
    /// 
    /// </summary>

    ThailandIdcardRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ThailandIdcardRequestBody& value);


protected:
    ThailandIdcardRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RecognizeThailandIdcardRequest& dereference_from_shared_ptr(std::shared_ptr<RecognizeThailandIdcardRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeThailandIdcardRequest_H_
