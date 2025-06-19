
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteKeystorePermissionRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteKeystorePermissionRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DeleteKeystorePermissionRequest
    : public ModelBase
{
public:
    DeleteKeystorePermissionRequest();
    virtual ~DeleteKeystorePermissionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteKeystorePermissionRequest members

    /// <summary>
    /// 文件管理权限ID
    /// </summary>

    std::string getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(const std::string& value);


protected:
    std::string permissionId_;
    bool permissionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteKeystorePermissionRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteKeystorePermissionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteKeystorePermissionRequest_H_
