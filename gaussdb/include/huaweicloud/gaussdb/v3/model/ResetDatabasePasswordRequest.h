
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetDatabasePasswordRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetDatabasePasswordRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/ResetDatabasePassword.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库用户密码请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ResetDatabasePasswordRequest
    : public ModelBase
{
public:
    ResetDatabasePasswordRequest();
    virtual ~ResetDatabasePasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResetDatabasePasswordRequest members

    /// <summary>
    /// 准备修改密码的数据库用户列表，列表最大长度为50。
    /// </summary>

    std::vector<ResetDatabasePassword>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<ResetDatabasePassword>& value);


protected:
    std::vector<ResetDatabasePassword> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetDatabasePasswordRequest_H_
