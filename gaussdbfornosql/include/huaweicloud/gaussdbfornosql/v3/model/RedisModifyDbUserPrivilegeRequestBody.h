
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisModifyDbUserPrivilegeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisModifyDbUserPrivilegeRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库账号权限请求体
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RedisModifyDbUserPrivilegeRequestBody
    : public ModelBase
{
public:
    RedisModifyDbUserPrivilegeRequestBody();
    virtual ~RedisModifyDbUserPrivilegeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RedisModifyDbUserPrivilegeRequestBody members

    /// <summary>
    /// 账号名称。  小于36个字符，以字母开头，仅包含数字、字母、中划线、下划线。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 账号权限。  - 取值\&quot;ReadOnly\&quot;：账号为只读权限； - 取值\&quot;ReadWrite\&quot;：账号为读写权限。
    /// </summary>

    std::string getPrivilege() const;
    bool privilegeIsSet() const;
    void unsetprivilege();
    void setPrivilege(const std::string& value);

    /// <summary>
    /// 账号授权database列表。 不传值则对账号授权的db不做修改。
    /// </summary>

    std::vector<std::string>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string privilege_;
    bool privilegeIsSet_;
    std::vector<std::string> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisModifyDbUserPrivilegeRequestBody_H_
