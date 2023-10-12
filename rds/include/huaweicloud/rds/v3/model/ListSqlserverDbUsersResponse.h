
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDbUsersResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDbUsersResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/UserForList.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSqlserverDbUsersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSqlserverDbUsersResponse();
    virtual ~ListSqlserverDbUsersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlserverDbUsersResponse members

    /// <summary>
    /// 用户信息。
    /// </summary>

    std::vector<UserForList>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UserForList>& value);

    /// <summary>
    /// 总条数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<UserForList> users_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDbUsersResponse_H_
