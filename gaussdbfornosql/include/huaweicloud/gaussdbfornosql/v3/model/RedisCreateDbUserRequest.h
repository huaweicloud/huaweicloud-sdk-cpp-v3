
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisCreateDbUserRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisCreateDbUserRequest_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/RedisUserForCreation.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RedisCreateDbUserRequest
    : public ModelBase
{
public:
    RedisCreateDbUserRequest();
    virtual ~RedisCreateDbUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RedisCreateDbUserRequest members

    /// <summary>
    /// 需要创建的账号列表
    /// </summary>

    std::vector<RedisUserForCreation>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RedisUserForCreation>& value);


protected:
    std::vector<RedisUserForCreation> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisCreateDbUserRequest_H_
