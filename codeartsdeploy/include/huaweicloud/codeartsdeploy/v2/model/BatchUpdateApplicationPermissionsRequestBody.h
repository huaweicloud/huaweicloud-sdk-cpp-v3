
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdateApplicationPermissionsRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdateApplicationPermissionsRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/AppPermission.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  BatchUpdateApplicationPermissionsRequestBody
    : public ModelBase
{
public:
    BatchUpdateApplicationPermissionsRequestBody();
    virtual ~BatchUpdateApplicationPermissionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateApplicationPermissionsRequestBody members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 应用列表
    /// </summary>

    std::vector<std::string>& getApplicationIds();
    bool applicationIdsIsSet() const;
    void unsetapplicationIds();
    void setApplicationIds(const std::vector<std::string>& value);

    /// <summary>
    /// 角色权限
    /// </summary>

    std::vector<AppPermission>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<AppPermission>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> applicationIds_;
    bool applicationIdsIsSet_;
    std::vector<AppPermission> roles_;
    bool rolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdateApplicationPermissionsRequestBody_H_
