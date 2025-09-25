
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVotesDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVotesDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求打分记录(单人)
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MergeRequestVotesDto
    : public ModelBase
{
public:
    MergeRequestVotesDto();
    virtual ~MergeRequestVotesDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestVotesDto members

    /// <summary>
    /// **参数解释：** 打分记录的id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 分数。
    /// </summary>

    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(int32_t value);

    /// <summary>
    /// **参数解释：** 作者名。
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者用户名。
    /// </summary>

    std::string getAuthorUsername() const;
    bool authorUsernameIsSet() const;
    void unsetauthorUsername();
    void setAuthorUsername(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 最后一次提交记录的id。
    /// </summary>

    std::string getLastCommittedId() const;
    bool lastCommittedIdIsSet() const;
    void unsetlastCommittedId();
    void setLastCommittedId(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者id。
    /// </summary>

    int32_t getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(int32_t value);

    /// <summary>
    /// **参数解释：** 作者头像url。
    /// </summary>

    std::string getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetavatarUrl();
    void setAvatarUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者昵称。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者租户名称。
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t score_;
    bool scoreIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string authorUsername_;
    bool authorUsernameIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string lastCommittedId_;
    bool lastCommittedIdIsSet_;
    int32_t authorId_;
    bool authorIdIsSet_;
    std::string avatarUrl_;
    bool avatarUrlIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVotesDto_H_
