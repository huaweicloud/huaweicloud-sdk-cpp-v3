
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ListPackageProductsRequest_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ListPackageProductsRequest_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  ListPackageProductsRequest
    : public ModelBase
{
public:
    ListPackageProductsRequest();
    virtual ~ListPackageProductsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPackageProductsRequest members

    /// <summary>
    /// **参数解释**： 参数表示用户的语言/所在区域。根据 locale 参数，系统会返回适合该语言/区域的套餐包名称。 **约束限制：** 不涉及 **取值范围**： - zh-cn: 显示中文名称，例如：“Autopilot 通用型 1,000 核时CPU月包” - en-us: 显示英文名称，例如：“Autopilot General Computing 1,000 vCPU-hours CPU monthly package”  **默认取值：** zh-cn
    /// </summary>

    std::string getLocale() const;
    bool localeIsSet() const;
    void unsetlocale();
    void setLocale(const std::string& value);


protected:
    std::string locale_;
    bool localeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPackageProductsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPackageProductsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ListPackageProductsRequest_H_
