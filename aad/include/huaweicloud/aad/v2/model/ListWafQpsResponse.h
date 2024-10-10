
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafQpsResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafQpsResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/Point.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListWafQpsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWafQpsResponse();
    virtual ~ListWafQpsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWafQpsResponse members

    /// <summary>
    /// curve
    /// </summary>

    std::vector<Point>& getCurve();
    bool curveIsSet() const;
    void unsetcurve();
    void setCurve(const std::vector<Point>& value);


protected:
    std::vector<Point> curve_;
    bool curveIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafQpsResponse_H_
