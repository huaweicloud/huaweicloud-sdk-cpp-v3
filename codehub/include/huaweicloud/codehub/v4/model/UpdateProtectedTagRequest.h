
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProtectedTagRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProtectedTagRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/RepositoryProtectedTagActionBodyDto.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateProtectedTagRequest
    : public ModelBase
{
public:
    UpdateProtectedTagRequest();
    virtual ~UpdateProtectedTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProtectedTagRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 保护分Tag或通配符列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTagName() const;
    bool tagNameIsSet() const;
    void unsettagName();
    void setTagName(const std::string& value);

    /// <summary>
    /// 保护Tag权限列表
    /// </summary>

    std::vector<RepositoryProtectedTagActionBodyDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<RepositoryProtectedTagActionBodyDto>& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string tagName_;
    bool tagNameIsSet_;
    std::vector<RepositoryProtectedTagActionBodyDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateProtectedTagRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateProtectedTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProtectedTagRequest_H_
