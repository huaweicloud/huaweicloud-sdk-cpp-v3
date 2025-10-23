
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateUserGroupPermissionsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateUserGroupPermissionsRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/GroupPermissionsDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BatchValidateUserGroupPermissionsRequest
    : public ModelBase
{
public:
    BatchValidateUserGroupPermissionsRequest();
    virtual ~BatchValidateUserGroupPermissionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchValidateUserGroupPermissionsRequest members

    /// <summary>
    /// **参数解释：** 代码组权限列表。
    /// </summary>

    std::vector<GroupPermissionsDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<GroupPermissionsDto>& value);


protected:
    std::vector<GroupPermissionsDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchValidateUserGroupPermissionsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchValidateUserGroupPermissionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateUserGroupPermissionsRequest_H_
