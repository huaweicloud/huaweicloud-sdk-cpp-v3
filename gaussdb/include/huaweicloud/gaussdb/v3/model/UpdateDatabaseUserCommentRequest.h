
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseUserCommentRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseUserCommentRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/UpdateDatabaseUserComment.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库用户备注请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateDatabaseUserCommentRequest
    : public ModelBase
{
public:
    UpdateDatabaseUserCommentRequest();
    virtual ~UpdateDatabaseUserCommentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDatabaseUserCommentRequest members

    /// <summary>
    /// 准备修改备注的数据库用户列表，列表最大长度为50。
    /// </summary>

    std::vector<UpdateDatabaseUserComment>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UpdateDatabaseUserComment>& value);


protected:
    std::vector<UpdateDatabaseUserComment> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseUserCommentRequest_H_
