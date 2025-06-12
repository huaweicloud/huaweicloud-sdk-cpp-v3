
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmTrainingSegmentRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmTrainingSegmentRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ConfirmTrainingSegmentRequest
    : public ModelBase
{
public:
    ConfirmTrainingSegmentRequest();
    virtual ~ConfirmTrainingSegmentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfirmTrainingSegmentRequest members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 语句索引。
    /// </summary>

    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(int32_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t index_;
    bool indexIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ConfirmTrainingSegmentRequest& dereference_from_shared_ptr(std::shared_ptr<ConfirmTrainingSegmentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmTrainingSegmentRequest_H_
