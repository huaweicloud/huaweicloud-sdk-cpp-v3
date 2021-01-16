
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateTagRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateTagRequest_H_

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
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceCreateTagRequest
    : public ModelBase
{
public:
    GlanceCreateTagRequest();
    virtual ~GlanceCreateTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceCreateTagRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string tag_;
    bool tagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceCreateTagRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceCreateTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateTagRequest_H_
