
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowStepExecutionRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowStepExecutionRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkflowStepExecutionRequest
    : public ModelBase
{
public:
    ListWorkflowStepExecutionRequest();
    virtual ~ListWorkflowStepExecutionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowStepExecutionRequest members

    /// <summary>
    /// 工作流的ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 返回的数据条目数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 数据条目偏移量。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// instance order
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 排序依据字段，例如sort_by&#x3D;create_time，则表示以条目的创建时间进行排序。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWorkflowStepExecutionRequest& dereference_from_shared_ptr(std::shared_ptr<ListWorkflowStepExecutionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowStepExecutionRequest_H_
