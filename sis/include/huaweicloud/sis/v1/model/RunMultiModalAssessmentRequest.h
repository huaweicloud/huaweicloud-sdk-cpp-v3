
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RunMultiModalAssessmentRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RunMultiModalAssessmentRequest_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/PostMultiModalAssessmentReq.h>

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
class HUAWEICLOUD_SIS_V1_EXPORT  RunMultiModalAssessmentRequest
    : public ModelBase
{
public:
    RunMultiModalAssessmentRequest();
    virtual ~RunMultiModalAssessmentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RunMultiModalAssessmentRequest members

    /// <summary>
    /// 
    /// </summary>

    PostMultiModalAssessmentReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PostMultiModalAssessmentReq& value);


protected:
    PostMultiModalAssessmentReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunMultiModalAssessmentRequest& dereference_from_shared_ptr(std::shared_ptr<RunMultiModalAssessmentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RunMultiModalAssessmentRequest_H_
