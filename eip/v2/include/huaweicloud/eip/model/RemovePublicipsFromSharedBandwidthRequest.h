
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/RemovePublicipsFromSharedBandwidthRequestBody.h"
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
class HUAWEICLOUD_EIP_EXPORT  RemovePublicipsFromSharedBandwidthRequest
    : public ModelBase
{
public:
    RemovePublicipsFromSharedBandwidthRequest();
    virtual ~RemovePublicipsFromSharedBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RemovePublicipsFromSharedBandwidthRequest members

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

    RemovePublicipsFromSharedBandwidthRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RemovePublicipsFromSharedBandwidthRequestBody& value);


protected:
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    RemovePublicipsFromSharedBandwidthRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemovePublicipsFromSharedBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<RemovePublicipsFromSharedBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthRequest_H_
