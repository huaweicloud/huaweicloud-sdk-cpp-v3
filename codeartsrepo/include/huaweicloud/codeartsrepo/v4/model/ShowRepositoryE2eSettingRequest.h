
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryE2eSettingRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryE2eSettingRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepositoryE2eSettingRequest
    : public ModelBase
{
public:
    ShowRepositoryE2eSettingRequest();
    virtual ~ShowRepositoryE2eSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryE2eSettingRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 是否查询生效的E2E配置。 **取值范围：** true：查询仓库实际生效的E2E配置，比如继承自代码组或者项目的E2E设置，false：查询仓库自身的E2E配置。
    /// </summary>

    bool isTakeEffect() const;
    bool takeEffectIsSet() const;
    void unsettakeEffect();
    void setTakeEffect(bool value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    bool takeEffect_;
    bool takeEffectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRepositoryE2eSettingRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRepositoryE2eSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryE2eSettingRequest_H_
