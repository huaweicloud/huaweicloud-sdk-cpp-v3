
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OperationState_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OperationState_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/StateDataFilter.h>
#include <string>
#include <huaweicloud/functiongraph/v2/model/Action.h>
#include <huaweicloud/functiongraph/v2/model/OnError.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数执行节点信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  OperationState
    : public ModelBase
{
public:
    OperationState();
    virtual ~OperationState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperationState members

    /// <summary>
    /// Action执行模式，支持串行，并行两种模式，默认串行
    /// </summary>

    std::string getActionMode() const;
    bool actionModeIsSet() const;
    void unsetactionMode();
    void setActionMode(const std::string& value);

    /// <summary>
    /// 节点中要执行的操作列表
    /// </summary>

    std::vector<Action>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<Action>& value);

    /// <summary>
    /// 错误处理策略
    /// </summary>

    std::vector<OnError>& getOnErrors();
    bool onErrorsIsSet() const;
    void unsetonErrors();
    void setOnErrors(const std::vector<OnError>& value);

    /// <summary>
    /// 节点ID，需要在当前函数流中唯一
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 节点名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否是结束节点
    /// </summary>

    bool isEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(bool value);

    /// <summary>
    /// 下一步骤节点ID
    /// </summary>

    std::string getTransition() const;
    bool transitionIsSet() const;
    void unsettransition();
    void setTransition(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StateDataFilter getStateDataFilter() const;
    bool stateDataFilterIsSet() const;
    void unsetstateDataFilter();
    void setStateDataFilter(const StateDataFilter& value);

    /// <summary>
    /// 时间等待节点等待时间（秒）,节点类型为Sleep时为必填，节点类型不为Sleep时无效
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);


protected:
    std::string actionMode_;
    bool actionModeIsSet_;
    std::vector<Action> actions_;
    bool actionsIsSet_;
    std::vector<OnError> onErrors_;
    bool onErrorsIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool end_;
    bool endIsSet_;
    std::string transition_;
    bool transitionIsSet_;
    StateDataFilter stateDataFilter_;
    bool stateDataFilterIsSet_;
    int64_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OperationState_H_
