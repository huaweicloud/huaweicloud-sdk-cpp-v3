
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_PermissionSet_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_PermissionSet_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// IAM身份中心的权限集相关信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  PermissionSet
    : public ModelBase
{
public:
    PermissionSet();
    virtual ~PermissionSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionSet members

    /// <summary>
    /// 权限集ID。
    /// </summary>

    std::string getPermissionSetId() const;
    bool permissionSetIdIsSet() const;
    void unsetpermissionSetId();
    void setPermissionSetId(const std::string& value);

    /// <summary>
    /// 权限集名称。
    /// </summary>

    std::string getPermissionSetName() const;
    bool permissionSetNameIsSet() const;
    void unsetpermissionSetName();
    void setPermissionSetName(const std::string& value);

    /// <summary>
    /// 权限集描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string permissionSetId_;
    bool permissionSetIdIsSet_;
    std::string permissionSetName_;
    bool permissionSetNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_PermissionSet_H_
