
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateSubscriptionsFilterPolicesRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateSubscriptionsFilterPolicesRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/BatchSubscriptionsFilterPolicesRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  BatchCreateSubscriptionsFilterPolicesRequest
    : public ModelBase
{
public:
    BatchCreateSubscriptionsFilterPolicesRequest();
    virtual ~BatchCreateSubscriptionsFilterPolicesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateSubscriptionsFilterPolicesRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchSubscriptionsFilterPolicesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchSubscriptionsFilterPolicesRequestBody& value);


protected:
    BatchSubscriptionsFilterPolicesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateSubscriptionsFilterPolicesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateSubscriptionsFilterPolicesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateSubscriptionsFilterPolicesRequest_H_
