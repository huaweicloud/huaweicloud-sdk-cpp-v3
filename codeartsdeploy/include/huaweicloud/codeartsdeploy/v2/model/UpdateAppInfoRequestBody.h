
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppInfoRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppInfoRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/UpdateTaskV2RequestBody.h>
#include <string>
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
/// 更新应用请求体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  UpdateAppInfoRequestBody
    : public ModelBase
{
public:
    UpdateAppInfoRequestBody();
    virtual ~UpdateAppInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAppInfoRequestBody members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 项目id
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
    /// 创建类型，template：部署模板创建
    /// </summary>

    std::string getCreateType() const;
    bool createTypeIsSet() const;
    void unsetcreateType();
    void setCreateType(const std::string& value);

    /// <summary>
    /// 分组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

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

    std::vector<UpdateTaskV2RequestBody>& getArrangeInfos();
    bool arrangeInfosIsSet() const;
    void unsetarrangeInfos();
    void setArrangeInfos(const std::vector<UpdateTaskV2RequestBody>& value);

    /// <summary>
    /// 委托URN
    /// </summary>

    std::string getAgencyUrn() const;
    bool agencyUrnIsSet() const;
    void unsetagencyUrn();
    void setAgencyUrn(const std::string& value);

    /// <summary>
    /// 资源池类型
    /// </summary>

    std::string getSlaveResourceType() const;
    bool slaveResourceTypeIsSet() const;
    void unsetslaveResourceType();
    void setSlaveResourceType(const std::string& value);

    /// <summary>
    /// 任务执行超时时间
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
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
    std::string groupId_;
    bool groupIdIsSet_;
    std::string slaveClusterId_;
    bool slaveClusterIdIsSet_;
    TaskTriggerVO trigger_;
    bool triggerIsSet_;
    std::vector<UpdateTaskV2RequestBody> arrangeInfos_;
    bool arrangeInfosIsSet_;
    std::string agencyUrn_;
    bool agencyUrnIsSet_;
    std::string slaveResourceType_;
    bool slaveResourceTypeIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppInfoRequestBody_H_
