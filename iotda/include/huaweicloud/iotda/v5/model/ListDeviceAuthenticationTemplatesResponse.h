
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceAuthenticationTemplatesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceAuthenticationTemplatesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/AuthenticationTemplateSimple.h>
#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDeviceAuthenticationTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDeviceAuthenticationTemplatesResponse();
    virtual ~ListDeviceAuthenticationTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDeviceAuthenticationTemplatesResponse members

    /// <summary>
    /// **参数说明**：鉴权模板详情列表。
    /// </summary>

    std::vector<AuthenticationTemplateSimple>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<AuthenticationTemplateSimple>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<AuthenticationTemplateSimple> templates_;
    bool templatesIsSet_;
    Page page_;
    bool pageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceAuthenticationTemplatesResponse_H_
