
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthResponse_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v2/model/BandwidthResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  UpdatePrePaidBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdatePrePaidBandwidthResponse();
    virtual ~UpdatePrePaidBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePrePaidBandwidthResponse members

    /// <summary>
    /// 
    /// </summary>

    BandwidthResp getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const BandwidthResp& value);

    /// <summary>
    /// 订单号（包周期场景返回该字段）
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    BandwidthResp bandwidth_;
    bool bandwidthIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthResponse_H_
