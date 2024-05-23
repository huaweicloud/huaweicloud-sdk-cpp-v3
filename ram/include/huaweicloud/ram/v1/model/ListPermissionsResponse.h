
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ListPermissionsResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ListPermissionsResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <huaweicloud/ram/v1/model/PermissionSummary.h>
#include <vector>

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
class HUAWEICLOUD_RAM_V1_EXPORT  ListPermissionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPermissionsResponse();
    virtual ~ListPermissionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPermissionsResponse members

    /// <summary>
    /// 共享资源权限的详细信息列表。
    /// </summary>

    std::vector<PermissionSummary>& getPermissions();
    bool permissionsIsSet() const;
    void unsetpermissions();
    void setPermissions(const std::vector<PermissionSummary>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<PermissionSummary> permissions_;
    bool permissionsIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ListPermissionsResponse_H_
