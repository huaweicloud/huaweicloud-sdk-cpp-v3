
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UserRefPermissionBasicDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UserRefPermissionBasicDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UserRefPermissionBasicDto
    : public ModelBase
{
public:
    UserRefPermissionBasicDto();
    virtual ~UserRefPermissionBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserRefPermissionBasicDto members

    /// <summary>
    /// **参数解释：** 是否有权限。 **取值范围：** true：有权限，false：没权限
    /// </summary>

    bool isHasPermission() const;
    bool hasPermissionIsSet() const;
    void unsethasPermission();
    void setHasPermission(bool value);

    /// <summary>
    /// **参数解释：** 是否保护分支。 **取值范围：** true：是保护分支，false：非保护分支
    /// </summary>

    bool isIsProtect() const;
    bool isProtectIsSet() const;
    void unsetisProtect();
    void setIsProtect(bool value);


protected:
    bool hasPermission_;
    bool hasPermissionIsSet_;
    bool isProtect_;
    bool isProtectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UserRefPermissionBasicDto_H_
