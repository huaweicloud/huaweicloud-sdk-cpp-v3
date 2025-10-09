
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvaliableZoneRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvaliableZoneRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetAvaliableZoneRequest
    : public ModelBase
{
public:
    GetAvaliableZoneRequest();
    virtual ~GetAvaliableZoneRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAvaliableZoneRequest members

    /// <summary>
    /// **参数解释**： 该参数用于按所在区域显示可用区名称 **取值范围**： - zh-cn: 显示中文名称，例如：“可用区1” - en-us: 显示英文名称，例如：“AZ1”
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
    GetAvaliableZoneRequest& dereference_from_shared_ptr(std::shared_ptr<GetAvaliableZoneRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvaliableZoneRequest_H_
