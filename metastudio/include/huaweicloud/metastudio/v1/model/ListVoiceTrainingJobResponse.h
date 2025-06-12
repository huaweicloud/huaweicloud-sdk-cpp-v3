
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVoiceTrainingJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVoiceTrainingJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TrainingJobInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListVoiceTrainingJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVoiceTrainingJobResponse();
    virtual ~ListVoiceTrainingJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVoiceTrainingJobResponse members

    /// <summary>
    /// 满足查询要求的任务总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 分身数字人模型训练任务列表。
    /// </summary>

    std::vector<TrainingJobInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<TrainingJobInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<TrainingJobInfo> jobs_;
    bool jobsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVoiceTrainingJobResponse_H_
