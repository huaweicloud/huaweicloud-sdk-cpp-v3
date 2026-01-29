
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateInstanceConfigurationsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateInstanceConfigurationsRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  UpdateInstanceConfigurationsRequestBody
    : public ModelBase
{
public:
    UpdateInstanceConfigurationsRequestBody();
    virtual ~UpdateInstanceConfigurationsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceConfigurationsRequestBody members

    /// <summary>
    /// **参数解释：** 参数值对象，用户基于默认参数模板自定义的参数值。 **约束限制:** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 为空时不修改参数值。
    /// </summary>

    std::map<std::string, std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateInstanceConfigurationsRequestBody_H_
