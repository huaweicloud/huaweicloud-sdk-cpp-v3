
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ValidateConfigurationNameResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ValidateConfigurationNameResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ValidateConfigurationNameResponse
    : public ModelBase, public HttpResponse
{
public:
    ValidateConfigurationNameResponse();
    virtual ~ValidateConfigurationNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateConfigurationNameResponse members

    /// <summary>
    /// **参数解释：** 参数组名称是否存在。 **取值范围：** - true：参数组名称存在。 - false：参数组名称不存在。
    /// </summary>

    bool isIsExisted() const;
    bool isExistedIsSet() const;
    void unsetisExisted();
    void setIsExisted(bool value);


protected:
    bool isExisted_;
    bool isExistedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ValidateConfigurationNameResponse_H_
