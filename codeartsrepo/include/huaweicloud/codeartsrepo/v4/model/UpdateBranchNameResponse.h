
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateBranchNameResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateBranchNameResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateBranchNameResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateBranchNameResponse();
    virtual ~UpdateBranchNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBranchNameResponse members

    /// <summary>
    /// **参数解释：** 旧分支名称。  **约束限制：** 不支持以 - . refs/heads/ refs/remotes/ 开头，不支持空格 [ \\ &lt; ~ ^ : ? * ! ( ) &#39; \&quot; | 等特殊字符，不支持以. / .lock结尾。  **取值范围：** 字符串长度不少于1，不超过200。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOldBranchName() const;
    bool oldBranchNameIsSet() const;
    void unsetoldBranchName();
    void setOldBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 旧分支最新提交ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOldBranchCommitId() const;
    bool oldBranchCommitIdIsSet() const;
    void unsetoldBranchCommitId();
    void setOldBranchCommitId(const std::string& value);

    /// <summary>
    /// **参数解释：** 新分支名称。  **约束限制：** 不支持以 - . refs/heads/ refs/remotes/ 开头，不支持空格 [ \\ &lt; ~ ^ : ? * ! ( ) &#39; \&quot; | 等特殊字符，不支持以. / .lock结尾。  **取值范围：** 字符串长度不少于1，不超过200。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNewBranchName() const;
    bool newBranchNameIsSet() const;
    void unsetnewBranchName();
    void setNewBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 新分支最新提交ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNewBranchCommitId() const;
    bool newBranchCommitIdIsSet() const;
    void unsetnewBranchCommitId();
    void setNewBranchCommitId(const std::string& value);


protected:
    std::string oldBranchName_;
    bool oldBranchNameIsSet_;
    std::string oldBranchCommitId_;
    bool oldBranchCommitIdIsSet_;
    std::string newBranchName_;
    bool newBranchNameIsSet_;
    std::string newBranchCommitId_;
    bool newBranchCommitIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateBranchNameResponse_H_
