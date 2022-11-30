
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByNameAndIdRequest_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByNameAndIdRequest_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/IvsExtentionByNameAndIdRequestBody.h>

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
class HUAWEICLOUD_IVS_V2_EXPORT  DetectExtentionByNameAndIdRequest
    : public ModelBase
{
public:
    DetectExtentionByNameAndIdRequest();
    virtual ~DetectExtentionByNameAndIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectExtentionByNameAndIdRequest members

    /// <summary>
    /// 
    /// </summary>

    IvsExtentionByNameAndIdRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IvsExtentionByNameAndIdRequestBody& value);


protected:
    IvsExtentionByNameAndIdRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectExtentionByNameAndIdRequest& dereference_from_shared_ptr(std::shared_ptr<DetectExtentionByNameAndIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByNameAndIdRequest_H_
