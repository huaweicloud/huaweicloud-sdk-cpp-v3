
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_CountEipAvailableResourcesRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_CountEipAvailableResourcesRequest_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/EipResourcesAvailableV3RequestBody.h>

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
class HUAWEICLOUD_EIP_V3_EXPORT  CountEipAvailableResourcesRequest
    : public ModelBase
{
public:
    CountEipAvailableResourcesRequest();
    virtual ~CountEipAvailableResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CountEipAvailableResourcesRequest members

    /// <summary>
    /// 
    /// </summary>

    EipResourcesAvailableV3RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EipResourcesAvailableV3RequestBody& value);


protected:
    EipResourcesAvailableV3RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CountEipAvailableResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<CountEipAvailableResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_CountEipAvailableResourcesRequest_H_
