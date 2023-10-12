
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteNotificationTemplateBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteNotificationTemplateBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除通知模板参数体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteNotificationTemplateBody
    : public ModelBase
{
public:
    DeleteNotificationTemplateBody();
    virtual ~DeleteNotificationTemplateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteNotificationTemplateBody members

    /// <summary>
    /// 待删除模板名称数组
    /// </summary>

    std::vector<std::string>& getTemplateNames();
    bool templateNamesIsSet() const;
    void unsettemplateNames();
    void setTemplateNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> templateNames_;
    bool templateNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteNotificationTemplateBody_H_
