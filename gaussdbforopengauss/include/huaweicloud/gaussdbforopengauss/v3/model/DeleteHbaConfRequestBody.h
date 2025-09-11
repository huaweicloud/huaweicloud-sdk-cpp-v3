
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteHbaConfRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteHbaConfRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/HbaConfOption.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DeleteHbaConfRequestBody
    : public ModelBase
{
public:
    DeleteHbaConfRequestBody();
    virtual ~DeleteHbaConfRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteHbaConfRequestBody members

    /// <summary>
    /// **参数解释**: 需要删除的hba配置信息。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<HbaConfOption>& getHbaConfs();
    bool hbaConfsIsSet() const;
    void unsethbaConfs();
    void setHbaConfs(const std::vector<HbaConfOption>& value);


protected:
    std::vector<HbaConfOption> hbaConfs_;
    bool hbaConfsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteHbaConfRequestBody_H_
