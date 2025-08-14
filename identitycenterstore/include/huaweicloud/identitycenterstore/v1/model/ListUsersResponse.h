
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListUsersResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListUsersResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/UserDto.h>
#include <huaweicloud/identitycenterstore/v1/model/PageInfoDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  ListUsersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUsersResponse();
    virtual ~ListUsersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUsersResponse members

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);

    /// <summary>
    /// IdentityStore中的用户列表。
    /// </summary>

    std::vector<UserDto>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UserDto>& value);


protected:
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;
    std::vector<UserDto> users_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListUsersResponse_H_
