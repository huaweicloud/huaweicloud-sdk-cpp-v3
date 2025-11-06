
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiffRefDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiffRefDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求变更commit，包含base_sha、start_sha、head_sha
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DiffRefDto
    : public ModelBase
{
public:
    DiffRefDto();
    virtual ~DiffRefDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiffRefDto members

    /// <summary>
    /// 目标分支以及源分支的共同祖先commitId
    /// </summary>

    std::string getBaseSha() const;
    bool baseShaIsSet() const;
    void unsetbaseSha();
    void setBaseSha(const std::string& value);

    /// <summary>
    /// 源分支的最新commitId
    /// </summary>

    std::string getHeadSha() const;
    bool headShaIsSet() const;
    void unsetheadSha();
    void setHeadSha(const std::string& value);

    /// <summary>
    /// 目标分支的最新commitId
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);


protected:
    std::string baseSha_;
    bool baseShaIsSet_;
    std::string headSha_;
    bool headShaIsSet_;
    std::string startSha_;
    bool startShaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiffRefDto_H_
