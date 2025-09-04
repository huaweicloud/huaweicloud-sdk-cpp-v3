
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RolePermissionsRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RolePermissionsRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/JobRolePermission.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建更新分组请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RolePermissionsRequestBody
    : public ModelBase
{
public:
    RolePermissionsRequestBody();
    virtual ~RolePermissionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RolePermissionsRequestBody members

    /// <summary>
    /// CodeArts项目ID。获取方式请参考[获取CodeArts项目ID](https://support.huaweicloud.com/api-codeci/cloudbuild_03_0022.html)。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 任务id集合
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);

    /// <summary>
    /// 是否同步最新项目权限
    /// </summary>

    bool isProjectSwitch() const;
    bool projectSwitchIsSet() const;
    void unsetprojectSwitch();
    void setProjectSwitch(bool value);

    /// <summary>
    /// 角色权限信息
    /// </summary>

    std::vector<JobRolePermission>& getPermissions();
    bool permissionsIsSet() const;
    void unsetpermissions();
    void setPermissions(const std::vector<JobRolePermission>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;
    bool projectSwitch_;
    bool projectSwitchIsSet_;
    std::vector<JobRolePermission> permissions_;
    bool permissionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RolePermissionsRequestBody_H_
