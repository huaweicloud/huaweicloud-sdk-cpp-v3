
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListDriftDetailsResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListDriftDetailsResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/DriftDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ListDriftDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDriftDetailsResponse();
    virtual ~ListDriftDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDriftDetailsResponse members

    /// <summary>
    /// 漂移详细信息。
    /// </summary>

    std::vector<DriftDetail>& getDriftDetails();
    bool driftDetailsIsSet() const;
    void unsetdriftDetails();
    void setDriftDetails(const std::vector<DriftDetail>& value);


protected:
    std::vector<DriftDetail> driftDetails_;
    bool driftDetailsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListDriftDetailsResponse_H_
