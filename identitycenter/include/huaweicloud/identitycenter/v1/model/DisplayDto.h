
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisplayDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisplayDto_H_


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
/// 应用程序显示信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DisplayDto
    : public ModelBase
{
public:
    DisplayDto();
    virtual ~DisplayDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisplayDto members

    /// <summary>
    /// 应用程序描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 应用程序显示名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 应用程序图标
    /// </summary>

    std::string getIcon() const;
    bool iconIsSet() const;
    void unseticon();
    void setIcon(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string icon_;
    bool iconIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisplayDto_H_
