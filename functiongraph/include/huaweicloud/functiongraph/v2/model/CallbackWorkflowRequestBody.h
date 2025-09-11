
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CallbackWorkflowRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CallbackWorkflowRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回调工作流的请求Body
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CallbackWorkflowRequestBody
    : public ModelBase
{
public:
    CallbackWorkflowRequestBody();
    virtual ~CallbackWorkflowRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CallbackWorkflowRequestBody members

    /// <summary>
    /// 执行结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const std::string& value);

    /// <summary>
    /// 工作流的执行结果，JSON格式，仅在status为success时有值
    /// </summary>

    Object getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const Object& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string error_;
    bool errorIsSet_;
    Object output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CallbackWorkflowRequestBody_H_
