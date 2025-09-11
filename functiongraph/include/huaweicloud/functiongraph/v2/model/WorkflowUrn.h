
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowUrn_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowUrn_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数工作流URN, 格式为： urn:fss:&lt;region_id&gt;:&lt;project_id&gt;:workflow:\\&lt;package\\&gt;:&lt;workflow_name&gt;:\\&lt;version\\&gt; 注意： package当前只支持default version当前只支持latest
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  WorkflowUrn
    : public ModelBase
{
public:
    WorkflowUrn();
    virtual ~WorkflowUrn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowUrn members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_WorkflowUrn_H_
