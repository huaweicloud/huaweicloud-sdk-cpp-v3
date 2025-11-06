
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PersonalPushEventDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PersonalPushEventDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/PushEventPayloadDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositorySimpleDto.h>
#include <huaweicloud/codeartsrepo/v4/model/PersonalEventAuthorDto.h>
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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  PersonalPushEventDto
    : public ModelBase
{
public:
    PersonalPushEventDto();
    virtual ~PersonalPushEventDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PersonalPushEventDto members

    /// <summary>
    /// 
    /// </summary>

    PersonalEventAuthorDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const PersonalEventAuthorDto& value);

    /// <summary>
    /// 
    /// </summary>

    RepositorySimpleDto getRepository() const;
    bool repositoryIsSet() const;
    void unsetrepository();
    void setRepository(const RepositorySimpleDto& value);

    /// <summary>
    /// 
    /// </summary>

    PushEventPayloadDto getPushData() const;
    bool pushDataIsSet() const;
    void unsetpushData();
    void setPushData(const PushEventPayloadDto& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **约束限制：** 不涉及
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


protected:
    PersonalEventAuthorDto author_;
    bool authorIsSet_;
    RepositorySimpleDto repository_;
    bool repositoryIsSet_;
    PushEventPayloadDto pushData_;
    bool pushDataIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PersonalPushEventDto_H_
