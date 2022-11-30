
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RunTtsResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RunTtsResponse_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/CustomResult.h>
#include <string>

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
class HUAWEICLOUD_SIS_V1_EXPORT  RunTtsResponse
    : public ModelBase, public HttpResponse
{
public:
    RunTtsResponse();
    virtual ~RunTtsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RunTtsResponse members

    /// <summary>
    /// 服务内部的令牌，可用于在日志中追溯具体流程。  在某些错误情况下可能没有此令牌字符串。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const CustomResult& value);


protected:
    std::string traceId_;
    bool traceIdIsSet_;
    CustomResult result_;
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

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RunTtsResponse_H_
