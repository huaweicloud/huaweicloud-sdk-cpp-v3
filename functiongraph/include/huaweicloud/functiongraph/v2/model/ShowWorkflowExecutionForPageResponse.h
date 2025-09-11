
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkflowExecutionForPageResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkflowExecutionForPageResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FlowExecutionBriefV2.h>
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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowWorkflowExecutionForPageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkflowExecutionForPageResponse();
    virtual ~ShowWorkflowExecutionForPageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowExecutionForPageResponse members

    /// <summary>
    /// 返回所有满足条件的对象个数
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 返回对象的大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 函数流返回体信息
    /// </summary>

    std::vector<FlowExecutionBriefV2>& getExecutions();
    bool executionsIsSet() const;
    void unsetexecutions();
    void setExecutions(const std::vector<FlowExecutionBriefV2>& value);


protected:
    int64_t total_;
    bool totalIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::vector<FlowExecutionBriefV2> executions_;
    bool executionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowWorkflowExecutionForPageResponse_H_
