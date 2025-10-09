
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvaliableZoneResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvaliableZoneResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/GetAvailableZoneResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetAvaliableZoneResponse
    : public ModelBase, public HttpResponse
{
public:
    GetAvaliableZoneResponse();
    virtual ~GetAvaliableZoneResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAvaliableZoneResponse members

    /// <summary>
    /// **参数解释**: 可用区列表信息
    /// </summary>

    std::vector<GetAvailableZoneResponseBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<GetAvailableZoneResponseBody>& value);


protected:
    std::vector<GetAvailableZoneResponseBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvaliableZoneResponse_H_
