
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Scm_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Scm_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 代码信息
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Scm
    : public ModelBase
{
public:
    Scm();
    virtual ~Scm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Scm members

    /// <summary>
    /// 代码Tag
    /// </summary>

    std::string getBuildTag() const;
    bool buildTagIsSet() const;
    void unsetbuildTag();
    void setBuildTag(const std::string& value);

    /// <summary>
    /// 代码提交ID
    /// </summary>

    std::string getBuildCommitId() const;
    bool buildCommitIdIsSet() const;
    void unsetbuildCommitId();
    void setBuildCommitId(const std::string& value);


protected:
    std::string buildTag_;
    bool buildTagIsSet_;
    std::string buildCommitId_;
    bool buildCommitIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Scm_H_
