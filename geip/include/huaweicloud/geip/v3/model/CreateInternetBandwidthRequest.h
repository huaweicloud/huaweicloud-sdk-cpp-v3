
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateInternetBandwidthRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateInternetBandwidthRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateInternetBandwidthRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateInternetBandwidthRequest
    : public ModelBase
{
public:
    CreateInternetBandwidthRequest();
    virtual ~CreateInternetBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInternetBandwidthRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateInternetBandwidthRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateInternetBandwidthRequestBody& value);


protected:
    CreateInternetBandwidthRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateInternetBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<CreateInternetBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateInternetBandwidthRequest_H_
