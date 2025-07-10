
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlViolationsResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlViolationsResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/ControlViolation.h>
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
class HUAWEICLOUD_RGC_V1_EXPORT  ListControlViolationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListControlViolationsResponse();
    virtual ~ListControlViolationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListControlViolationsResponse members

    /// <summary>
    /// 控制策略合规性。
    /// </summary>

    std::vector<ControlViolation>& getControlViolations();
    bool controlViolationsIsSet() const;
    void unsetcontrolViolations();
    void setControlViolations(const std::vector<ControlViolation>& value);


protected:
    std::vector<ControlViolation> controlViolations_;
    bool controlViolationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlViolationsResponse_H_
