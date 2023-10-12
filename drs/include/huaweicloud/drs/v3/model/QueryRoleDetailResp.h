
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryRoleDetailResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryRoleDetailResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移角色响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryRoleDetailResp
    : public ModelBase
{
public:
    QueryRoleDetailResp();
    virtual ~QueryRoleDetailResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryRoleDetailResp members

    /// <summary>
    /// 角色。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 说明。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 是否支持迁移。
    /// </summary>

    bool isIsTransfer() const;
    bool isTransferIsSet() const;
    void unsetisTransfer();
    void setIsTransfer(bool value);

    /// <summary>
    /// 角色权限。
    /// </summary>

    std::string getPrivileges() const;
    bool privilegesIsSet() const;
    void unsetprivileges();
    void setPrivileges(const std::string& value);

    /// <summary>
    /// 继承的角色。
    /// </summary>

    std::vector<std::string>& getInheritsRoles();
    bool inheritsRolesIsSet() const;
    void unsetinheritsRoles();
    void setInheritsRoles(const std::vector<std::string>& value);

    /// <summary>
    /// 是否选择。
    /// </summary>

    bool isSelected() const;
    bool selectedIsSet() const;
    void unsetselected();
    void setSelected(bool value);


protected:
    std::string role_;
    bool roleIsSet_;
    std::string comment_;
    bool commentIsSet_;
    bool isTransfer_;
    bool isTransferIsSet_;
    std::string privileges_;
    bool privilegesIsSet_;
    std::vector<std::string> inheritsRoles_;
    bool inheritsRolesIsSet_;
    bool selected_;
    bool selectedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryRoleDetailResp_H_
