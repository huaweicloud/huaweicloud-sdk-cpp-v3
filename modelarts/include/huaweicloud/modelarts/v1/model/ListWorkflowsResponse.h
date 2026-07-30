
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Workflow.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkflowsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkflowsResponse();
    virtual ~ListWorkflowsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowsResponse members

    /// <summary>
    /// 查询到当前用户名下的所有Workflow总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 查询到当前用户名下的所有符合查询条件的Workflow总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 查询到当前用户名下的所有符合查询条件的Workflow详情。
    /// </summary>

    std::vector<Workflow>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<Workflow>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<Workflow> items_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowsResponse_H_
