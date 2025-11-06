
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdatePermissionDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdatePermissionDetail_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdatePermissionDetail
    : public ModelBase
{
public:
    UpdatePermissionDetail();
    virtual ~UpdatePermissionDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePermissionDetail members

    /// <summary>
    /// **参数解释：** 权限点id **取值范围：** 不涉及。
    /// </summary>

    int32_t getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(int32_t value);

    /// <summary>
    /// **参数解释：** 权限点状态 **取值范围：** - true, 开启。 - false, 关闭。  
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    int32_t permissionId_;
    bool permissionIdIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdatePermissionDetail_H_
