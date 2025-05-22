
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildInfoRecord_commit_info_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildInfoRecord_commit_info_H_


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
/// 代码提交信息
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildInfoRecord_commit_info
    : public ModelBase
{
public:
    BuildInfoRecord_commit_info();
    virtual ~BuildInfoRecord_commit_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildInfoRecord_commit_info members

    /// <summary>
    /// 代码提交的commit id
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// 提交时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


protected:
    std::string commitId_;
    bool commitIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildInfoRecord_commit_info_H_
