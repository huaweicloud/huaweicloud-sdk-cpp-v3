
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyHbaConfRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyHbaConfRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/BeforeHbaConfOption.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AfterHbaConfOption.h>

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
    /// 
    /// </summary>

    BeforeHbaConfOption getBeforeConf() const;
    bool beforeConfIsSet() const;
    void unsetbeforeConf();
    void setBeforeConf(const BeforeHbaConfOption& value);

    /// <summary>
    /// 
    /// </summary>

    AfterHbaConfOption getAfterConf() const;
    bool afterConfIsSet() const;
    void unsetafterConf();
    void setAfterConf(const AfterHbaConfOption& value);


protected:
    BeforeHbaConfOption beforeConf_;
    bool beforeConfIsSet_;
    AfterHbaConfOption afterConf_;
    bool afterConfIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyHbaConfRequestBody_H_
