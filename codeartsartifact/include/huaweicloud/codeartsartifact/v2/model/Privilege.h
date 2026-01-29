
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_Privilege_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_Privilege_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  Privilege
    : public ModelBase
{
public:
    Privilege();
    virtual ~Privilege();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Privilege members

    /// <summary>
    /// **参数解释**: 角色id。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// **参数解释**: 角色名称。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// **参数解释**: 角色中文名。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getRoleChineseName() const;
    bool roleChineseNameIsSet() const;
    void unsetroleChineseName();
    void setRoleChineseName(const std::string& value);

    /// <summary>
    /// **参数解释**: 项目id。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**: 地域服务id。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getAreaServiceId() const;
    bool areaServiceIdIsSet() const;
    void unsetareaServiceId();
    void setAreaServiceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 授权对象路径。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getGrantedObjectPath() const;
    bool grantedObjectPathIsSet() const;
    void unsetgrantedObjectPath();
    void setGrantedObjectPath(const std::string& value);

    /// <summary>
    /// **参数解释**: 授权对象id。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getGrantedObjectTypeId() const;
    bool grantedObjectTypeIdIsSet() const;
    void unsetgrantedObjectTypeId();
    void setGrantedObjectTypeId(const std::string& value);

    /// <summary>
    /// **参数解释**: 操作权限，多个权限以英文逗号隔开。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getOperations() const;
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::string& value);

    /// <summary>
    /// **参数解释**: 操作权限索引。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::vector<int32_t>& getOperationsIndex();
    bool operationsIndexIsSet() const;
    void unsetoperationsIndex();
    void setOperationsIndex(std::vector<int32_t> value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::string roleChineseName_;
    bool roleChineseNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string areaServiceId_;
    bool areaServiceIdIsSet_;
    std::string grantedObjectPath_;
    bool grantedObjectPathIsSet_;
    std::string grantedObjectTypeId_;
    bool grantedObjectTypeIdIsSet_;
    std::string operations_;
    bool operationsIsSet_;
    std::vector<int32_t> operationsIndex_;
    bool operationsIndexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_Privilege_H_
