
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupPermissionResourcesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupPermissionResourcesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/PermissionResourcesDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListGroupPermissionResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGroupPermissionResourcesResponse();
    virtual ~ListGroupPermissionResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupPermissionResourcesResponse members

    /// <summary>
    /// **参数解释：** 是否使用项目权限。
    /// </summary>

    bool isUseProjectPermission() const;
    bool useProjectPermissionIsSet() const;
    void unsetuseProjectPermission();
    void setUseProjectPermission(bool value);

    /// <summary>
    /// **参数解释：** 资源列表。
    /// </summary>

    std::vector<PermissionResourcesDto>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<PermissionResourcesDto>& value);


protected:
    bool useProjectPermission_;
    bool useProjectPermissionIsSet_;
    std::vector<PermissionResourcesDto> resources_;
    bool resourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupPermissionResourcesResponse_H_
