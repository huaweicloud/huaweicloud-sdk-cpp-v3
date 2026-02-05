
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechResponse_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sis/v1/model/GenerateSpeechRsp_result.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  GenerateSpeechResponse
    : public ModelBase, public HttpResponse
{
public:
    GenerateSpeechResponse();
    virtual ~GenerateSpeechResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateSpeechResponse members

    /// <summary>
    /// 服务内部的令牌，可用于在日志中追溯具体流程。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GenerateSpeechRsp_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const GenerateSpeechRsp_result& value);


protected:
    std::string traceId_;
    bool traceIdIsSet_;
    GenerateSpeechRsp_result result_;
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

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechResponse_H_
