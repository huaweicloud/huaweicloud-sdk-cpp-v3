
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdAttachmentByWorkItemIdRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdAttachmentByWorkItemIdRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIpdAttachmentByWorkItemIdRequest
    : public ModelBase
{
public:
    ShowIpdAttachmentByWorkItemIdRequest();
    virtual ~ShowIpdAttachmentByWorkItemIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpdAttachmentByWorkItemIdRequest members

    /// <summary>
    /// 工作项所属项目Id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项Id
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 原始需求跨项目时，提出项目Id
    /// </summary>

    std::string getSourceProjectId() const;
    bool sourceProjectIdIsSet() const;
    void unsetsourceProjectId();
    void setSourceProjectId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string sourceProjectId_;
    bool sourceProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIpdAttachmentByWorkItemIdRequest& dereference_from_shared_ptr(std::shared_ptr<ShowIpdAttachmentByWorkItemIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdAttachmentByWorkItemIdRequest_H_
