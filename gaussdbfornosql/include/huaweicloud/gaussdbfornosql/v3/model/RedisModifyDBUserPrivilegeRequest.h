
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisModifyDBUserPrivilegeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisModifyDBUserPrivilegeRequest_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/RedisModifyDbUserPrivilegeRequestBody.h>
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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RedisModifyDBUserPrivilegeRequest
    : public ModelBase
{
public:
    RedisModifyDBUserPrivilegeRequest();
    virtual ~RedisModifyDBUserPrivilegeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RedisModifyDBUserPrivilegeRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<RedisModifyDbUserPrivilegeRequestBody>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RedisModifyDbUserPrivilegeRequestBody>& value);


protected:
    std::vector<RedisModifyDbUserPrivilegeRequestBody> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisModifyDBUserPrivilegeRequest_H_
