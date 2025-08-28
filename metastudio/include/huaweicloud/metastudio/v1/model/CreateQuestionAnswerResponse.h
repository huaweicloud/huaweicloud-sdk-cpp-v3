
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateQuestionAnswerResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateQuestionAnswerResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateQuestionAnswerResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateQuestionAnswerResponse();
    virtual ~CreateQuestionAnswerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateQuestionAnswerResponse members

    /// <summary>
    /// 问答对ID。
    /// </summary>

    std::string getQuestionAnswerId() const;
    bool questionAnswerIdIsSet() const;
    void unsetquestionAnswerId();
    void setQuestionAnswerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string questionAnswerId_;
    bool questionAnswerIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateQuestionAnswerResponse_H_
