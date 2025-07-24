
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateServiceRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateServiceRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ServiceRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateServiceRequest
    : public ModelBase
{
public:
    UpdateServiceRequest();
    virtual ~UpdateServiceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServiceRequest members

    /// <summary>
    /// 注册服务唯一标识，该值由注册接口返回
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ServiceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ServiceRequestBody& value);


protected:
    int32_t serviceId_;
    bool serviceIdIsSet_;
    ServiceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateServiceRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateServiceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateServiceRequest_H_
