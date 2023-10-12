
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ChangeBandwidthToPeriodRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ChangeBandwidthToPeriodRequest_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/BwChangeToPeriodReq.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  ChangeBandwidthToPeriodRequest
    : public ModelBase
{
public:
    ChangeBandwidthToPeriodRequest();
    virtual ~ChangeBandwidthToPeriodRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeBandwidthToPeriodRequest members

    /// <summary>
    /// 
    /// </summary>

    BwChangeToPeriodReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BwChangeToPeriodReq& value);


protected:
    BwChangeToPeriodReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeBandwidthToPeriodRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeBandwidthToPeriodRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ChangeBandwidthToPeriodRequest_H_
