
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateSaveImageJobRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateSaveImageJobRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ImageSaveJob.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateSaveImageJobRequest
    : public ModelBase
{
public:
    CreateSaveImageJobRequest();
    virtual ~CreateSaveImageJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSaveImageJobRequest members

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
    /// 
    /// </summary>

    ImageSaveJob getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ImageSaveJob& value);


protected:
    std::string trainingJobId_;
    bool trainingJobIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    ImageSaveJob body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSaveImageJobRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSaveImageJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateSaveImageJobRequest_H_
