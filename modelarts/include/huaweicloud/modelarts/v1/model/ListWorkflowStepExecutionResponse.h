
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowStepExecutionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowStepExecutionResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/StepExecutionResp.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/CompareColumns.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkflowStepExecutionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkflowStepExecutionResponse();
    virtual ~ListWorkflowStepExecutionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowStepExecutionResponse members

    /// <summary>
    /// **参数解释**：总数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**：返回个数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：StepExecution数组。
    /// </summary>

    std::vector<StepExecutionResp>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<StepExecutionResp>& value);

    /// <summary>
    /// **参数解释**：默认排序。 **取值范围**：不涉及。
    /// </summary>

    std::string getDefaultOrder() const;
    bool defaultOrderIsSet() const;
    void unsetdefaultOrder();
    void setDefaultOrder(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CompareColumns getCompareColumns() const;
    bool compareColumnsIsSet() const;
    void unsetcompareColumns();
    void setCompareColumns(const CompareColumns& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<StepExecutionResp> items_;
    bool itemsIsSet_;
    std::string defaultOrder_;
    bool defaultOrderIsSet_;
    CompareColumns compareColumns_;
    bool compareColumnsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowStepExecutionResponse_H_
