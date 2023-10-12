
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListUserResourcesResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListUserResourcesResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/UserResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListUserResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUserResourcesResponse();
    virtual ~ListUserResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserResourcesResponse members

    /// <summary>
    /// 最近30天操作事件的用户列表。
    /// </summary>

    std::vector<UserResource>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UserResource>& value);


protected:
    std::vector<UserResource> users_;
    bool usersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListUserResourcesResponse_H_
