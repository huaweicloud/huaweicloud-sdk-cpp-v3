
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationTemplatesResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationTemplatesResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ApplicationTemplateDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListApplicationTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApplicationTemplatesResponse();
    virtual ~ListApplicationTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApplicationTemplatesResponse members

    /// <summary>
    /// 应用程序模板列表
    /// </summary>

    std::vector<ApplicationTemplateDto>& getApplicationTemplates();
    bool applicationTemplatesIsSet() const;
    void unsetapplicationTemplates();
    void setApplicationTemplates(const std::vector<ApplicationTemplateDto>& value);


protected:
    std::vector<ApplicationTemplateDto> applicationTemplates_;
    bool applicationTemplatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationTemplatesResponse_H_
