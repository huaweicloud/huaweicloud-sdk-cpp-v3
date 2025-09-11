
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NodeExecution_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NodeExecution_H_


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
/// 节点执行详情
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  NodeExecution
    : public ModelBase
{
public:
    NodeExecution();
    virtual ~NodeExecution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeExecution members

    /// <summary>
    /// 流程节点执行状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 函数执行时的入参
    /// </summary>

    Object getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const Object& value);

    /// <summary>
    /// 函数执行结果
    /// </summary>

    Object getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const Object& value);

    /// <summary>
    /// 节点启动时间，UTC毫秒时间戳格式
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 节点结束时间，UTC毫秒时间戳格式
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 节点错误信息，仅在节点出错时非空
    /// </summary>

    Object getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const Object& value);

    /// <summary>
    /// 流程节点请求ID
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    Object input_;
    bool inputIsSet_;
    Object output_;
    bool outputIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    Object errorMessage_;
    bool errorMessageIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NodeExecution_H_
