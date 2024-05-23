
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_DisassociatePermissionReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_DisassociatePermissionReqBody_H_


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
/// The request body of the DisassociateResourceSharePermission operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  DisassociatePermissionReqBody
    : public ModelBase
{
public:
    DisassociatePermissionReqBody();
    virtual ~DisassociatePermissionReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociatePermissionReqBody members

    /// <summary>
    /// 共享资源权限的ID。
    /// </summary>

    std::string getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(const std::string& value);


protected:
    std::string permissionId_;
    bool permissionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_DisassociatePermissionReqBody_H_
