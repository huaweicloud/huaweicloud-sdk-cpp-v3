
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateMembesRoleV4RequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateMembesRoleV4RequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateMembesRoleV4RequestBody
    : public ModelBase
{
public:
    UpdateMembesRoleV4RequestBody();
    virtual ~UpdateMembesRoleV4RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMembesRoleV4RequestBody members

    /// <summary>
    /// 成员角色, -1 项目创建者, 3 项目经理, 4 开发人员, 5 测试经理, 6 测试人员, 7 参与者, 8 浏览者, 9 运维经理
    /// </summary>

    int32_t getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(int32_t value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::vector<std::string>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(const std::vector<std::string>& value);


protected:
    int32_t roleId_;
    bool roleIdIsSet_;
    std::vector<std::string> userIds_;
    bool userIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateMembesRoleV4RequestBody_H_
