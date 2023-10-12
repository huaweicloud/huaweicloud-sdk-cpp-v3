
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateConfigurationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateConfigurationResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ConfigurationSummaryForCreate.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  CreateConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateConfigurationResponse();
    virtual ~CreateConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateConfigurationResponse members

    /// <summary>
    /// 
    /// </summary>

    ConfigurationSummaryForCreate getConfiguration() const;
    bool configurationIsSet() const;
    void unsetconfiguration();
    void setConfiguration(const ConfigurationSummaryForCreate& value);


protected:
    ConfigurationSummaryForCreate configuration_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateConfigurationResponse_H_
