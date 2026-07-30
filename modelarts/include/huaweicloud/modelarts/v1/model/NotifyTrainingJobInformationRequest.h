
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotifyTrainingJobInformationRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotifyTrainingJobInformationRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ReportEventBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NotifyTrainingJobInformationRequest
    : public ModelBase
{
public:
    NotifyTrainingJobInformationRequest();
    virtual ~NotifyTrainingJobInformationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotifyTrainingJobInformationRequest members

    /// <summary>
    /// **参数解释**：训练作业ID。获取方法请参见[查询训练作业列表](ListTrainingJobs.xml)。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getTrainingJobId() const;
    bool trainingJobIdIsSet() const;
    void unsettrainingJobId();
    void setTrainingJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业的任务名称。可从训练作业详情中的status.tasks字段中获取。 **约束限制**：单节点默认为\&quot;worker-0\&quot;，多节点则为\&quot;worker-0\&quot;、\&quot;worker-1\&quot;，依次类推。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**：事件上报类型。 **约束限制**：不涉及。 **取值范围**：取\&quot;training-event\&quot;。 **默认取值**：不涉及。
    /// </summary>

    std::string getReportType() const;
    bool reportTypeIsSet() const;
    void unsetreportType();
    void setReportType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReportEventBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReportEventBody& value);


protected:
    std::string trainingJobId_;
    bool trainingJobIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string reportType_;
    bool reportTypeIsSet_;
    ReportEventBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NotifyTrainingJobInformationRequest& dereference_from_shared_ptr(std::shared_ptr<NotifyTrainingJobInformationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotifyTrainingJobInformationRequest_H_
