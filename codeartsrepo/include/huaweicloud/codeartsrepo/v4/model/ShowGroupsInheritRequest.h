
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupsInheritRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupsInheritRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowGroupsInheritRequest
    : public ModelBase
{
public:
    ShowGroupsInheritRequest();
    virtual ~ShowGroupsInheritRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupsInheritRequest members

    /// <summary>
    /// **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// **参数解释：** 必填项，设置类型protected_branches保护分支 protected_tags保护tag push_rules推送规则 merge_requests合并请求 mr_branch_policies合并分支 reviews检视意见 e2e_settings e2e设置 webhook_settings hook设置 deploy_keys 部署key watermark水印 repository_settings仓库设置。
    /// </summary>

    std::string getSettingType() const;
    bool settingTypeIsSet() const;
    void unsetsettingType();
    void setSettingType(const std::string& value);


protected:
    int32_t groupId_;
    bool groupIdIsSet_;
    std::string settingType_;
    bool settingTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowGroupsInheritRequest& dereference_from_shared_ptr(std::shared_ptr<ShowGroupsInheritRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupsInheritRequest_H_
