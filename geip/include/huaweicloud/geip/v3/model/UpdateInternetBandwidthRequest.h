
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/UpdateInternetBandwidthRequestBody.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateInternetBandwidthRequest
    : public ModelBase
{
public:
    UpdateInternetBandwidthRequest();
    virtual ~UpdateInternetBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInternetBandwidthRequest members

    /// <summary>
    /// 全域公网带宽的ID
    /// </summary>

    std::string getInternetBandwidthId() const;
    bool internetBandwidthIdIsSet() const;
    void unsetinternetBandwidthId();
    void setInternetBandwidthId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateInternetBandwidthRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateInternetBandwidthRequestBody& value);


protected:
    std::string internetBandwidthId_;
    bool internetBandwidthIdIsSet_;
    UpdateInternetBandwidthRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateInternetBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateInternetBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequest_H_
