
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateOrderRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateOrderRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CbcUpdate.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateOrderRequest
    : public ModelBase
{
public:
    UpdateOrderRequest();
    virtual ~UpdateOrderRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateOrderRequest members

    /// <summary>
    /// 订单ID
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CbcUpdate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CbcUpdate& value);


protected:
    std::string orderId_;
    bool orderIdIsSet_;
    CbcUpdate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateOrderRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateOrderRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateOrderRequest_H_
