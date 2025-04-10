
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResetDrConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResetDrConfigRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重置容灾配置request信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ResetDrConfigRequestBody
    : public ModelBase
{
public:
    ResetDrConfigRequestBody();
    virtual ~ResetDrConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetDrConfigRequestBody members

    /// <summary>
    /// 对端子网IP网段或者IP，多个以英文逗号分割。
    /// </summary>

    std::string getOppositeDataCidr() const;
    bool oppositeDataCidrIsSet() const;
    void unsetoppositeDataCidr();
    void setOppositeDataCidr(const std::string& value);


protected:
    std::string oppositeDataCidr_;
    bool oppositeDataCidrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResetDrConfigRequestBody_H_
