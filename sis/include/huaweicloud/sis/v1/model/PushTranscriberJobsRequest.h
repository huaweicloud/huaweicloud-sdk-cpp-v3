
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PushTranscriberJobsRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PushTranscriberJobsRequest_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/PostTranscriberJobs.h>

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
class HUAWEICLOUD_SIS_V1_EXPORT  PushTranscriberJobsRequest
    : public ModelBase
{
public:
    PushTranscriberJobsRequest();
    virtual ~PushTranscriberJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PushTranscriberJobsRequest members

    /// <summary>
    /// 
    /// </summary>

    PostTranscriberJobs getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PostTranscriberJobs& value);


protected:
    PostTranscriberJobs body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    PushTranscriberJobsRequest& dereference_from_shared_ptr(std::shared_ptr<PushTranscriberJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PushTranscriberJobsRequest_H_
