
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceConfigurationRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateInstanceConfigurationRequestBody
    : public ModelBase
{
public:
    UpdateInstanceConfigurationRequestBody();
    virtual ~UpdateInstanceConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceConfigurationRequestBody members

    /// <summary>
    /// 参数值对象，用户基于默认参数模板自定义的参数值。为空时不修改参数值。  - key：参数名称，\&quot;max_connections\&quot;:\&quot;10\&quot;。为空时不修改参数值，key不为空时value也不可为空。 - value：参数值，\&quot;max_connections\&quot;:\&quot;10\&quot;。
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceConfigurationRequestBody_H_
