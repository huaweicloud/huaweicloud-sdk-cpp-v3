
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_NotificationTemplate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_NotificationTemplate_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  NotificationTemplate
    : public ModelBase
{
public:
    NotificationTemplate();
    virtual ~NotificationTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NotificationTemplate members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_NotificationTemplate_H_
