
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ProjectRolePermissionDo_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ProjectRolePermissionDo_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ProjectRolePermissionDo
    : public ModelBase
{
public:
    ProjectRolePermissionDo();
    virtual ~ProjectRolePermissionDo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectRolePermissionDo members

    /// <summary>
    /// **参数解释**: ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 角色ID。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(int32_t value);

    /// <summary>
    /// **参数解释**: DEVUC角色ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDevucRoleId() const;
    bool devucRoleIdIsSet() const;
    void unsetdevucRoleId();
    void setDevucRoleId(const std::string& value);

    /// <summary>
    /// **参数解释**: 项目ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否具有权限配置能力。 **取值范围**: - true：能够配置权限。 - false：不能配置权限。
    /// </summary>

    bool isIsPermissionConfig() const;
    bool isPermissionConfigIsSet() const;
    void unsetisPermissionConfig();
    void setIsPermissionConfig(bool value);

    /// <summary>
    /// **参数解释**: 能否更改软件包状态。 **取值范围**: - true：能够更改软件包状态。 - false：不能更改软件包状态。
    /// </summary>

    bool isIsChangePkgStatus() const;
    bool isChangePkgStatusIsSet() const;
    void unsetisChangePkgStatus();
    void setIsChangePkgStatus(bool value);

    /// <summary>
    /// **参数解释**: 能否进行上传。 **取值范围**: - true：能够进行上传。 - false：不能上传。
    /// </summary>

    bool isIsUpload() const;
    bool isUploadIsSet() const;
    void unsetisUpload();
    void setIsUpload(bool value);

    /// <summary>
    /// **参数解释**: 能否删除和还原测试状态的软件包。 **取值范围**: - true：能够删除和还原测试状态的软件包。 - false：不能删除和还原测试状态的软件包。
    /// </summary>

    bool isIsDeleteRestoreTestPkg() const;
    bool isDeleteRestoreTestPkgIsSet() const;
    void unsetisDeleteRestoreTestPkg();
    void setIsDeleteRestoreTestPkg(bool value);

    /// <summary>
    /// **参数解释**: 能否删除和还原生产状态的软件包。 **取值范围**: - true：能够删除和还原生产状态的软件包。 - false：不能删除和还原生产状态的软件包。
    /// </summary>

    bool isIsDeleteRestoreProdPkg() const;
    bool isDeleteRestoreProdPkgIsSet() const;
    void unsetisDeleteRestoreProdPkg();
    void setIsDeleteRestoreProdPkg(bool value);

    /// <summary>
    /// **参数解释**: 能否编辑测试状态的软件包。 **取值范围**: - true：能够编辑测试状态的软件包。 - false：不能编辑测试状态的软件包。
    /// </summary>

    bool isIsEditTestPkg() const;
    bool isEditTestPkgIsSet() const;
    void unsetisEditTestPkg();
    void setIsEditTestPkg(bool value);

    /// <summary>
    /// **参数解释**: 能否创建文件夹。 **取值范围**: - true：能够创建目录。 - false：不能创建目录。
    /// </summary>

    bool isIsMkdir() const;
    bool isMkdirIsSet() const;
    void unsetisMkdir();
    void setIsMkdir(bool value);

    /// <summary>
    /// **参数解释**: 能否进行下载。 **取值范围**: - true：能够下载。 - false：不能下载。
    /// </summary>

    bool isIsDownload() const;
    bool isDownloadIsSet() const;
    void unsetisDownload();
    void setIsDownload(bool value);

    /// <summary>
    /// **参数解释**: 能否还原回收站。 **取值范围**: - true：能够在回收站还原所有。 - false：不能在回收站还原所有。
    /// </summary>

    bool isIsRestoreAll() const;
    bool isRestoreAllIsSet() const;
    void unsetisRestoreAll();
    void setIsRestoreAll(bool value);

    /// <summary>
    /// **参数解释**: 能否清空回收站。 **取值范围**: - true：能够清空回收站。 - false：不能清空回收站。
    /// </summary>

    bool isIsEmpty() const;
    bool isEmptyIsSet() const;
    void unsetisEmpty();
    void setIsEmpty(bool value);

    /// <summary>
    /// **参数解释**: 创建时间。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释**: 更新时间。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// **参数解释**: 权限迁移状态。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMigrated630() const;
    bool migrated630IsSet() const;
    void unsetmigrated630();
    void setMigrated630(int32_t value);

    /// <summary>
    /// **参数解释**: 区域。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**: 角色。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRoles() const;
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t roleId_;
    bool roleIdIsSet_;
    std::string devucRoleId_;
    bool devucRoleIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool isPermissionConfig_;
    bool isPermissionConfigIsSet_;
    bool isChangePkgStatus_;
    bool isChangePkgStatusIsSet_;
    bool isUpload_;
    bool isUploadIsSet_;
    bool isDeleteRestoreTestPkg_;
    bool isDeleteRestoreTestPkgIsSet_;
    bool isDeleteRestoreProdPkg_;
    bool isDeleteRestoreProdPkgIsSet_;
    bool isEditTestPkg_;
    bool isEditTestPkgIsSet_;
    bool isMkdir_;
    bool isMkdirIsSet_;
    bool isDownload_;
    bool isDownloadIsSet_;
    bool isRestoreAll_;
    bool isRestoreAllIsSet_;
    bool isEmpty_;
    bool isEmptyIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    int32_t migrated630_;
    bool migrated630IsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string roles_;
    bool rolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ProjectRolePermissionDo_H_
