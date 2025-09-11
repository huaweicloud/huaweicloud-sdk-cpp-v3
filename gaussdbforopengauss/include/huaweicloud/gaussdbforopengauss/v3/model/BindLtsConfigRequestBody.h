
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindLtsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindLtsConfigRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/InstanceSaveLtsConfigOption.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BindLtsConfigRequestBody
    : public ModelBase
{
public:
    BindLtsConfigRequestBody();
    virtual ~BindLtsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindLtsConfigRequestBody members

    /// <summary>
    /// **参数解释**: 下发配置的实例日志列表。列表最大长度为1000。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<InstanceSaveLtsConfigOption>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<InstanceSaveLtsConfigOption>& value);


protected:
    std::vector<InstanceSaveLtsConfigOption> list_;
    bool listIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindLtsConfigRequestBody_H_
