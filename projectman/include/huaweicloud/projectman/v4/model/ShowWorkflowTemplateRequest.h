
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowWorkflowTemplateRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowWorkflowTemplateRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowWorkflowTemplateRequest
    : public ModelBase
{
public:
    ShowWorkflowTemplateRequest();
    virtual ~ShowWorkflowTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowTemplateRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowWorkflowTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ShowWorkflowTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowWorkflowTemplateRequest_H_
