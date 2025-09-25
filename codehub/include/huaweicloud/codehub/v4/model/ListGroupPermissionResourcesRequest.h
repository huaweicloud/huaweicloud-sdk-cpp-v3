
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupPermissionResourcesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupPermissionResourcesRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListGroupPermissionResourcesRequest
    : public ModelBase
{
public:
    ListGroupPermissionResourcesRequest();
    virtual ~ListGroupPermissionResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupPermissionResourcesRequest members

    /// <summary>
    /// **参数解释：** 创建资源类型。 **约束限制：** - group 代码组。 - project  项目。 - all 代码组和项目
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);


protected:
    std::string scope_;
    bool scopeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGroupPermissionResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<ListGroupPermissionResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupPermissionResourcesRequest_H_
