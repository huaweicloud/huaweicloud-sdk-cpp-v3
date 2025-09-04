
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BatchUpdateJobRolePermissionRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BatchUpdateJobRolePermissionRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/RolePermissionsRequestBody.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BatchUpdateJobRolePermissionRequest
    : public ModelBase
{
public:
    BatchUpdateJobRolePermissionRequest();
    virtual ~BatchUpdateJobRolePermissionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateJobRolePermissionRequest members

    /// <summary>
    /// 
    /// </summary>

    RolePermissionsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RolePermissionsRequestBody& value);


protected:
    RolePermissionsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateJobRolePermissionRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateJobRolePermissionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BatchUpdateJobRolePermissionRequest_H_
