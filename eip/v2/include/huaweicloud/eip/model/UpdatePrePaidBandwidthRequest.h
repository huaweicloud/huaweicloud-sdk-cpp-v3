
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/UpdatePrePaidBandwidthRequestBody.h"
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  UpdatePrePaidBandwidthRequest
    : public ModelBase
{
public:
    UpdatePrePaidBandwidthRequest();
    virtual ~UpdatePrePaidBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePrePaidBandwidthRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdatePrePaidBandwidthRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdatePrePaidBandwidthRequestBody& value);


protected:
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    UpdatePrePaidBandwidthRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePrePaidBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePrePaidBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthRequest_H_
