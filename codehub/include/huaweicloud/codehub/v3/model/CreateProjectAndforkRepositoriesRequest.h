
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateProjectAndforkRepositoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateProjectAndforkRepositoriesRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/ForkProjectRepoRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  CreateProjectAndforkRepositoriesRequest
    : public ModelBase
{
public:
    CreateProjectAndforkRepositoriesRequest();
    virtual ~CreateProjectAndforkRepositoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectAndforkRepositoriesRequest members

    /// <summary>
    /// 
    /// </summary>

    ForkProjectRepoRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ForkProjectRepoRequest& value);


protected:
    ForkProjectRepoRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateProjectAndforkRepositoriesRequest& dereference_from_shared_ptr(std::shared_ptr<CreateProjectAndforkRepositoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateProjectAndforkRepositoriesRequest_H_
