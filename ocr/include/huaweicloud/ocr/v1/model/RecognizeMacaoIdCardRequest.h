
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMacaoIdCardRequest_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMacaoIdCardRequest_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/MacaoIdCardRequestBody.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeMacaoIdCardRequest
    : public ModelBase
{
public:
    RecognizeMacaoIdCardRequest();
    virtual ~RecognizeMacaoIdCardRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeMacaoIdCardRequest members

    /// <summary>
    /// 
    /// </summary>

    MacaoIdCardRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MacaoIdCardRequestBody& value);


protected:
    MacaoIdCardRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RecognizeMacaoIdCardRequest& dereference_from_shared_ptr(std::shared_ptr<RecognizeMacaoIdCardRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeMacaoIdCardRequest_H_
