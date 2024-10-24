
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ListPermissionsRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ListPermissionsRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ListPermissionsRequest
    : public ModelBase
{
public:
    ListPermissionsRequest();
    virtual ~ListPermissionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPermissionsRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 分页页面的最大值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 页面标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 资源类型的名称。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 权限类型。RAM_MANAGED表示RAM托管的权限，CUSTOMER_MANAGED表示租户创建的自定义的权限，ALL表示所有的权限。
    /// </summary>

    std::string getPermissionType() const;
    bool permissionTypeIsSet() const;
    void unsetpermissionType();
    void setPermissionType(const std::string& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string permissionType_;
    bool permissionTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPermissionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPermissionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ListPermissionsRequest_H_
