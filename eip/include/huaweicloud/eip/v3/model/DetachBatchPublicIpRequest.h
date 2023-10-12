
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchPublicIpRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchPublicIpRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/DetachBatchSharedbwReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DetachBatchPublicIpRequest
    : public ModelBase
{
public:
    DetachBatchPublicIpRequest();
    virtual ~DetachBatchPublicIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachBatchPublicIpRequest members

    /// <summary>
    /// 
    /// </summary>

    DetachBatchSharedbwReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DetachBatchSharedbwReq& value);


protected:
    DetachBatchSharedbwReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetachBatchPublicIpRequest& dereference_from_shared_ptr(std::shared_ptr<DetachBatchPublicIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchPublicIpRequest_H_
