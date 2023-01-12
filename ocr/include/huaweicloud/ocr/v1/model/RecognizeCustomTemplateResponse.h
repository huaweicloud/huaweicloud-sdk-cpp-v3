
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeCustomTemplateResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeCustomTemplateResponse_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeCustomTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeCustomTemplateResponse();
    virtual ~RecognizeCustomTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeCustomTemplateResponse members

    /// <summary>
    /// 调用成功时表示调用结果。 调用失败时无此字段。 
    /// </summary>

    Object getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const Object& value);

    /// <summary>
    /// 调用成功时返回调用模板id。 调用失败时无此字段。 
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);


protected:
    Object result_;
    bool resultIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeCustomTemplateResponse_H_
