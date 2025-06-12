
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Repositories_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Repositories_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Repositories_result
    : public ModelBase
{
public:
    Repositories_result();
    virtual ~Repositories_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Repositories_result members

    /// <summary>
    /// 最后一次仓库名称
    /// </summary>

    std::string getLatest() const;
    bool latestIsSet() const;
    void unsetlatest();
    void setLatest(const std::string& value);

    /// <summary>
    /// 本次任务的构建步骤详情，返回的步骤为页面可见步骤
    /// </summary>

    std::vector<std::string>& getRepositories();
    bool repositoriesIsSet() const;
    void unsetrepositories();
    void setRepositories(const std::vector<std::string>& value);


protected:
    std::string latest_;
    bool latestIsSet_;
    std::vector<std::string> repositories_;
    bool repositoriesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Repositories_result_H_
