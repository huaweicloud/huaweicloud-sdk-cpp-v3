
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DownloadIpdImageInIssueRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DownloadIpdImageInIssueRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DownloadIpdImageInIssueRequest
    : public ModelBase
{
public:
    DownloadIpdImageInIssueRequest();
    virtual ~DownloadIpdImageInIssueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadIpdImageInIssueRequest members

    /// <summary>
    /// 项目Id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 图片绑定的工作项id
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 工作项描述中的图片名称,如f401ab8826b1426285910e6c5da80d07.png
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadIpdImageInIssueRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadIpdImageInIssueRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DownloadIpdImageInIssueRequest_H_
