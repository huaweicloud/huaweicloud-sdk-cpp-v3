
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_InvokeFunctionResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_InvokeFunctionResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  InvokeFunctionResponse
    : public ModelBase, public HttpResponse
{
public:
    InvokeFunctionResponse();
    virtual ~InvokeFunctionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InvokeFunctionResponse members

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 函数执行结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 函数执行返回日志
    /// </summary>

    std::string getLog() const;
    bool logIsSet() const;
    void unsetlog();
    void setLog(const std::string& value);

    /// <summary>
    /// 函数执行返回状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXCffRequestId() const;
    bool xCffRequestIdIsSet() const;
    void unsetxCffRequestId();
    void setXCffRequestId(const std::string& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string log_;
    bool logIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string xCffRequestId_;
    bool xCffRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_InvokeFunctionResponse_H_
