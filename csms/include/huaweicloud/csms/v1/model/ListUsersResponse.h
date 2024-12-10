
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListUsersResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListUsersResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/UsersDetailsResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListUsersResponse
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
    /// 用户总数。
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 用户列表。
    /// </summary>

    std::vector<UsersDetailsResult>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UsersDetailsResult>& value);


protected:
    int64_t total_;
    bool totalIsSet_;
    std::vector<UsersDetailsResult> users_;
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

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListUsersResponse_H_
