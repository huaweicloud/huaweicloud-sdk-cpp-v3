
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UnbindLtsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UnbindLtsConfigRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/InstanceDeleteLtsConfigOption.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UnbindLtsConfigRequestBody
    : public ModelBase
{
public:
    UnbindLtsConfigRequestBody();
    virtual ~UnbindLtsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnbindLtsConfigRequestBody members

    /// <summary>
    /// **参数解释**: 解除关联的实例日志列表。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<InstanceDeleteLtsConfigOption>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<InstanceDeleteLtsConfigOption>& value);


protected:
    std::vector<InstanceDeleteLtsConfigOption> list_;
    bool listIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UnbindLtsConfigRequestBody_H_
