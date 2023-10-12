
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RolesOption_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RolesOption_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RolesOption
    : public ModelBase
{
public:
    RolesOption();
    virtual ~RolesOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RolesOption members

    /// <summary>
    /// 被继承角色所在数据库名称。 - 长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、下划线。
    /// </summary>

    std::string getRoleDbName() const;
    bool roleDbNameIsSet() const;
    void unsetroleDbName();
    void setRoleDbName(const std::string& value);

    /// <summary>
    /// 被继承角色的名称。 - 长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、中划线、下划线和点。
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);


protected:
    std::string roleDbName_;
    bool roleDbNameIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RolesOption_H_
