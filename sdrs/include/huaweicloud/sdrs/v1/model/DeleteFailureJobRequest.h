
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteFailureJobRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteFailureJobRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  DeleteFailureJobRequest
    : public ModelBase
{
public:
    DeleteFailureJobRequest();
    virtual ~DeleteFailureJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteFailureJobRequest members

    /// <summary>
    /// 失败任务ID。
    /// </summary>

    std::string getFailureJobId() const;
    bool failureJobIdIsSet() const;
    void unsetfailureJobId();
    void setFailureJobId(const std::string& value);


protected:
    std::string failureJobId_;
    bool failureJobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteFailureJobRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteFailureJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteFailureJobRequest_H_
