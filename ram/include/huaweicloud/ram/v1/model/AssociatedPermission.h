
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociatedPermission_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociatedPermission_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 描述与资源共享关联的权限的对象。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  AssociatedPermission
    : public ModelBase
{
public:
    AssociatedPermission();
    virtual ~AssociatedPermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociatedPermission members

    /// <summary>
    /// 权限的ID。
    /// </summary>

    std::string getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(const std::string& value);

    /// <summary>
    /// 共享资源权限的名称。
    /// </summary>

    std::string getPermissionName() const;
    bool permissionNameIsSet() const;
    void unsetpermissionName();
    void setPermissionName(const std::string& value);

    /// <summary>
    /// 权限适用的资源类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 权限的当前状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建权限的时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 最后一次更新权限的时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string permissionId_;
    bool permissionIdIsSet_;
    std::string permissionName_;
    bool permissionNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociatedPermission_H_
