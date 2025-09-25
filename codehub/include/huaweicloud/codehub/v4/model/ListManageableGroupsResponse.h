
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListManageableGroupsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListManageableGroupsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ManageableGroupDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListManageableGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListManageableGroupsResponse();
    virtual ~ListManageableGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListManageableGroupsResponse members

    /// <summary>
    /// 拥有管理权限的代码组列表
    /// </summary>

    std::vector<ManageableGroupDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ManageableGroupDto>& value);


protected:
    std::vector<ManageableGroupDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListManageableGroupsResponse_H_
