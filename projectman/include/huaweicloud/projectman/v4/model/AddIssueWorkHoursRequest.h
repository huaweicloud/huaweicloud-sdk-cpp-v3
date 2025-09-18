
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/AddIssueWorkHoursRequestBody.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AddIssueWorkHoursRequest
    : public ModelBase
{
public:
    AddIssueWorkHoursRequest();
    virtual ~AddIssueWorkHoursRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddIssueWorkHoursRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AddIssueWorkHoursRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddIssueWorkHoursRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    AddIssueWorkHoursRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddIssueWorkHoursRequest& dereference_from_shared_ptr(std::shared_ptr<AddIssueWorkHoursRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursRequest_H_
