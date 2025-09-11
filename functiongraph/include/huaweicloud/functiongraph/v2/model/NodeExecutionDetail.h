
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NodeExecutionDetail_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NodeExecutionDetail_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/functiongraph/v2/model/NodeExecution.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数流节点执行详细信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  NodeExecutionDetail
    : public ModelBase
{
public:
    NodeExecutionDetail();
    virtual ~NodeExecutionDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeExecutionDetail members

    /// <summary>
    /// 流程节点ID
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 流程节点名称
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// 流程节点执行ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 节点执行记录
    /// </summary>

    std::vector<NodeExecution>& getExecutions();
    bool executionsIsSet() const;
    void unsetexecutions();
    void setExecutions(const std::vector<NodeExecution>& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::vector<NodeExecution> executions_;
    bool executionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NodeExecutionDetail_H_
