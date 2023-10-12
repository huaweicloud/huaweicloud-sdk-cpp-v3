
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchSlowlogDesensitizationRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchSlowlogDesensitizationRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SwitchSlowlogDesensitizationRequestBody
    : public ModelBase
{
public:
    SwitchSlowlogDesensitizationRequestBody();
    virtual ~SwitchSlowlogDesensitizationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchSlowlogDesensitizationRequestBody members

    /// <summary>
    /// 实例慢日志脱敏开关开启状态，取值： - off 关闭
    /// </summary>

    std::string getDesensitizationStatus() const;
    bool desensitizationStatusIsSet() const;
    void unsetdesensitizationStatus();
    void setDesensitizationStatus(const std::string& value);


protected:
    std::string desensitizationStatus_;
    bool desensitizationStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchSlowlogDesensitizationRequestBody_H_
