
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowRequestBody_H_


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
/// 工作项流程流转请求参数
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowRequestBody
    : public ModelBase
{
public:
    WorkItemFlowRequestBody();
    virtual ~WorkItemFlowRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowRequestBody members

    /// <summary>
    /// 工作项唯一Id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// 工作项流转code
    /// </summary>

    std::string getFlowCode() const;
    bool flowCodeIsSet() const;
    void unsetflowCode();
    void setFlowCode(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string flowCode_;
    bool flowCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowRequestBody_H_
