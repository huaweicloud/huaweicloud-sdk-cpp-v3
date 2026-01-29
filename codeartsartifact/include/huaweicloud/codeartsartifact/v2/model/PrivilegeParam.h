
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegeParam_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegeParam_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  PrivilegeParam
    : public ModelBase
{
public:
    PrivilegeParam();
    virtual ~PrivilegeParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrivilegeParam members

    /// <summary>
    /// **参数解释**: 角色id。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// **参数解释**: 项目ID，可以从调用API处获取，也可以从控制台获取。获取方式请参考[获取项目ID](CloudArtifact_api_0015.xml)。 **约束限制**: 只能由英文字母、数字组成，且长度为32个字符。 **取值范围**: 不涉及。 **默认取值**: 无。
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
    /// **参数解释**: 操作权限，多个权限以英文逗号隔开。 **约束限制**: 不涉及。 **取值范围**: 可选值：createrepository,editrepository,restore,deleterepository,physicdelete,restoreall,clearall,deleteorredeploy,downloadorview,import,upload,export。 **默认取值**: 无。 
    /// </summary>

    std::string getOperations() const;
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::string& value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegeParam_H_
