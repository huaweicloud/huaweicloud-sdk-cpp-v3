
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListConfigurationsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListConfigurationsResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ConfigurationSummary.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListConfigurationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConfigurationsResponse();
    virtual ~ListConfigurationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListConfigurationsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ConfigurationSummary>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<ConfigurationSummary>& value);


protected:
    std::vector<ConfigurationSummary> configurations_;
    bool configurationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListConfigurationsResponse_H_
