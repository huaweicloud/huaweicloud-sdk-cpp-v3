
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuthorizedDbUsersResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuthorizedDbUsersResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/UserWithPrivilege.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListAuthorizedDbUsersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuthorizedDbUsersResponse();
    virtual ~ListAuthorizedDbUsersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuthorizedDbUsersResponse members

    /// <summary>
    /// 用户及相关权限。
    /// </summary>

    std::vector<UserWithPrivilege>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UserWithPrivilege>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<UserWithPrivilege> users_;
    bool usersIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuthorizedDbUsersResponse_H_
