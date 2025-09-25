
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyHbaConfRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyHbaConfRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ModifyHbaConfRequestBody
    : public ModelBase
{
public:
    ModifyHbaConfRequestBody();
    virtual ~ModifyHbaConfRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyHbaConfRequestBody members

    /// <summary>
    /// **参数解释**: 需要修改的hba配置信息。 **约束限制**: 不涉及。
    /// </summary>

    Object getBeforeConf() const;
    bool beforeConfIsSet() const;
    void unsetbeforeConf();
    void setBeforeConf(const Object& value);

    /// <summary>
    /// **参数解释**: 修改后的hba配置信息。 **约束限制**: 不涉及。
    /// </summary>

    Object getAfterConf() const;
    bool afterConfIsSet() const;
    void unsetafterConf();
    void setAfterConf(const Object& value);


protected:
    Object beforeConf_;
    bool beforeConfIsSet_;
    Object afterConf_;
    bool afterConfIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyHbaConfRequestBody_H_
