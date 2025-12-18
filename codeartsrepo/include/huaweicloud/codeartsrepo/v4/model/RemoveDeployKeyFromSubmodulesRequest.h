
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RemoveDeployKeyFromSubmodulesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RemoveDeployKeyFromSubmodulesRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RemoveDeployKeyFromSubmodulesRequest
    : public ModelBase
{
public:
    RemoveDeployKeyFromSubmodulesRequest();
    virtual ~RemoveDeployKeyFromSubmodulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveDeployKeyFromSubmodulesRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：**  部署密钥 ID。
    /// </summary>

    int32_t getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(int32_t value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t keyId_;
    bool keyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemoveDeployKeyFromSubmodulesRequest& dereference_from_shared_ptr(std::shared_ptr<RemoveDeployKeyFromSubmodulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RemoveDeployKeyFromSubmodulesRequest_H_
