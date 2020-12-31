
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_AdditionalProperties_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_AdditionalProperties_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 属性值
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  AdditionalProperties
    : public ModelBase
{
public:
    AdditionalProperties();
    virtual ~AdditionalProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AdditionalProperties members

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_AdditionalProperties_H_
