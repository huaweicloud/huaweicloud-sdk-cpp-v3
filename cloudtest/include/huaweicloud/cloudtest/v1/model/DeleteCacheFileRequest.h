
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteCacheFileRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteCacheFileRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteCacheFileRequest
    : public ModelBase
{
public:
    DeleteCacheFileRequest();
    virtual ~DeleteCacheFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteCacheFileRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 删除附件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 附件Uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 附件挂载资源Uri
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 是否备份
    /// </summary>

    bool isBakUp() const;
    bool bakUpIsSet() const;
    void unsetbakUp();
    void setBakUp(bool value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    bool bakUp_;
    bool bakUpIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteCacheFileRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteCacheFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteCacheFileRequest_H_
