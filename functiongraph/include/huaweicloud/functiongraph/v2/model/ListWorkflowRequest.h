
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListWorkflowRequest
    : public ModelBase
{
public:
    ListWorkflowRequest();
    virtual ~ListWorkflowRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowRequest members

    /// <summary>
    /// 函数流名称
    /// </summary>

    std::string getWorkflowName() const;
    bool workflowNameIsSet() const;
    void unsetworkflowName();
    void setWorkflowName(const std::string& value);

    /// <summary>
    /// 分页查询，每页显示的条目数量，默认值为200 limit大于200时，按照200处理
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询，分页的偏移量，默认值为0 offset小于0时，按照0处理
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProject() const;
    bool enterpriseProjectIsSet() const;
    void unsetenterpriseProject();
    void setEnterpriseProject(const std::string& value);

    /// <summary>
    /// 函数流模式 \&quot;NORMAL\&quot;标准函数流 \&quot;EXPRESS\&quot;快速函数流
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string workflowName_;
    bool workflowNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string enterpriseProject_;
    bool enterpriseProjectIsSet_;
    std::string mode_;
    bool modeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWorkflowRequest& dereference_from_shared_ptr(std::shared_ptr<ListWorkflowRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowRequest_H_
