
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageTagsRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageTagsRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListImageTagsRequest
    : public ModelBase
{
public:
    ListImageTagsRequest();
    virtual ~ListImageTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImageTagsRequest members

    /// <summary>
    /// 镜像ID。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListImageTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListImageTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageTagsRequest_H_
