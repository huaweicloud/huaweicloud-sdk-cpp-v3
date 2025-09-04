
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadCacheFileRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadCacheFileRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/UploadCacheFileRequestBody.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UploadCacheFileRequest
    : public ModelBase
{
public:
    UploadCacheFileRequest();
    virtual ~UploadCacheFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadCacheFileRequest members

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 是否覆盖同名文件
    /// </summary>

    bool isOverride() const;
    bool overrideIsSet() const;
    void unsetoverride();
    void setOverride(bool value);

    /// <summary>
    /// 附件挂载资源类型
    /// </summary>

    std::string getParentType() const;
    bool parentTypeIsSet() const;
    void unsetparentType();
    void setParentType(const std::string& value);

    /// <summary>
    /// 附件挂载资源Uri
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UploadCacheFileRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UploadCacheFileRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    bool override_;
    bool overrideIsSet_;
    std::string parentType_;
    bool parentTypeIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    UploadCacheFileRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UploadCacheFileRequest& dereference_from_shared_ptr(std::shared_ptr<UploadCacheFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadCacheFileRequest_H_
