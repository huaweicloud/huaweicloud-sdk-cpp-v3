
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Job_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Job_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Job
    : public ModelBase
{
public:
    Job();
    virtual ~Job();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Job members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 任务创建者
    /// </summary>

    std::string getJobCreator() const;
    bool jobCreatorIsSet() const;
    void unsetjobCreator();
    void setJobCreator(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 最新执行时间
    /// </summary>

    double getLastBuildTime() const;
    bool lastBuildTimeIsSet() const;
    void unsetlastBuildTime();
    void setLastBuildTime(double value);

    /// <summary>
    /// 健康分值
    /// </summary>

    int32_t getHealthScore() const;
    bool healthScoreIsSet() const;
    void unsethealthScore();
    void setHealthScore(int32_t value);

    /// <summary>
    /// 代码来源
    /// </summary>

    std::string getSourceCode() const;
    bool sourceCodeIsSet() const;
    void unsetsourceCode();
    void setSourceCode(const std::string& value);

    /// <summary>
    /// 最新构建状态
    /// </summary>

    std::string getLastBuildStatus() const;
    bool lastBuildStatusIsSet() const;
    void unsetlastBuildStatus();
    void setLastBuildStatus(const std::string& value);

    /// <summary>
    /// 是否已结束
    /// </summary>

    bool isIsFinished() const;
    bool isFinishedIsSet() const;
    void unsetisFinished();
    void setIsFinished(bool value);

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
    /// 是否有修改任务权限
    /// </summary>

    bool isIsModify() const;
    bool isModifyIsSet() const;
    void unsetisModify();
    void setIsModify(bool value);

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
    /// 是否有复制任务权限
    /// </summary>

    bool isIsCopy() const;
    bool isCopyIsSet() const;
    void unsetisCopy();
    void setIsCopy(bool value);

    /// <summary>
    /// 是否有禁用任务权限
    /// </summary>

    bool isIsForbidden() const;
    bool isForbiddenIsSet() const;
    void unsetisForbidden();
    void setIsForbidden(bool value);

    /// <summary>
    /// 是否有查看任务权限
    /// </summary>

    bool isIsView() const;
    bool isViewIsSet() const;
    void unsetisView();
    void setIsView(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobCreator_;
    bool jobCreatorIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    double lastBuildTime_;
    bool lastBuildTimeIsSet_;
    int32_t healthScore_;
    bool healthScoreIsSet_;
    std::string sourceCode_;
    bool sourceCodeIsSet_;
    std::string lastBuildStatus_;
    bool lastBuildStatusIsSet_;
    bool isFinished_;
    bool isFinishedIsSet_;
    bool disabled_;
    bool disabledIsSet_;
    bool favorite_;
    bool favoriteIsSet_;
    bool isModify_;
    bool isModifyIsSet_;
    bool isDelete_;
    bool isDeleteIsSet_;
    bool isExecute_;
    bool isExecuteIsSet_;
    bool isCopy_;
    bool isCopyIsSet_;
    bool isForbidden_;
    bool isForbiddenIsSet_;
    bool isView_;
    bool isViewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Job_H_
