
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadKeystoreRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadKeystoreRequest_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DownloadKeystoreRequest
    : public ModelBase
{
public:
    DownloadKeystoreRequest();
    virtual ~DownloadKeystoreRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DownloadKeystoreRequest members

    /// <summary>
    /// 下载的文件名称
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 租户ID。32位数字、小写字母组合
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadKeystoreRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadKeystoreRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadKeystoreRequest_H_
