
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/functiongraph/v2/model/WorkflowSimpleInfo.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListWorkflowResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkflowResponse();
    virtual ~ListWorkflowResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowResponse members

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
    /// 返回的实体对象
    /// </summary>

    std::vector<WorkflowSimpleInfo>& getWorkflows();
    bool workflowsIsSet() const;
    void unsetworkflows();
    void setWorkflows(const std::vector<WorkflowSimpleInfo>& value);


protected:
    int64_t total_;
    bool totalIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::vector<WorkflowSimpleInfo> workflows_;
    bool workflowsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowResponse_H_
