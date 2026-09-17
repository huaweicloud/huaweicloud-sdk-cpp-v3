
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowTenantIssueListRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowTenantIssueListRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/QueryVO.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowTenantIssueListRequest
    : public ModelBase
{
public:
    ShowTenantIssueListRequest();
    virtual ~ShowTenantIssueListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantIssueListRequest members

    /// <summary>
    /// 项目32位UUID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getIssueType() const;
    bool issueTypeIsSet() const;
    void unsetissueType();
    void setIssueType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryVO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryVO& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueType_;
    bool issueTypeIsSet_;
    QueryVO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTenantIssueListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTenantIssueListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowTenantIssueListRequest_H_
