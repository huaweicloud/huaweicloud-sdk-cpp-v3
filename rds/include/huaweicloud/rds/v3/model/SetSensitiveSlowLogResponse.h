
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetSensitiveSlowLogResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetSensitiveSlowLogResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetSensitiveSlowLogResponse
    : public ModelBase, public HttpResponse
{
public:
    SetSensitiveSlowLogResponse();
    virtual ~SetSensitiveSlowLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SetSensitiveSlowLogResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetSensitiveSlowLogResponse_H_
