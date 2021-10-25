
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteServerGroupFailureJobsRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteServerGroupFailureJobsRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_SDRS_V1_EXPORT  DeleteServerGroupFailureJobsRequest
    : public ModelBase
{
public:
    DeleteServerGroupFailureJobsRequest();
    virtual ~DeleteServerGroupFailureJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteServerGroupFailureJobsRequest members

    /// <summary>
    /// 保护组ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteServerGroupFailureJobsRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteServerGroupFailureJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteServerGroupFailureJobsRequest_H_
