
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeBankcardRequest_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeBankcardRequest_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/BankcardRequestBody.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeBankcardRequest
    : public ModelBase
{
public:
    RecognizeBankcardRequest();
    virtual ~RecognizeBankcardRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeBankcardRequest members

    /// <summary>
    /// 
    /// </summary>

    BankcardRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BankcardRequestBody& value);


protected:
    BankcardRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RecognizeBankcardRequest& dereference_from_shared_ptr(std::shared_ptr<RecognizeBankcardRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeBankcardRequest_H_
