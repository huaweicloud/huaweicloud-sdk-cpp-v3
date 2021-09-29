
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByBase64Request_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByBase64Request_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/FaceCompareBase64Req.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  CompareFaceByBase64Request
    : public ModelBase
{
public:
    CompareFaceByBase64Request();
    virtual ~CompareFaceByBase64Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompareFaceByBase64Request members

    /// <summary>
    /// 
    /// </summary>

    FaceCompareBase64Req getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const FaceCompareBase64Req& value);


protected:
    FaceCompareBase64Req body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CompareFaceByBase64Request& dereference_from_shared_ptr(std::shared_ptr<CompareFaceByBase64Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByBase64Request_H_