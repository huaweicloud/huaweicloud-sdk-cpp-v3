
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateState_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateState_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子任务参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  TemplateState
    : public ModelBase
{
public:
    TemplateState();
    virtual ~TemplateState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateState members

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 任务名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板任务ID
    /// </summary>

    std::string getModuleOrTemplateId() const;
    bool moduleOrTemplateIdIsSet() const;
    void unsetmoduleOrTemplateId();
    void setModuleOrTemplateId(const std::string& value);

    /// <summary>
    /// 模板任务名字
    /// </summary>

    std::string getModuleOrTemplateName() const;
    bool moduleOrTemplateNameIsSet() const;
    void unsetmoduleOrTemplateName();
    void setModuleOrTemplateName(const std::string& value);

    /// <summary>
    /// 任务在流水线页面展示名字
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 流水线可挂载任务类型
    /// </summary>

    std::string getDslMethod() const;
    bool dslMethodIsSet() const;
    void unsetdslMethod();
    void setDslMethod(const std::string& value);

    /// <summary>
    /// 任务参数，map类型数据
    /// </summary>

    std::map<std::string, Object>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::map<std::string, Object>& value);

    /// <summary>
    /// 是否手动执行
    /// </summary>

    bool isIsManualExecution() const;
    bool isManualExecutionIsSet() const;
    void unsetisManualExecution();
    void setIsManualExecution(bool value);

    /// <summary>
    /// 任务参数是否校验
    /// </summary>

    bool isJobParameterValidate() const;
    bool jobParameterValidateIsSet() const;
    void unsetjobParameterValidate();
    void setJobParameterValidate(bool value);

    /// <summary>
    /// 是否显示代码仓URL
    /// </summary>

    bool isIsShowCodehubUrl() const;
    bool isShowCodehubUrlIsSet() const;
    void unsetisShowCodehubUrl();
    void setIsShowCodehubUrl(bool value);

    /// <summary>
    /// 是否执行
    /// </summary>

    bool isIsExecute() const;
    bool isExecuteIsSet() const;
    void unsetisExecute();
    void setIsExecute(bool value);

    /// <summary>
    /// 执行任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 执行任务名字
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 任务所属项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 控制阶段下任务的串并行（type是task的execution_mode值为null，type是stage的execution_mode可选parallel（并行）或者serial（串行））
    /// </summary>

    std::string getExecutionMode() const;
    bool executionModeIsSet() const;
    void unsetexecutionMode();
    void setExecutionMode(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string moduleOrTemplateId_;
    bool moduleOrTemplateIdIsSet_;
    std::string moduleOrTemplateName_;
    bool moduleOrTemplateNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string dslMethod_;
    bool dslMethodIsSet_;
    std::map<std::string, Object> parameters_;
    bool parametersIsSet_;
    bool isManualExecution_;
    bool isManualExecutionIsSet_;
    bool jobParameterValidate_;
    bool jobParameterValidateIsSet_;
    bool isShowCodehubUrl_;
    bool isShowCodehubUrlIsSet_;
    bool isExecute_;
    bool isExecuteIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string executionMode_;
    bool executionModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateState_H_
