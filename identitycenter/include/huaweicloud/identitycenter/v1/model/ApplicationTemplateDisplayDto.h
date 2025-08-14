
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationTemplateDisplayDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationTemplateDisplayDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/DisplayDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序模板显示信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ApplicationTemplateDisplayDto
    : public ModelBase
{
public:
    ApplicationTemplateDisplayDto();
    virtual ~ApplicationTemplateDisplayDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicationTemplateDisplayDto members

    /// <summary>
    /// 应用程序Id,以app-为前缀
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DisplayDto getDisplay() const;
    bool displayIsSet() const;
    void unsetdisplay();
    void setDisplay(const DisplayDto& value);

    /// <summary>
    /// 应用程序类型
    /// </summary>

    std::string getApplicationType() const;
    bool applicationTypeIsSet() const;
    void unsetapplicationType();
    void setApplicationType(const std::string& value);


protected:
    std::string applicationId_;
    bool applicationIdIsSet_;
    DisplayDto display_;
    bool displayIsSet_;
    std::string applicationType_;
    bool applicationTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationTemplateDisplayDto_H_
