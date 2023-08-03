
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateConfigurationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateConfigurationResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/UpdateConfigurationRsp_configuration.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateConfigurationResponse();
    virtual ~UpdateConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateConfigurationResponse members

    /// <summary>
    /// 
    /// </summary>

    UpdateConfigurationRsp_configuration getConfiguration() const;
    bool configurationIsSet() const;
    void unsetconfiguration();
    void setConfiguration(const UpdateConfigurationRsp_configuration& value);


protected:
    UpdateConfigurationRsp_configuration configuration_;
    bool configurationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateConfigurationResponse_H_
