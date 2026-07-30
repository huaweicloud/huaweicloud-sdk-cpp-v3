
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowParam_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowParam_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowStep.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/modelarts/v1/model/WorkflowServicePackege.h>
#include <huaweicloud/modelarts/v1/model/Data.h>
#include <huaweicloud/modelarts/v1/model/WorkflowPolicy.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/WorkflowGallerySubscription.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ExecutionBrief.h>
#include <huaweicloud/modelarts/v1/model/WorkflowStorage.h>
#include <huaweicloud/modelarts/v1/model/WorkflowSubgraph.h>
#include <huaweicloud/modelarts/v1/model/DataRequirement.h>
#include <huaweicloud/modelarts/v1/model/WorkflowAsset.h>
#include <huaweicloud/modelarts/v1/model/WorkflowParameter.h>
#include <map>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowParam
    : public ModelBase
{
public:
    WorkflowParam();
    virtual ~WorkflowParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowParam members

    /// <summary>
    /// Workflow工作流名称，1到64位只包含中英文、数字、空格、下划线（_）和中划线（-），并且以中英文开头。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Workflow工作流的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// Workflow工作流包含的步骤定义。
    /// </summary>

    std::vector<WorkflowStep>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<WorkflowStep>& value);

    /// <summary>
    /// 创建Workflow工作流的用户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 工作空间ID。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// Workflow需要的数据。
    /// </summary>

    std::vector<DataRequirement>& getDataRequirements();
    bool dataRequirementsIsSet() const;
    void unsetdataRequirements();
    void setDataRequirements(const std::vector<DataRequirement>& value);

    /// <summary>
    /// Workflow包含的数据。
    /// </summary>

    std::vector<Data>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<Data>& value);

    /// <summary>
    /// Workflow包含的参数。
    /// </summary>

    std::vector<WorkflowParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<WorkflowParameter>& value);

    /// <summary>
    /// 从指定Workflow工作流进行复制。通过复制来创建Workflow时必填。
    /// </summary>

    std::string getSourceWorkflowId() const;
    bool sourceWorkflowIdIsSet() const;
    void unsetsourceWorkflowId();
    void setSourceWorkflowId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowGallerySubscription getGallerySubscription() const;
    bool gallerySubscriptionIsSet() const;
    void unsetgallerySubscription();
    void setGallerySubscription(const WorkflowGallerySubscription& value);

    /// <summary>
    /// 
    /// </summary>

    ExecutionBrief getLatestExecution() const;
    bool latestExecutionIsSet() const;
    void unsetlatestExecution();
    void setLatestExecution(const ExecutionBrief& value);

    /// <summary>
    /// 工作流的已运行次数。
    /// </summary>

    int32_t getRunCount() const;
    bool runCountIsSet() const;
    void unsetrunCount();
    void setRunCount(int32_t value);

    /// <summary>
    /// 当前工作流的必选参数是否都已填完。
    /// </summary>

    bool isParamReady() const;
    bool paramReadyIsSet() const;
    void unsetparamReady();
    void setParamReady(bool value);

    /// <summary>
    /// 工作流来源，可选值为ai_gallery，表示工作流是从AI Gallery导入的。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// Workflow包含的统一存储定义。
    /// </summary>

    std::vector<WorkflowStorage>& getStorages();
    bool storagesIsSet() const;
    void unsetstorages();
    void setStorages(const std::vector<WorkflowStorage>& value);

    /// <summary>
    /// 为Workflow工作流设置的标签。
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);

    /// <summary>
    /// 工作流绑定的资产。
    /// </summary>

    std::vector<WorkflowAsset>& getAssets();
    bool assetsIsSet() const;
    void unsetassets();
    void setAssets(const std::vector<WorkflowAsset>& value);

    /// <summary>
    /// 工作流包含的子图。
    /// </summary>

    std::vector<WorkflowSubgraph>& getSubGraphs();
    bool subGraphsIsSet() const;
    void unsetsubGraphs();
    void setSubGraphs(const std::vector<WorkflowSubgraph>& value);

    /// <summary>
    /// 计费工作流使用的拓展字段。
    /// </summary>

    std::map<std::string, Object>& getExtend();
    bool extendIsSet() const;
    void unsetextend();
    void setExtend(const std::map<std::string, Object>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowPolicy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const WorkflowPolicy& value);

    /// <summary>
    /// 工作流SMN消息订阅开关，默认为false，表示关闭消息订阅开关。
    /// </summary>

    bool isWithSubscription() const;
    bool withSubscriptionIsSet() const;
    void unsetwithSubscription();
    void setWithSubscription(bool value);

    /// <summary>
    /// SMN开关。
    /// </summary>

    bool isSmnSwitch() const;
    bool smnSwitchIsSet() const;
    void unsetsmnSwitch();
    void setSmnSwitch(bool value);

    /// <summary>
    /// SMN消息订阅ID。
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);

    /// <summary>
    /// 自动学习模板ID。
    /// </summary>

    std::string getExemlTemplateId() const;
    bool exemlTemplateIdIsSet() const;
    void unsetexemlTemplateId();
    void setExemlTemplateId(const std::string& value);

    /// <summary>
    /// 最近一次修改的时间。
    /// </summary>

    std::string getLastModifiedAt() const;
    bool lastModifiedAtIsSet() const;
    void unsetlastModifiedAt();
    void setLastModifiedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowServicePackege getPackage() const;
    bool packageIsSet() const;
    void unsetpackage();
    void setPackage(const WorkflowServicePackege& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<WorkflowStep> steps_;
    bool stepsIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<DataRequirement> dataRequirements_;
    bool dataRequirementsIsSet_;
    std::vector<Data> data_;
    bool dataIsSet_;
    std::vector<WorkflowParameter> parameters_;
    bool parametersIsSet_;
    std::string sourceWorkflowId_;
    bool sourceWorkflowIdIsSet_;
    WorkflowGallerySubscription gallerySubscription_;
    bool gallerySubscriptionIsSet_;
    ExecutionBrief latestExecution_;
    bool latestExecutionIsSet_;
    int32_t runCount_;
    bool runCountIsSet_;
    bool paramReady_;
    bool paramReadyIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::vector<WorkflowStorage> storages_;
    bool storagesIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;
    std::vector<WorkflowAsset> assets_;
    bool assetsIsSet_;
    std::vector<WorkflowSubgraph> subGraphs_;
    bool subGraphsIsSet_;
    std::map<std::string, Object> extend_;
    bool extendIsSet_;
    WorkflowPolicy policy_;
    bool policyIsSet_;
    bool withSubscription_;
    bool withSubscriptionIsSet_;
    bool smnSwitch_;
    bool smnSwitchIsSet_;
    std::string subscriptionId_;
    bool subscriptionIdIsSet_;
    std::string exemlTemplateId_;
    bool exemlTemplateIdIsSet_;
    std::string lastModifiedAt_;
    bool lastModifiedAtIsSet_;
    WorkflowServicePackege package_;
    bool packageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowParam_H_
