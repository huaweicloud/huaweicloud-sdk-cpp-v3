
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryPushEventDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryPushEventDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/RepositoryEventAuthorDto.h>
#include <huaweicloud/codehub/v4/model/BaseEventDto.h>
#include <huaweicloud/codehub/v4/model/PushEventPayloadDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 推送动态。
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryPushEventDto
    : public ModelBase
{
public:
    RepositoryPushEventDto();
    virtual ~RepositoryPushEventDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryPushEventDto members

    /// <summary>
    /// **参数解释：** 操作名称。 - pushed to，表示推送。 - pushed new，表示推送并新建。 - deleted，表示删除。
    /// </summary>

    std::string getActionName() const;
    bool actionNameIsSet() const;
    void unsetactionName();
    void setActionName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RepositoryEventAuthorDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const RepositoryEventAuthorDto& value);

    /// <summary>
    /// **参数解释：** 触发者ID。
    /// </summary>

    int32_t getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(int32_t value);

    /// <summary>
    /// **参数解释：** 触发者名称。
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
    /// **参数解释：** 仓库ID。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库名。
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PushEventPayloadDto getPushData() const;
    bool pushDataIsSet() const;
    void unsetpushData();
    void setPushData(const PushEventPayloadDto& value);


protected:
    std::string actionName_;
    bool actionNameIsSet_;
    RepositoryEventAuthorDto author_;
    bool authorIsSet_;
    int32_t authorId_;
    bool authorIdIsSet_;
    std::string authorUsername_;
    bool authorUsernameIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    PushEventPayloadDto pushData_;
    bool pushDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryPushEventDto_H_
