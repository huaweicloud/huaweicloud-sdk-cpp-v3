
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateTrackerRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateTrackerRequest_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/UpdateTrackerRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  UpdateTrackerRequest
    : public ModelBase
{
public:
    UpdateTrackerRequest();
    virtual ~UpdateTrackerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateTrackerRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateTrackerRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateTrackerRequestBody& value);


protected:
    UpdateTrackerRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTrackerRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTrackerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateTrackerRequest_H_
