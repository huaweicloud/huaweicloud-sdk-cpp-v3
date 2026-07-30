
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowsTodolistResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowsTodolistResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowTodo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkflowsTodolistResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkflowsTodolistResponse();
    virtual ~ShowWorkflowsTodolistResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowsTodolistResponse members

    /// <summary>
    /// 待办列表。
    /// </summary>

    std::vector<WorkflowTodo>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<WorkflowTodo>& value);

    /// <summary>
    /// 条目个数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<WorkflowTodo> items_;
    bool itemsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowsTodolistResponse_H_
