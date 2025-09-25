
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowCommitRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowCommitRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowCommitRequest
    : public ModelBase
{
public:
    ShowCommitRequest();
    virtual ~ShowCommitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCommitRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 分支名、tag名、提交ID。
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否包含状态信息。 **取值范围：** - true，包含。 - false，不包含。
    /// </summary>

    bool isStats() const;
    bool statsIsSet() const;
    void unsetstats();
    void setStats(bool value);

    /// <summary>
    /// **参数解释：** 是否包含代码变化信息。 **取值范围：** - true，包含。 - false，不包含。
    /// </summary>

    bool isShowCodeChanges() const;
    bool showCodeChangesIsSet() const;
    void unsetshowCodeChanges();
    void setShowCodeChanges(bool value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string sha_;
    bool shaIsSet_;
    bool stats_;
    bool statsIsSet_;
    bool showCodeChanges_;
    bool showCodeChangesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCommitRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCommitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowCommitRequest_H_
