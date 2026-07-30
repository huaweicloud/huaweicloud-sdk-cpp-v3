
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowExecutionsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowExecutionsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowExecutionResp.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkflowExecutionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkflowExecutionsResponse();
    virtual ~ListWorkflowExecutionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowExecutionsResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 返回个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// execution数组。
    /// </summary>

    std::vector<WorkflowExecutionResp>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<WorkflowExecutionResp>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<WorkflowExecutionResp> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowExecutionsResponse_H_
