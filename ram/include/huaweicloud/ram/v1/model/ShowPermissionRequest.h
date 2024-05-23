
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowPermissionRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowPermissionRequest_H_


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
class HUAWEICLOUD_RAM_V1_EXPORT  ShowPermissionRequest
    : public ModelBase
{
public:
    ShowPermissionRequest();
    virtual ~ShowPermissionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPermissionRequest members

    /// <summary>
    /// 共享资源权限的ID。
    /// </summary>

    std::string getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(const std::string& value);

    /// <summary>
    /// 资源权限版本。
    /// </summary>

    int32_t getPermissionVersion() const;
    bool permissionVersionIsSet() const;
    void unsetpermissionVersion();
    void setPermissionVersion(int32_t value);


protected:
    std::string permissionId_;
    bool permissionIdIsSet_;
    int32_t permissionVersion_;
    bool permissionVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPermissionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPermissionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowPermissionRequest_H_
