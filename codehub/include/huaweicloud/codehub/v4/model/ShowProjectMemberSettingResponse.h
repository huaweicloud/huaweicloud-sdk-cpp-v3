
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowProjectMemberSettingResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowProjectMemberSettingResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/RoleSyncDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowProjectMemberSettingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectMemberSettingResponse();
    virtual ~ShowProjectMemberSettingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectMemberSettingResponse members

    /// <summary>
    /// **参数解释：** 项目id **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数解释：** 同步开关
    /// </summary>

    bool isSyncEnabled() const;
    bool syncEnabledIsSet() const;
    void unsetsyncEnabled();
    void setSyncEnabled(bool value);

    /// <summary>
    /// **参数解释：** 同步所有角色开关
    /// </summary>

    bool isSyncAllRoleEnabled() const;
    bool syncAllRoleEnabledIsSet() const;
    void unsetsyncAllRoleEnabled();
    void setSyncAllRoleEnabled(bool value);

    /// <summary>
    /// **参数解释：** 角色同步
    /// </summary>

    std::vector<RoleSyncDto>& getRoleSync();
    bool roleSyncIsSet() const;
    void unsetroleSync();
    void setRoleSync(const std::vector<RoleSyncDto>& value);


protected:
    std::string productId_;
    bool productIdIsSet_;
    bool syncEnabled_;
    bool syncEnabledIsSet_;
    bool syncAllRoleEnabled_;
    bool syncAllRoleEnabledIsSet_;
    std::vector<RoleSyncDto> roleSync_;
    bool roleSyncIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowProjectMemberSettingResponse_H_
