
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/BatchDeleteSubscriptionsRequestBody.h>

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
class HUAWEICLOUD_SMN_V2_EXPORT  BatchDeleteSubscriptionsRequest
    : public ModelBase
{
public:
    BatchDeleteSubscriptionsRequest();
    virtual ~BatchDeleteSubscriptionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSubscriptionsRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteSubscriptionsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteSubscriptionsRequestBody& value);


protected:
    BatchDeleteSubscriptionsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteSubscriptionsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteSubscriptionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsRequest_H_
