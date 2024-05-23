
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_PermissionSummary_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_PermissionSummary_H_


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
/// 资源共享及其指定类型的任何资源关联的RAM权限的信息。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  PermissionSummary
    : public ModelBase
{
public:
    PermissionSummary();
    virtual ~PermissionSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionSummary members

    /// <summary>
    /// 权限ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 权限名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 此权限适用的资源类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 该权限是否是此资源类型的默认权限。
    /// </summary>

    bool isIsResourceTypeDefault() const;
    bool isResourceTypeDefaultIsSet() const;
    void unsetisResourceTypeDefault();
    void setIsResourceTypeDefault(bool value);

    /// <summary>
    /// 权限的创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 上次更新权限的时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 权限URN。
    /// </summary>

    std::string getPermissionUrn() const;
    bool permissionUrnIsSet() const;
    void unsetpermissionUrn();
    void setPermissionUrn(const std::string& value);

    /// <summary>
    /// 权限类型，RAM托管或者租户自定义权限。
    /// </summary>

    std::string getPermissionType() const;
    bool permissionTypeIsSet() const;
    void unsetpermissionType();
    void setPermissionType(const std::string& value);

    /// <summary>
    /// 是否是默认版本。
    /// </summary>

    bool isDefaultVersion() const;
    bool defaultVersionIsSet() const;
    void unsetdefaultVersion();
    void setDefaultVersion(bool value);

    /// <summary>
    /// 权限版本。
    /// </summary>

    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int32_t value);

    /// <summary>
    /// 权限的状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    bool isResourceTypeDefault_;
    bool isResourceTypeDefaultIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string permissionUrn_;
    bool permissionUrnIsSet_;
    std::string permissionType_;
    bool permissionTypeIsSet_;
    bool defaultVersion_;
    bool defaultVersionIsSet_;
    int32_t version_;
    bool versionIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_PermissionSummary_H_
