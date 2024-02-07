
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteInternetBandwidthTagRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteInternetBandwidthTagRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  DeleteInternetBandwidthTagRequest
    : public ModelBase
{
public:
    DeleteInternetBandwidthTagRequest();
    virtual ~DeleteInternetBandwidthTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInternetBandwidthTagRequest members

    /// <summary>
    /// 全域公网带宽的id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 待删除标签的key
    /// </summary>

    std::string getTagKey() const;
    bool tagKeyIsSet() const;
    void unsettagKey();
    void setTagKey(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string tagKey_;
    bool tagKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteInternetBandwidthTagRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteInternetBandwidthTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteInternetBandwidthTagRequest_H_
