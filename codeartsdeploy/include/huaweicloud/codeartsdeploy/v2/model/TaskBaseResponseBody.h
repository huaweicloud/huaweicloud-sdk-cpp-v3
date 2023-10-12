
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskBaseResponseBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskBaseResponseBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  TaskBaseResponseBody
    : public ModelBase
{
public:
    TaskBaseResponseBody();
    virtual ~TaskBaseResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskBaseResponseBody members

    /// <summary>
    /// 部署任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 部署任务状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 部署任务类型
    /// </summary>

    std::string getDeploySystem() const;
    bool deploySystemIsSet() const;
    void unsetdeploySystem();
    void setDeploySystem(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string deploySystem_;
    bool deploySystemIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskBaseResponseBody_H_
