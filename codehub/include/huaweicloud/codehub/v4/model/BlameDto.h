
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BlameDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BlameDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/LineContentDto.h>
#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/RepositoryCommitDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BlameDto
    : public ModelBase
{
public:
    BlameDto();
    virtual ~BlameDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BlameDto members

    /// <summary>
    /// 
    /// </summary>

    RepositoryCommitDto getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const RepositoryCommitDto& value);

    /// <summary>
    /// **参数解释：** 头像链接 **取值范围：** 不涉及。
    /// </summary>

    std::string getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetavatarUrl();
    void setAvatarUrl(const std::string& value);

    /// <summary>
    /// 行信息
    /// </summary>

    std::vector<LineContentDto>& getLines();
    bool linesIsSet() const;
    void unsetlines();
    void setLines(const std::vector<LineContentDto>& value);

    /// <summary>
    /// **参数解释：** 昵称 **取值范围：** 不涉及。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    RepositoryCommitDto commit_;
    bool commitIsSet_;
    std::string avatarUrl_;
    bool avatarUrlIsSet_;
    std::vector<LineContentDto> lines_;
    bool linesIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BlameDto_H_
