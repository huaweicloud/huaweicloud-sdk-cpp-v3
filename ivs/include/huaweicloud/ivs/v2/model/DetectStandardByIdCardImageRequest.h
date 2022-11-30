
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectStandardByIdCardImageRequest_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectStandardByIdCardImageRequest_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/IvsStandardByIdCardImageRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  DetectStandardByIdCardImageRequest
    : public ModelBase
{
public:
    DetectStandardByIdCardImageRequest();
    virtual ~DetectStandardByIdCardImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectStandardByIdCardImageRequest members

    /// <summary>
    /// 
    /// </summary>

    IvsStandardByIdCardImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IvsStandardByIdCardImageRequestBody& value);


protected:
    IvsStandardByIdCardImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectStandardByIdCardImageRequest& dereference_from_shared_ptr(std::shared_ptr<DetectStandardByIdCardImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectStandardByIdCardImageRequest_H_
