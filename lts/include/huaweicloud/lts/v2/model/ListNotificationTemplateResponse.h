
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplateResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplateResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListNotificationTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNotificationTemplateResponse();
    virtual ~ListNotificationTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNotificationTemplateResponse members

    /// <summary>
    /// 为一个html文本，需要进行相应的解析后展示
    /// </summary>

    std::string getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const std::string& value);


protected:
    std::string template_;
    bool templateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplateResponse_H_
