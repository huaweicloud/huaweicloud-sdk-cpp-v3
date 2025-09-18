
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateChildUserNickNamesRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateChildUserNickNamesRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UpdateChildUserNickNameRequestBody.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchUpdateChildUserNickNamesRequestBody
    : public ModelBase
{
public:
    BatchUpdateChildUserNickNamesRequestBody();
    virtual ~BatchUpdateChildUserNickNamesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateChildUserNickNamesRequestBody members

    /// <summary>
    /// 修改的用户列表
    /// </summary>

    std::vector<UpdateChildUserNickNameRequestBody>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UpdateChildUserNickNameRequestBody>& value);


protected:
    std::vector<UpdateChildUserNickNameRequestBody> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateChildUserNickNamesRequestBody_H_
