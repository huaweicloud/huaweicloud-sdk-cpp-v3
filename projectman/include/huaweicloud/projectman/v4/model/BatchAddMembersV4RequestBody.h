
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchAddMembersV4RequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchAddMembersV4RequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/BatchAddMemberRequestV4.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchAddMembersV4RequestBody
    : public ModelBase
{
public:
    BatchAddMembersV4RequestBody();
    virtual ~BatchAddMembersV4RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddMembersV4RequestBody members

    /// <summary>
    /// 添加的用户信息
    /// </summary>

    std::vector<BatchAddMemberRequestV4>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<BatchAddMemberRequestV4>& value);


protected:
    std::vector<BatchAddMemberRequestV4> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchAddMembersV4RequestBody_H_
