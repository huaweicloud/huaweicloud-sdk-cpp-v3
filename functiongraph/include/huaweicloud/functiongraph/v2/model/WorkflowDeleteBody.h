
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowDeleteBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowDeleteBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除函数流的Body体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  WorkflowDeleteBody
    : public ModelBase
{
public:
    WorkflowDeleteBody();
    virtual ~WorkflowDeleteBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowDeleteBody members

    /// <summary>
    /// 函数流URN列表
    /// </summary>

    std::vector<std::string>& getWorkflowUrns();
    bool workflowUrnsIsSet() const;
    void unsetworkflowUrns();
    void setWorkflowUrns(const std::vector<std::string>& value);


protected:
    std::vector<std::string> workflowUrns_;
    bool workflowUrnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowDeleteBody_H_
