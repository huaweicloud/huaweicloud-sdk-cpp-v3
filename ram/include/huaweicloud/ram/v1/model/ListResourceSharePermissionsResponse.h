
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceSharePermissionsResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceSharePermissionsResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <huaweicloud/ram/v1/model/AssociatedPermission.h>
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
class HUAWEICLOUD_RAM_V1_EXPORT  ListResourceSharePermissionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResourceSharePermissionsResponse();
    virtual ~ListResourceSharePermissionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceSharePermissionsResponse members

    /// <summary>
    /// 资源共享实例关联的共享资源权限信息列表。
    /// </summary>

    std::vector<AssociatedPermission>& getAssociatedPermissions();
    bool associatedPermissionsIsSet() const;
    void unsetassociatedPermissions();
    void setAssociatedPermissions(const std::vector<AssociatedPermission>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<AssociatedPermission> associatedPermissions_;
    bool associatedPermissionsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceSharePermissionsResponse_H_
