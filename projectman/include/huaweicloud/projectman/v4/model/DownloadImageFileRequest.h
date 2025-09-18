
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DownloadImageFileRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DownloadImageFileRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DownloadImageFileRequest
    : public ModelBase
{
public:
    DownloadImageFileRequest();
    virtual ~DownloadImageFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadImageFileRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 图片URI
    /// </summary>

    std::string getImageUri() const;
    bool imageUriIsSet() const;
    void unsetimageUri();
    void setImageUri(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string imageUri_;
    bool imageUriIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadImageFileRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadImageFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DownloadImageFileRequest_H_
