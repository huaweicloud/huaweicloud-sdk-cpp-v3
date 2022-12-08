
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/BatchDeletePublicIpRequestBody.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  BatchDeletePublicIpRequest
    : public ModelBase
{
public:
    BatchDeletePublicIpRequest();
    virtual ~BatchDeletePublicIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeletePublicIpRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchDeletePublicIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeletePublicIpRequestBody& value);


protected:
    BatchDeletePublicIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeletePublicIpRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeletePublicIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpRequest_H_
