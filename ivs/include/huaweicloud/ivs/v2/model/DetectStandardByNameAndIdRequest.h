
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectStandardByNameAndIdRequest_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectStandardByNameAndIdRequest_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/IvsStandardByNameAndIdRequestBody.h>

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
class HUAWEICLOUD_IVS_V2_EXPORT  DetectStandardByNameAndIdRequest
    : public ModelBase
{
public:
    DetectStandardByNameAndIdRequest();
    virtual ~DetectStandardByNameAndIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectStandardByNameAndIdRequest members

    /// <summary>
    /// 
    /// </summary>

    IvsStandardByNameAndIdRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IvsStandardByNameAndIdRequestBody& value);


protected:
    IvsStandardByNameAndIdRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectStandardByNameAndIdRequest& dereference_from_shared_ptr(std::shared_ptr<DetectStandardByNameAndIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectStandardByNameAndIdRequest_H_
