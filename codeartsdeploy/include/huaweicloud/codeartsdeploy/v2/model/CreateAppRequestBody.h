
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateAppRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateAppRequestBody_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/TaskV2RequestBody.h>
#include <vector>
#include <huaweicloud/codeartsdeploy/v2/model/TaskTriggerVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建应用请求体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CreateAppRequestBody
    : public ModelBase
{
public:
    CreateAppRequestBody();
    virtual ~CreateAppRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateAppRequestBody members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 是否为草稿
    /// </summary>

    bool isIsDraft() const;
    bool isDraftIsSet() const;
    void unsetisDraft();
    void setIsDraft(bool value);

    /// <summary>
    /// 创建类型，创建类型只有一个&#39;template&#39;，即根据模板创建
    /// </summary>

    std::string getCreateType() const;
    bool createTypeIsSet() const;
    void unsetcreateType();
    void setCreateType(const std::string& value);

    /// <summary>
    /// 自定义slave资源池id
    /// </summary>

    std::string getSlaveClusterId() const;
    bool slaveClusterIdIsSet() const;
    void unsetslaveClusterId();
    void setSlaveClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskTriggerVO getTrigger() const;
    bool triggerIsSet() const;
    void unsettrigger();
    void setTrigger(const TaskTriggerVO& value);

    /// <summary>
    /// 部署任务列表信息
    /// </summary>

    std::vector<TaskV2RequestBody>& getArrangeInfos();
    bool arrangeInfosIsSet() const;
    void unsetarrangeInfos();
    void setArrangeInfos(const std::vector<TaskV2RequestBody>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isDraft_;
    bool isDraftIsSet_;
    std::string createType_;
    bool createTypeIsSet_;
    std::string slaveClusterId_;
    bool slaveClusterIdIsSet_;
    TaskTriggerVO trigger_;
    bool triggerIsSet_;
    std::vector<TaskV2RequestBody> arrangeInfos_;
    bool arrangeInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateAppRequestBody_H_
