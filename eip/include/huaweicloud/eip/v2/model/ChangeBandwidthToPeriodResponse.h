
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ChangeBandwidthToPeriodResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ChangeBandwidthToPeriodResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_EIP_V2_EXPORT  ChangeBandwidthToPeriodResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeBandwidthToPeriodResponse();
    virtual ~ChangeBandwidthToPeriodResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeBandwidthToPeriodResponse members

    /// <summary>
    /// 转包带宽列表
    /// </summary>

    std::vector<std::string>& getBandwidthIds();
    bool bandwidthIdsIsSet() const;
    void unsetbandwidthIds();
    void setBandwidthIds(const std::vector<std::string>& value);

    /// <summary>
    /// 订单ID
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 请求ID
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<std::string> bandwidthIds_;
    bool bandwidthIdsIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ChangeBandwidthToPeriodResponse_H_
