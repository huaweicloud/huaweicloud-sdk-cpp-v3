
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetConfigurationResponseBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetConfigurationResponseBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetConfigurationResponseBody
    : public ModelBase
{
public:
    SetConfigurationResponseBody();
    virtual ~SetConfigurationResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetConfigurationResponseBody members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetConfigurationResponseBody_H_
