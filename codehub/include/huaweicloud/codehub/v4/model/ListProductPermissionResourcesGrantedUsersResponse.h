
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProductPermissionResourcesGrantedUsersResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProductPermissionResourcesGrantedUsersResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codehub/v4/model/GrantedUsersDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListProductPermissionResourcesGrantedUsersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProductPermissionResourcesGrantedUsersResponse();
    virtual ~ListProductPermissionResourcesGrantedUsersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProductPermissionResourcesGrantedUsersResponse members

    /// <summary>
    /// **参数解释：** 成员列表。
    /// </summary>

    std::vector<GrantedUsersDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<GrantedUsersDto>& value);


protected:
    std::vector<GrantedUsersDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProductPermissionResourcesGrantedUsersResponse_H_
