
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowlogSensitiveStatusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowlogSensitiveStatusResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowSlowlogSensitiveStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSlowlogSensitiveStatusResponse();
    virtual ~ShowSlowlogSensitiveStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSlowlogSensitiveStatusResponse members

    /// <summary>
    /// 慢日志开关状态。
    /// </summary>

    bool isOpenSlowLogSwitch() const;
    bool openSlowLogSwitchIsSet() const;
    void unsetopenSlowLogSwitch();
    void setOpenSlowLogSwitch(bool value);


protected:
    bool openSlowLogSwitch_;
    bool openSlowLogSwitchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowlogSensitiveStatusResponse_H_
