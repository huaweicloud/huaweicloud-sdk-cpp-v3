
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationRole_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationRole_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户迁移信息角色列表字段。当前支持的场景：  - 实时迁移场景：MongoDB迁移。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UserMigrationRole
    : public ModelBase
{
public:
    UserMigrationRole();
    virtual ~UserMigrationRole();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UserMigrationRole members

    /// <summary>
    /// 角色。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);


protected:
    std::string role_;
    bool roleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationRole_H_
