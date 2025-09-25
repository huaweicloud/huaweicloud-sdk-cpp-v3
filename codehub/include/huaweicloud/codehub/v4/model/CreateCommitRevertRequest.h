
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCommitRevertRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCommitRevertRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/CommitRevetOrCherryPickDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateCommitRevertRequest
    : public ModelBase
{
public:
    CreateCommitRevertRequest();
    virtual ~CreateCommitRevertRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCommitRevertRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 回退的CommitId **取值范围：** 字符串长度40。
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommitRevetOrCherryPickDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CommitRevetOrCherryPickDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string sha_;
    bool shaIsSet_;
    CommitRevetOrCherryPickDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCommitRevertRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCommitRevertRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCommitRevertRequest_H_
