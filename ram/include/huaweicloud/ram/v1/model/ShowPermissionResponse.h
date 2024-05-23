
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowPermissionResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowPermissionResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/Permission.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ShowPermissionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPermissionResponse();
    virtual ~ShowPermissionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPermissionResponse members

    /// <summary>
    /// 
    /// </summary>

    Permission getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const Permission& value);


protected:
    Permission permission_;
    bool permissionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowPermissionResponse_H_
