
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesRequest_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/SetChargeModesBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SetChargeModesRequest
    : public ModelBase
{
public:
    SetChargeModesRequest();
    virtual ~SetChargeModesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SetChargeModesRequest members

    /// <summary>
    /// 
    /// </summary>

    SetChargeModesBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetChargeModesBody& value);


protected:
    SetChargeModesBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetChargeModesRequest& dereference_from_shared_ptr(std::shared_ptr<SetChargeModesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesRequest_H_
