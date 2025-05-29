
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobInfo_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobInfo_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务信息
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobInfo_result
    : public ModelBase
{
public:
    ShowJobInfo_result();
    virtual ~ShowJobInfo_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobInfo_result members

    /// <summary>
    /// 构建任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 构建工程ID,唯一对应codeci_job_id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 使用项目权限
    /// </summary>

    bool isProjectPermissionSwitch() const;
    bool projectPermissionSwitchIsSet() const;
    void unsetprojectPermissionSwitch();
    void setProjectPermissionSwitch(bool value);

    /// <summary>
    /// 执行时间
    /// </summary>

    std::string getBuildTime() const;
    bool buildTimeIsSet() const;
    void unsetbuildTime();
    void setBuildTime(const std::string& value);

    /// <summary>
    /// 收费时间
    /// </summary>

    std::string getChargeTime() const;
    bool chargeTimeIsSet() const;
    void unsetchargeTime();
    void setChargeTime(const std::string& value);

    /// <summary>
    /// 任务创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 是否已禁用
    /// </summary>

    bool isDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(bool value);

    /// <summary>
    /// 是否已收藏
    /// </summary>

    bool isFavorite() const;
    bool favoriteIsSet() const;
    void unsetfavorite();
    void setFavorite(bool value);

    /// <summary>
    /// 代码来源
    /// </summary>

    std::string getSourceCode() const;
    bool sourceCodeIsSet() const;
    void unsetsourceCode();
    void setSourceCode(const std::string& value);

    /// <summary>
    /// 运行状态
    /// </summary>

    std::string getRunningStatus() const;
    bool runningStatusIsSet() const;
    void unsetrunningStatus();
    void setRunningStatus(const std::string& value);

    /// <summary>
    /// 重新运行
    /// </summary>

    bool isNewBuild() const;
    bool newBuildIsSet() const;
    void unsetnewBuild();
    void setNewBuild(bool value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 是否有复制任务权限
    /// </summary>

    bool isIsCopy() const;
    bool isCopyIsSet() const;
    void unsetisCopy();
    void setIsCopy(bool value);

    /// <summary>
    /// 是否有删除任务权限
    /// </summary>

    bool isIsDelete() const;
    bool isDeleteIsSet() const;
    void unsetisDelete();
    void setIsDelete(bool value);

    /// <summary>
    /// 是否有执行任务权限
    /// </summary>

    bool isIsExecute() const;
    bool isExecuteIsSet() const;
    void unsetisExecute();
    void setIsExecute(bool value);

    /// <summary>
    /// 是否有禁用任务权限
    /// </summary>

    bool isIsForbidden() const;
    bool isForbiddenIsSet() const;
    void unsetisForbidden();
    void setIsForbidden(bool value);

    /// <summary>
    /// 是否有管理任务权限
    /// </summary>

    bool isIsManager() const;
    bool isManagerIsSet() const;
    void unsetisManager();
    void setIsManager(bool value);

    /// <summary>
    /// 是否有修改任务权限
    /// </summary>

    bool isIsModify() const;
    bool isModifyIsSet() const;
    void unsetisModify();
    void setIsModify(bool value);

    /// <summary>
    /// 是否有查看任务权限
    /// </summary>

    bool isIsView() const;
    bool isViewIsSet() const;
    void unsetisView();
    void setIsView(bool value);

    /// <summary>
    /// 最终构建状态
    /// </summary>

    std::string getLastBuildStatus() const;
    bool lastBuildStatusIsSet() const;
    void unsetlastBuildStatus();
    void setLastBuildStatus(const std::string& value);

    /// <summary>
    /// 最后构建时间
    /// </summary>

    int64_t getLastBuildTime() const;
    bool lastBuildTimeIsSet() const;
    void unsetlastBuildTime();
    void setLastBuildTime(int64_t value);

    /// <summary>
    /// 健康度
    /// </summary>

    int32_t getHealthScore() const;
    bool healthScoreIsSet() const;
    void unsethealthScore();
    void setHealthScore(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool projectPermissionSwitch_;
    bool projectPermissionSwitchIsSet_;
    std::string buildTime_;
    bool buildTimeIsSet_;
    std::string chargeTime_;
    bool chargeTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    bool disabled_;
    bool disabledIsSet_;
    bool favorite_;
    bool favoriteIsSet_;
    std::string sourceCode_;
    bool sourceCodeIsSet_;
    std::string runningStatus_;
    bool runningStatusIsSet_;
    bool newBuild_;
    bool newBuildIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    bool isCopy_;
    bool isCopyIsSet_;
    bool isDelete_;
    bool isDeleteIsSet_;
    bool isExecute_;
    bool isExecuteIsSet_;
    bool isForbidden_;
    bool isForbiddenIsSet_;
    bool isManager_;
    bool isManagerIsSet_;
    bool isModify_;
    bool isModifyIsSet_;
    bool isView_;
    bool isViewIsSet_;
    std::string lastBuildStatus_;
    bool lastBuildStatusIsSet_;
    int64_t lastBuildTime_;
    bool lastBuildTimeIsSet_;
    int32_t healthScore_;
    bool healthScoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobInfo_result_H_
