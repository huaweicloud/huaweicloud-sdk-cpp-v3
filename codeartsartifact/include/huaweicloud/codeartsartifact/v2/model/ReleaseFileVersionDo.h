
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ReleaseFileVersionDo_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ReleaseFileVersionDo_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布文件版本信息
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ReleaseFileVersionDo
    : public ModelBase
{
public:
    ReleaseFileVersionDo();
    virtual ~ReleaseFileVersionDo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReleaseFileVersionDo members

    /// <summary>
    /// 发布库文件的版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 发布库文件的路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 发布库文件的下载链接
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ReleaseFileVersionDo_H_
