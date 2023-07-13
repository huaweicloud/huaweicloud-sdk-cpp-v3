
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteSqlAlarmRuleResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteSqlAlarmRuleResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteSqlAlarmRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteSqlAlarmRuleResponse();
    virtual ~DeleteSqlAlarmRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteSqlAlarmRuleResponse members


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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteSqlAlarmRuleResponse_H_
