
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_JobState_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_JobState_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  JobState
: public ModelBase
{
public:
    JobState();
    virtual ~JobState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eJobState 
    {
        JobState_CREATING,
        JobState_SYSTEM_AUDITING,
        JobState_AUDITING,
        JobState_WAITING_SPLIT,
        JobState_SPLITTING,
        JobState_SPLIT_FAILED,
        JobState_ANNOTATING,
        JobState_WAITING,
        JobState_PROCESSING,
        JobState_RESULT_REVIEW,
        JobState_AUDIT_FAILED,
        JobState_USER_RESULT_REVIEW,
        JobState_USER_REVIEW_REJECT,
        JobState_UPLOADING,
        JobState_FAILED,
        JobState_SUCCEED,
    };

    eJobState getValue() const;
    void setValue(eJobState const value);

protected:
    eJobState value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_JobState_H_
