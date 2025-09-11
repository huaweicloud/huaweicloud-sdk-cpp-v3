
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkflowExecutionResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkflowExecutionResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/functiongraph/v2/model/NodeExecutionDetail.h>
#include <vector>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowWorkflowExecutionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkflowExecutionResponse();
    virtual ~ShowWorkflowExecutionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowExecutionResponse members

    /// <summary>
    /// 流程定义ID
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 函数工作流URN, 格式为： urn:fss:&lt;region_id&gt;:&lt;project_id&gt;:workflow:\\&lt;package\\&gt;:&lt;workflow_name&gt;:\\&lt;version\\&gt; 注意： package当前只支持default version当前只支持latest
    /// </summary>

    std::string getWorkflowUrn() const;
    bool workflowUrnIsSet() const;
    void unsetworkflowUrn();
    void setWorkflowUrn(const std::string& value);

    /// <summary>
    /// 流程执行实例ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 流程实例执行状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 函数执行时需要的Header
    /// </summary>

    Object getHeaders() const;
    bool headersIsSet() const;
    void unsetheaders();
    void setHeaders(const Object& value);

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

    /// <summary>
    /// 流程实例上次更新时间，格式：yyyy-MM-ddTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// 流程实例创建者
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 节点执行信息
    /// </summary>

    std::vector<NodeExecutionDetail>& getNodeExecutionDetails();
    bool nodeExecutionDetailsIsSet() const;
    void unsetnodeExecutionDetails();
    void setNodeExecutionDetails(const std::vector<NodeExecutionDetail>& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string workflowUrn_;
    bool workflowUrnIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    Object headers_;
    bool headersIsSet_;
    Object input_;
    bool inputIsSet_;
    Object output_;
    bool outputIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::vector<NodeExecutionDetail> nodeExecutionDetails_;
    bool nodeExecutionDetailsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkflowExecutionResponse_H_
