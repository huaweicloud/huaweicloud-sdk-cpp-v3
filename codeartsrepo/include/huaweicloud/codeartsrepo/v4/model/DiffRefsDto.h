
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiffRefsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiffRefsDto_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DiffRefsDto
    : public ModelBase
{
public:
    DiffRefsDto();
    virtual ~DiffRefsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiffRefsDto members

    /// <summary>
    /// **参数解释：** 目标分支的基准提交哈希。 **取值范围：** 不涉及。
    /// </summary>

    std::string getBaseSha() const;
    bool baseShaIsSet() const;
    void unsetbaseSha();
    void setBaseSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 源分支的最新提交哈希。 **取值范围：** 不涉及。
    /// </summary>

    std::string getHeadSha() const;
    bool headShaIsSet() const;
    void unsetheadSha();
    void setHeadSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求开始时的提交哈希，通常与base_sha相同。 **取值范围：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiffRefsDto_H_
