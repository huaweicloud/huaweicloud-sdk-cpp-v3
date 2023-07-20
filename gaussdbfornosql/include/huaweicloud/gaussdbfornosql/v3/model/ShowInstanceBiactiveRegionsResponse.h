
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowInstanceBiactiveRegionsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowInstanceBiactiveRegionsResponse_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowInstanceBiactiveRegionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceBiactiveRegionsResponse();
    virtual ~ShowInstanceBiactiveRegionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowInstanceBiactiveRegionsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getRegionCodes();
    bool regionCodesIsSet() const;
    void unsetregionCodes();
    void setRegionCodes(const std::vector<std::string>& value);


protected:
    std::vector<std::string> regionCodes_;
    bool regionCodesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowInstanceBiactiveRegionsResponse_H_
