
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetsResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetsResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <huaweicloud/identitycenter/v1/model/PermissionSetDto.h>
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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListPermissionSetsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPermissionSetsResponse();
    virtual ~ListPermissionSetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPermissionSetsResponse members

    /// <summary>
    /// 权限集列表
    /// </summary>

    std::vector<PermissionSetDto>& getPermissionSets();
    bool permissionSetsIsSet() const;
    void unsetpermissionSets();
    void setPermissionSets(const std::vector<PermissionSetDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<PermissionSetDto> permissionSets_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetsResponse_H_
