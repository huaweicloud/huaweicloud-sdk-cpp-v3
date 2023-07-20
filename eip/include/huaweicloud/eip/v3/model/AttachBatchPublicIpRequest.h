
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_AttachBatchPublicIpRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_AttachBatchPublicIpRequest_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/BatchAttachSharebwReq.h>

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
class HUAWEICLOUD_EIP_V3_EXPORT  AttachBatchPublicIpRequest
    : public ModelBase
{
public:
    AttachBatchPublicIpRequest();
    virtual ~AttachBatchPublicIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachBatchPublicIpRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchAttachSharebwReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAttachSharebwReq& value);


protected:
    BatchAttachSharebwReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AttachBatchPublicIpRequest& dereference_from_shared_ptr(std::shared_ptr<AttachBatchPublicIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_AttachBatchPublicIpRequest_H_
