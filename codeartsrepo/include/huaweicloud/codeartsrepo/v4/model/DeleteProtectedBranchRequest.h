
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeleteProtectedBranchRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeleteProtectedBranchRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DeleteProtectedBranchRequest
    : public ModelBase
{
public:
    DeleteProtectedBranchRequest();
    virtual ~DeleteProtectedBranchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteProtectedBranchRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 保护分支名或通配符列表。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteProtectedBranchRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteProtectedBranchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeleteProtectedBranchRequest_H_
