
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AddInternetBandwidthTagsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AddInternetBandwidthTagsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/CreateV2TagRequestBody.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  AddInternetBandwidthTagsRequest
    : public ModelBase
{
public:
    AddInternetBandwidthTagsRequest();
    virtual ~AddInternetBandwidthTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddInternetBandwidthTagsRequest members

    /// <summary>
    /// 全域公网带宽的id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateV2TagRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateV2TagRequestBody& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    CreateV2TagRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddInternetBandwidthTagsRequest& dereference_from_shared_ptr(std::shared_ptr<AddInternetBandwidthTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AddInternetBandwidthTagsRequest_H_
