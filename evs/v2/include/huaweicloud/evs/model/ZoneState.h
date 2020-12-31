
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ZoneState_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ZoneState_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"


namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 可用分区的状态。
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  ZoneState
    : public ModelBase
{
public:
    ZoneState();
    virtual ~ZoneState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ZoneState members

    /// <summary>
    /// 可用分区是否可用。
    /// </summary>

    bool isAvailable() const;
    bool availableIsSet() const;
    void unsetavailable();
    void setAvailable(bool value);


protected:
    bool available_;
    bool availableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ZoneState_H_
