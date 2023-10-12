
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_CollectTranscriberJobRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_CollectTranscriberJobRequest_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  CollectTranscriberJobRequest
    : public ModelBase
{
public:
    CollectTranscriberJobRequest();
    virtual ~CollectTranscriberJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectTranscriberJobRequest members

    /// <summary>
    /// 录音文件识别任务标识符。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CollectTranscriberJobRequest& dereference_from_shared_ptr(std::shared_ptr<CollectTranscriberJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_CollectTranscriberJobRequest_H_
