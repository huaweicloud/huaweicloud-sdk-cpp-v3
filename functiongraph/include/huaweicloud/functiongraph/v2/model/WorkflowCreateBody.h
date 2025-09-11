
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowCreateBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowCreateBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/Retry.h>
#include <huaweicloud/functiongraph/v2/model/Trigger.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/functiongraph/v2/model/ExpressConfig.h>
#include <huaweicloud/functiongraph/v2/model/OperationState.h>
#include <huaweicloud/functiongraph/v2/model/Function.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建函数流的body体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  WorkflowCreateBody
    : public ModelBase
{
public:
    WorkflowCreateBody();
    virtual ~WorkflowCreateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowCreateBody members

    /// <summary>
    /// 函数流名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 函数流描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 流程开始节点ID
    /// </summary>

    std::string getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(const std::string& value);

    /// <summary>
    /// 触发器列表
    /// </summary>

    std::vector<Trigger>& getTriggers();
    bool triggersIsSet() const;
    void unsettriggers();
    void setTriggers(const std::vector<Trigger>& value);

    /// <summary>
    /// 函数列表
    /// </summary>

    std::vector<Function>& getFunctions();
    bool functionsIsSet() const;
    void unsetfunctions();
    void setFunctions(const std::vector<Function>& value);

    /// <summary>
    /// 函数流节点清单，定义参考SleepState和OperationState
    /// </summary>

    std::vector<OperationState>& getStates();
    bool statesIsSet() const;
    void unsetstates();
    void setStates(const std::vector<OperationState>& value);

    /// <summary>
    /// 函数流中的常量
    /// </summary>

    Object getConstants() const;
    bool constantsIsSet() const;
    void unsetconstants();
    void setConstants(const Object& value);

    /// <summary>
    /// 重试策略清单
    /// </summary>

    std::vector<Retry>& getRetries();
    bool retriesIsSet() const;
    void unsetretries();
    void setRetries(const std::vector<Retry>& value);

    /// <summary>
    /// 函数流模式，当前支持两种模式 NORMAL: 标准模式，普通模式面向普通的业务场景，支持长时间任务，支持执行历史持久化和查询，只支持异步调用 EXPRESS: 快速模式，快速模式面向业务执行时长较短，需要极致性能的场景，只支持流程执行时长低于5分钟的场景，不支持执行历史持久化，支持同步和异步调用 默认为标准模式
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExpressConfig getExpressConfig() const;
    bool expressConfigIsSet() const;
    void unsetexpressConfig();
    void setExpressConfig(const ExpressConfig& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 是否返回流数据
    /// </summary>

    bool isEnableStreamResponse() const;
    bool enableStreamResponseIsSet() const;
    void unsetenableStreamResponse();
    void setEnableStreamResponse(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string start_;
    bool startIsSet_;
    std::vector<Trigger> triggers_;
    bool triggersIsSet_;
    std::vector<Function> functions_;
    bool functionsIsSet_;
    std::vector<OperationState> states_;
    bool statesIsSet_;
    Object constants_;
    bool constantsIsSet_;
    std::vector<Retry> retries_;
    bool retriesIsSet_;
    std::string mode_;
    bool modeIsSet_;
    ExpressConfig expressConfig_;
    bool expressConfigIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool enableStreamResponse_;
    bool enableStreamResponseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowCreateBody_H_
