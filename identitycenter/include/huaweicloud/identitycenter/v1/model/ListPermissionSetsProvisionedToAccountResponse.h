
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetsProvisionedToAccountResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetsProvisionedToAccountResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListPermissionSetsProvisionedToAccountResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPermissionSetsProvisionedToAccountResponse();
    virtual ~ListPermissionSetsProvisionedToAccountResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPermissionSetsProvisionedToAccountResponse members

    /// <summary>
    /// 满足查询条件的权限集ID列表
    /// </summary>

    std::vector<std::string>& getPermissionSets();
    bool permissionSetsIsSet() const;
    void unsetpermissionSets();
    void setPermissionSets(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<std::string> permissionSets_;
    bool permissionSetsIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetsProvisionedToAccountResponse_H_
