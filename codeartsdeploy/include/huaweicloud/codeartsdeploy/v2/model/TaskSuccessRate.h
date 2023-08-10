
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskSuccessRate_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskSuccessRate_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 单个应用的部署成功率
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  TaskSuccessRate
    : public ModelBase
{
public:
    TaskSuccessRate();
    virtual ~TaskSuccessRate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TaskSuccessRate members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 成功率
    /// </summary>

    std::string getSuccessRate() const;
    bool successRateIsSet() const;
    void unsetsuccessRate();
    void setSuccessRate(const std::string& value);

    /// <summary>
    /// 部署记录数
    /// </summary>

    int32_t getRecordCount() const;
    bool recordCountIsSet() const;
    void unsetrecordCount();
    void setRecordCount(int32_t value);

    /// <summary>
    /// 成功的部署记录数
    /// </summary>

    int32_t getSuccessRecordCount() const;
    bool successRecordCountIsSet() const;
    void unsetsuccessRecordCount();
    void setSuccessRecordCount(int32_t value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string successRate_;
    bool successRateIsSet_;
    int32_t recordCount_;
    bool recordCountIsSet_;
    int32_t successRecordCount_;
    bool successRecordCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskSuccessRate_H_
