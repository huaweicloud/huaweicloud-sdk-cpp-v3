
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowOrganizationShareResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowOrganizationShareResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ShowOrganizationShareResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOrganizationShareResponse();
    virtual ~ShowOrganizationShareResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOrganizationShareResponse members

    /// <summary>
    /// 如果为\&quot;true\&quot;，则表示启用与组织的共享。默认为\&quot;false\&quot;。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    bool enabled_;
    bool enabledIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ShowOrganizationShareResponse_H_
