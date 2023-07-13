
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplatesResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplatesResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/NotificationTemplate.h>
#include <vector>

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
class HUAWEICLOUD_LTS_V2_EXPORT  ListNotificationTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNotificationTemplatesResponse();
    virtual ~ListNotificationTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListNotificationTemplatesResponse members

    /// <summary>
    /// 模板数组
    /// </summary>

    std::vector<NotificationTemplate>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<NotificationTemplate>& value);


protected:
    std::vector<NotificationTemplate> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplatesResponse_H_
