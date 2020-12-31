
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequest_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ims/model/GlanceUpdateImageMemberRequestBody.h"
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
class HUAWEICLOUD_IMS_EXPORT  GlanceUpdateImageMemberRequest
    : public ModelBase
{
public:
    GlanceUpdateImageMemberRequest();
    virtual ~GlanceUpdateImageMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceUpdateImageMemberRequest members

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

    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GlanceUpdateImageMemberRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GlanceUpdateImageMemberRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string memberId_;
    bool memberIdIsSet_;
    GlanceUpdateImageMemberRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceUpdateImageMemberRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceUpdateImageMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequest_H_
