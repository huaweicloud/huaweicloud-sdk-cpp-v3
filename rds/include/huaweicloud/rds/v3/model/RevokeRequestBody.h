
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokeRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokeRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RevokeRequestBody_users.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RevokeRequestBody
    : public ModelBase
{
public:
    RevokeRequestBody();
    virtual ~RevokeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RevokeRequestBody members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 解除授权的用户列表。
    /// </summary>

    std::vector<RevokeRequestBody_users>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RevokeRequestBody_users>& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<RevokeRequestBody_users> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokeRequestBody_H_
