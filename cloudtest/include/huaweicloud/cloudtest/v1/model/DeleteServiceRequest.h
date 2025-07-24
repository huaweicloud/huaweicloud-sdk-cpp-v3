
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteServiceRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteServiceRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteServiceRequest
    : public ModelBase
{
public:
    DeleteServiceRequest();
    virtual ~DeleteServiceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteServiceRequest members

    /// <summary>
    /// 注册服务唯一标识，该值由注册接口返回
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);


protected:
    int32_t serviceId_;
    bool serviceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteServiceRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteServiceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteServiceRequest_H_
