
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceConfigurationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceConfigurationResponse_H_

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
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateInstanceConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateInstanceConfigurationResponse();
    virtual ~UpdateInstanceConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateInstanceConfigurationResponse members

    /// <summary>
    /// 实例是否需要重启。  - “true”需要重启。 - “false”不需要重启。
    /// </summary>

    bool isRestartRequired() const;
    bool restartRequiredIsSet() const;
    void unsetrestartRequired();
    void setRestartRequired(bool value);


protected:
    bool restartRequired_;
    bool restartRequiredIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceConfigurationResponse_H_
