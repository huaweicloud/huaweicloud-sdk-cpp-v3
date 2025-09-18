
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegesResponse_result_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegesResponse_result_H_


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
/// **参数解释**:  请求返回结果，接口不同，返回不同。 **取值范围**: 根据不同接口有不同范围。 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  PrivilegesResponse_result
    : public ModelBase
{
public:
    PrivilegesResponse_result();
    virtual ~PrivilegesResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrivilegesResponse_result members

    /// <summary>
    /// **参数解释**:  操作列表。 **取值范围**: 英文字符串，使用英文逗号分隔。 
    /// </summary>

    std::string getOperations() const;
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::string& value);

    /// <summary>
    /// **参数解释**:  操作序列号。 **取值范围**: 数字。 
    /// </summary>

    std::vector<int32_t>& getOperationsIndex();
    bool operationsIndexIsSet() const;
    void unsetoperationsIndex();
    void setOperationsIndex(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释**:  角色id。 **取值范围**: 32位英文、数字随机字符串。 
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// **参数解释**:  角色英文名称。 **取值范围**:   Project manager，Product manager，Test manager，Operation manager，System engineer，Committer，Developer，Testter，Participant，Viever及自定义角色。 
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// **参数解释**:  角色中文名称。 **取值范围**: 项目经理，产品经理，测试经理，运维经理，系统工程师，Committer，开发人员，测试人员，参与者，浏览者及自定义角色。 
    /// </summary>

    std::string getRoleChineseName() const;
    bool roleChineseNameIsSet() const;
    void unsetroleChineseName();
    void setRoleChineseName(const std::string& value);

    /// <summary>
    /// 项目id。 **取值范围**: 32位英文、数字随机字符串。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**:  服务。 **取值范围**: 32位英文、数字随机字符串。 
    /// </summary>

    std::string getAreaServiceId() const;
    bool areaServiceIdIsSet() const;
    void unsetareaServiceId();
    void setAreaServiceId(const std::string& value);

    /// <summary>
    /// **参数解释**:  授权对象路径。 **取值范围**: 英文、数字、斜线（/）、星号（*）字符串 
    /// </summary>

    std::string getGrantedObjectPath() const;
    bool grantedObjectPathIsSet() const;
    void unsetgrantedObjectPath();
    void setGrantedObjectPath(const std::string& value);

    /// <summary>
    /// **参数解释**:  授权对象类型id。 **取值范围**: 32位英文、数字随机字符串。 
    /// </summary>

    std::string getGrantedObjectTypeId() const;
    bool grantedObjectTypeIdIsSet() const;
    void unsetgrantedObjectTypeId();
    void setGrantedObjectTypeId(const std::string& value);


protected:
    std::string operations_;
    bool operationsIsSet_;
    std::vector<int32_t> operationsIndex_;
    bool operationsIndexIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegesResponse_result_H_
