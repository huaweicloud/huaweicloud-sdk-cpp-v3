
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueDetailRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueDetailRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIssueDetailRequest
    : public ModelBase
{
public:
    ShowIssueDetailRequest();
    virtual ~ShowIssueDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIssueDetailRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项唯一Id
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 工作项分类
    /// </summary>

    std::string getIssueType() const;
    bool issueTypeIsSet() const;
    void unsetissueType();
    void setIssueType(const std::string& value);

    /// <summary>
    /// 项目所属domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string issueType_;
    bool issueTypeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIssueDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowIssueDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueDetailRequest_H_
