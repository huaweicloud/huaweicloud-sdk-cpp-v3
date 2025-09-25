
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectWebhookLogsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectWebhookLogsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/WebhookLogExtendDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListProjectWebhookLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectWebhookLogsResponse();
    virtual ~ListProjectWebhookLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectWebhookLogsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<WebhookLogExtendDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<WebhookLogExtendDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<WebhookLogExtendDto> body_;
    bool bodyIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectWebhookLogsResponse_H_
