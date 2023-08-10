
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StartDeployTaskResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StartDeployTaskResponse_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/AppComponentDao.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  StartDeployTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    StartDeployTaskResponse();
    virtual ~StartDeployTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StartDeployTaskResponse members

    /// <summary>
    /// 部署记录id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 部署任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 执行任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 应用和AOM应用组件对应关系
    /// </summary>

    std::vector<AppComponentDao>& getAppComponentList();
    bool appComponentListIsSet() const;
    void unsetappComponentList();
    void setAppComponentList(const std::vector<AppComponentDao>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::vector<AppComponentDao> appComponentList_;
    bool appComponentListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StartDeployTaskResponse_H_
