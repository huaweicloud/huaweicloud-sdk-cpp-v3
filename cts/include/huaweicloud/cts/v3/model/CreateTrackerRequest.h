
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateTrackerRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateTrackerRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/CreateTrackerRequestBody.h>

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
class HUAWEICLOUD_CTS_V3_EXPORT  CreateTrackerRequest
    : public ModelBase
{
public:
    CreateTrackerRequest();
    virtual ~CreateTrackerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTrackerRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateTrackerRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTrackerRequestBody& value);


protected:
    CreateTrackerRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTrackerRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTrackerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateTrackerRequest_H_
