
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartSyncWorkflowExecutionResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartSyncWorkflowExecutionResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/SyncExecutionNodeErrorDetail.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  StartSyncWorkflowExecutionResponse
    : public ModelBase, public HttpResponse
{
public:
    StartSyncWorkflowExecutionResponse();
    virtual ~StartSyncWorkflowExecutionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartSyncWorkflowExecutionResponse members

    /// <summary>
    /// 流程实例ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 流程执行最终状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 函数流的执行结果，JSON格式，仅在status为success时有值
    /// </summary>

    Object getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const Object& value);

    /// <summary>
    /// 流程执行错误信息，仅在status为fail时有值
    /// </summary>

    std::vector<SyncExecutionNodeErrorDetail>& getErrors();
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(const std::vector<SyncExecutionNodeErrorDetail>& value);

    /// <summary>
    /// 流程实例创建时间，格式：yyyy-MM-ddTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 流程实例结束时间，格式：yyyy-MM-ddTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string executionId_;
    bool executionIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    Object output_;
    bool outputIsSet_;
    std::vector<SyncExecutionNodeErrorDetail> errors_;
    bool errorsIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartSyncWorkflowExecutionResponse_H_
