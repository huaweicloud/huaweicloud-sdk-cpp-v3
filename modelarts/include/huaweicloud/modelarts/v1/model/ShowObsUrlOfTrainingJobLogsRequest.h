
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowObsUrlOfTrainingJobLogsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowObsUrlOfTrainingJobLogsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowObsUrlOfTrainingJobLogsRequest
    : public ModelBase
{
public:
    ShowObsUrlOfTrainingJobLogsRequest();
    virtual ~ShowObsUrlOfTrainingJobLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowObsUrlOfTrainingJobLogsRequest members

    /// <summary>
    /// 训练作业ID。获取方法请参见[查询训练作业列表](ListTrainingJobs.xml)。
    /// </summary>

    std::string getTrainingJobId() const;
    bool trainingJobIdIsSet() const;
    void unsettrainingJobId();
    void setTrainingJobId(const std::string& value);

    /// <summary>
    /// 训练作业的任务名称。可从训练作业详情中的status.tasks字段中获取。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 消息体的类型。设置为text/plain，返回临时预览链接。设置为application/octet-stream，返回临时下载链接。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string trainingJobId_;
    bool trainingJobIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowObsUrlOfTrainingJobLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowObsUrlOfTrainingJobLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowObsUrlOfTrainingJobLogsRequest_H_
