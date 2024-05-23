
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdatePasswordlessConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdatePasswordlessConfigRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  UpdatePasswordlessConfigRequestBody
    : public ModelBase
{
public:
    UpdatePasswordlessConfigRequestBody();
    virtual ~UpdatePasswordlessConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePasswordlessConfigRequestBody members

    /// <summary>
    /// 要设置的免密配置,ip与网段的列表,空列表表示清空免密配置。
    /// </summary>

    std::vector<std::string>& getConfigIps();
    bool configIpsIsSet() const;
    void unsetconfigIps();
    void setConfigIps(const std::vector<std::string>& value);


protected:
    std::vector<std::string> configIps_;
    bool configIpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdatePasswordlessConfigRequestBody_H_
