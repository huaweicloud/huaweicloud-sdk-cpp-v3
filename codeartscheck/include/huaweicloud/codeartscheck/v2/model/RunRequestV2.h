
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunRequestV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunRequestV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 代码仓信息
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RunRequestV2
    : public ModelBase
{
public:
    RunRequestV2();
    virtual ~RunRequestV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunRequestV2 members

    /// <summary>
    /// **参数解释：** 废弃参数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃参数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetaccessToken();
    void setAccessToken(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃参数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃参数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getGitBranch() const;
    bool gitBranchIsSet() const;
    void unsetgitBranch();
    void setGitBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓拉取MR代码的方式，推荐在检查阶段拉取MR代码失败时使用此参数进行拉取方式的指定。 **约束限制：** 不涉及。 **取值范围：** - pull：以pull/xx/xx方式进行拉取。 - merge_request：以merge_request/xx/xx方式进行拉取。 **默认取值：** 后台自动识别代码仓类型以进行MR代码的拉取。 gitee仓：以pull/xx/xx方式进行拉取。 非gitee仓：以merge_request/xx/xx方式进行拉取。
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);


protected:
    std::string username_;
    bool usernameIsSet_;
    std::string accessToken_;
    bool accessTokenIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string gitBranch_;
    bool gitBranchIsSet_;
    std::string ref_;
    bool refIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunRequestV2_H_
