
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDeleteInternetBandwidthTagsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDeleteInternetBandwidthTagsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/BatchDeleteV2RequestBody.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchDeleteInternetBandwidthTagsRequest
    : public ModelBase
{
public:
    BatchDeleteInternetBandwidthTagsRequest();
    virtual ~BatchDeleteInternetBandwidthTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInternetBandwidthTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteV2RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteV2RequestBody& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    BatchDeleteV2RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteInternetBandwidthTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteInternetBandwidthTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDeleteInternetBandwidthTagsRequest_H_
