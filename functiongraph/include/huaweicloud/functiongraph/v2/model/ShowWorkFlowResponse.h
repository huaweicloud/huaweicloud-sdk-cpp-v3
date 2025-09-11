
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkFlowResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkFlowResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/WorkflowCreateBody.h>
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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowWorkFlowResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkFlowResponse();
    virtual ~ShowWorkFlowResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkFlowResponse members

    /// <summary>
    /// 唯一标识ID，流程定义ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 函数工作流URN, 格式为： urn:fss:&lt;region_id&gt;:&lt;project_id&gt;:workflow:\\&lt;package\\&gt;:&lt;workflow_name&gt;:\\&lt;version\\&gt; 注意： package当前只支持default version当前只支持latest
    /// </summary>

    std::string getWorkflowUrn() const;
    bool workflowUrnIsSet() const;
    void unsetworkflowUrn();
    void setWorkflowUrn(const std::string& value);

    /// <summary>
    /// 流程创建时间，格式：yyyy-MM-ddTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 流程修改时间，格式：yyyy-MM-ddTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);

    /// <summary>
    /// 流程创建者
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 快速函数流日志组ID，仅快速模式函数流且日志级别不为NONE时
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// 快速函数流日志流ID，仅快速模式函数流且日志级别不为NONE时返回。
    /// </summary>

    std::string getLtsStreamId() const;
    bool ltsStreamIdIsSet() const;
    void unsetltsStreamId();
    void setLtsStreamId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowCreateBody getDefinition() const;
    bool definitionIsSet() const;
    void unsetdefinition();
    void setDefinition(const WorkflowCreateBody& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string workflowUrn_;
    bool workflowUrnIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string updatedTime_;
    bool updatedTimeIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string ltsGroupId_;
    bool ltsGroupIdIsSet_;
    std::string ltsStreamId_;
    bool ltsStreamIdIsSet_;
    WorkflowCreateBody definition_;
    bool definitionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkFlowResponse_H_
