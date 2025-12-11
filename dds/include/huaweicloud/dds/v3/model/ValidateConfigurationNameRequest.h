
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ValidateConfigurationNameRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ValidateConfigurationNameRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ValidateConfigurationNameRequest
    : public ModelBase
{
public:
    ValidateConfigurationNameRequest();
    virtual ~ValidateConfigurationNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateConfigurationNameRequest members

    /// <summary>
    /// **参数解释：** 参数模板名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ValidateConfigurationNameRequest& dereference_from_shared_ptr(std::shared_ptr<ValidateConfigurationNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ValidateConfigurationNameRequest_H_
