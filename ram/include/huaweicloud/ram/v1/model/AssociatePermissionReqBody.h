
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociatePermissionReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociatePermissionReqBody_H_


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
/// The request body of the AssociateResourceSharePermission operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  AssociatePermissionReqBody
    : public ModelBase
{
public:
    AssociatePermissionReqBody();
    virtual ~AssociatePermissionReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociatePermissionReqBody members

    /// <summary>
    /// 指定特定的权限替换或绑定到与资源共享实例关联的现有资源类型。设置为\&quot;true\&quot;可将相同的资源类型的权限替换为当前权限。设置为\&quot;false\&quot;将权限绑定到当前资源类型。默认值为\&quot;false\&quot;。资源共享实例中的每个资源类型只能绑定一个权限。如果资源共享实例中已具有指定资源类型的权限，并且将\&quot;replace\&quot;设置为\&quot;false\&quot;，则操作返回错误。这有助于防止意外覆盖权限。
    /// </summary>

    bool isReplace() const;
    bool replaceIsSet() const;
    void unsetreplace();
    void setReplace(bool value);

    /// <summary>
    /// 共享资源权限的ID。
    /// </summary>

    std::string getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(const std::string& value);


protected:
    bool replace_;
    bool replaceIsSet_;
    std::string permissionId_;
    bool permissionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociatePermissionReqBody_H_
