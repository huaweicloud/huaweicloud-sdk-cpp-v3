
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneIdentityCenterResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneIdentityCenterResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rgc/v1/model/IdentityCenterGroup.h>
#include <huaweicloud/rgc/v1/model/PermissionSet.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowLandingZoneIdentityCenterResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLandingZoneIdentityCenterResponse();
    virtual ~ShowLandingZoneIdentityCenterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLandingZoneIdentityCenterResponse members

    /// <summary>
    /// Identity Center目录ID。
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// Identity Center登录URL。
    /// </summary>

    std::string getUserPortalUrl() const;
    bool userPortalUrlIsSet() const;
    void unsetuserPortalUrl();
    void setUserPortalUrl(const std::string& value);

    /// <summary>
    /// Identity Center权限集。
    /// </summary>

    std::vector<PermissionSet>& getPermissionSets();
    bool permissionSetsIsSet() const;
    void unsetpermissionSets();
    void setPermissionSets(const std::vector<PermissionSet>& value);

    /// <summary>
    /// Identity Center用户组。
    /// </summary>

    std::vector<IdentityCenterGroup>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const std::vector<IdentityCenterGroup>& value);


protected:
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string userPortalUrl_;
    bool userPortalUrlIsSet_;
    std::vector<PermissionSet> permissionSets_;
    bool permissionSetsIsSet_;
    std::vector<IdentityCenterGroup> groups_;
    bool groupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneIdentityCenterResponse_H_
