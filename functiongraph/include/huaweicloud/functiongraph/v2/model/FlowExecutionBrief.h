
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecutionBrief_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecutionBrief_H_


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
/// 函数流执行概要信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FlowExecutionBrief
    : public ModelBase
{
public:
    FlowExecutionBrief();
    virtual ~FlowExecutionBrief();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowExecutionBrief members

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


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string workflowUrn_;
    bool workflowUrnIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecutionBrief_H_
