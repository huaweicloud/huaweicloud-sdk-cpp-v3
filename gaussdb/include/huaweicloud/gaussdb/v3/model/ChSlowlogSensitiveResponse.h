
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChSlowlogSensitiveResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChSlowlogSensitiveResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChSlowlogSensitiveResponse
    : public ModelBase
{
public:
    ChSlowlogSensitiveResponse();
    virtual ~ChSlowlogSensitiveResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChSlowlogSensitiveResponse members

    /// <summary>
    /// 慢日志脱敏开关。
    /// </summary>

    std::string getOpenSlowLogSwitch() const;
    bool openSlowLogSwitchIsSet() const;
    void unsetopenSlowLogSwitch();
    void setOpenSlowLogSwitch(const std::string& value);


protected:
    std::string openSlowLogSwitch_;
    bool openSlowLogSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChSlowlogSensitiveResponse_H_
