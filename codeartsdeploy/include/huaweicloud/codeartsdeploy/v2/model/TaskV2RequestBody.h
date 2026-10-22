
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskV2RequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskV2RequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/DeployV2OperationsDO.h>
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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  TaskV2RequestBody
    : public ModelBase
{
public:
    TaskV2RequestBody();
    virtual ~TaskV2RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskV2RequestBody members

    /// <summary>
    /// 部署系统，deployTemplate：部署模板
    /// </summary>

    std::string getDeploySystem() const;
    bool deploySystemIsSet() const;
    void unsetdeploySystem();
    void setDeploySystem(const std::string& value);

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 是否切换新系统支持，1：是 0：否
    /// </summary>

    int32_t getAnsibleType() const;
    bool ansibleTypeIsSet() const;
    void unsetansibleType();
    void setAnsibleType(int32_t value);

    /// <summary>
    /// 部署编排列表信息
    /// </summary>

    std::vector<DeployV2OperationsDO>& getOperationList();
    bool operationListIsSet() const;
    void unsetoperationList();
    void setOperationList(const std::vector<DeployV2OperationsDO>& value);


protected:
    std::string deploySystem_;
    bool deploySystemIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    int32_t ansibleType_;
    bool ansibleTypeIsSet_;
    std::vector<DeployV2OperationsDO> operationList_;
    bool operationListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskV2RequestBody_H_
