
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ApplyConfigurationEntityRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ApplyConfigurationEntityRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ApplyConfigurationEntityRequestBody
    : public ModelBase
{
public:
    ApplyConfigurationEntityRequestBody();
    virtual ~ApplyConfigurationEntityRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplyConfigurationEntityRequestBody members

    /// <summary>
    /// **参数解释**: 资源ID列表。可通过“查询可应用实例列表”接口获取。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<std::string>& getEntityIds();
    bool entityIdsIsSet() const;
    void unsetentityIds();
    void setEntityIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> entityIds_;
    bool entityIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ApplyConfigurationEntityRequestBody_H_
