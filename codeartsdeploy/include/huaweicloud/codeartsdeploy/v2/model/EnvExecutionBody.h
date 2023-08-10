
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvExecutionBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvExecutionBody_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/DynamicConfigInfo.h>
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
/// 应用启动参数
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  EnvExecutionBody
    : public ModelBase
{
public:
    EnvExecutionBody();
    virtual ~EnvExecutionBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EnvExecutionBody members

    /// <summary>
    /// 部署应用时传递的参数
    /// </summary>

    std::vector<DynamicConfigInfo>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<DynamicConfigInfo>& value);

    /// <summary>
    /// 应用的部署id，可通过record_id回滚至之前的部署状态。选中应用历史部署记录，在URL中获取
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// 限制触发来源,0不限制任何部署请求来源,1时只允许通过流水线触发部署
    /// </summary>

    std::string getTriggerSource() const;
    bool triggerSourceIsSet() const;
    void unsettriggerSource();
    void setTriggerSource(const std::string& value);


protected:
    std::vector<DynamicConfigInfo> params_;
    bool paramsIsSet_;
    std::string recordId_;
    bool recordIdIsSet_;
    std::string triggerSource_;
    bool triggerSourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvExecutionBody_H_
