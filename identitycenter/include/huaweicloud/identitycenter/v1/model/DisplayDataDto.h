
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisplayDataDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisplayDataDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序提供商显示信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DisplayDataDto
    : public ModelBase
{
public:
    DisplayDataDto();
    virtual ~DisplayDataDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisplayDataDto members

    /// <summary>
    /// 应用程序提供商描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 应用程序提供商显示名
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 应用程序提供商图标
    /// </summary>

    std::string getIconUrl() const;
    bool iconUrlIsSet() const;
    void unseticonUrl();
    void setIconUrl(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string iconUrl_;
    bool iconUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisplayDataDto_H_
