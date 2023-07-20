
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowSlowLogDesensitizationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowSlowLogDesensitizationResponse_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowSlowLogDesensitizationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSlowLogDesensitizationResponse();
    virtual ~ShowSlowLogDesensitizationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSlowLogDesensitizationResponse members

    /// <summary>
    /// 实例慢日志脱敏开启状态，取值：  - on 开启  - off 关闭
    /// </summary>

    std::string getDesensitizationStatus() const;
    bool desensitizationStatusIsSet() const;
    void unsetdesensitizationStatus();
    void setDesensitizationStatus(const std::string& value);


protected:
    std::string desensitizationStatus_;
    bool desensitizationStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowSlowLogDesensitizationResponse_H_
