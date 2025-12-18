
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateRepositoryCommitRuleRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateRepositoryCommitRuleRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CommitRuleUpdateBodyDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateRepositoryCommitRuleRequest
    : public ModelBase
{
public:
    UpdateRepositoryCommitRuleRequest();
    virtual ~UpdateRepositoryCommitRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepositoryCommitRuleRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库提交规则ID。 **约束限制：** 不涉及。 **取值范围：** 1-2147483647 **默认取值：** 不涉及。
    /// </summary>

    int32_t getCommitRuleId() const;
    bool commitRuleIdIsSet() const;
    void unsetcommitRuleId();
    void setCommitRuleId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CommitRuleUpdateBodyDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CommitRuleUpdateBodyDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t commitRuleId_;
    bool commitRuleIdIsSet_;
    CommitRuleUpdateBodyDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRepositoryCommitRuleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRepositoryCommitRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateRepositoryCommitRuleRequest_H_
