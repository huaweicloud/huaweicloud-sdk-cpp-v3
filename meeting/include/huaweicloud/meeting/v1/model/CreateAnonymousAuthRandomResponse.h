
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAnonymousAuthRandomResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAnonymousAuthRandomResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateAnonymousAuthRandomResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAnonymousAuthRandomResponse();
    virtual ~CreateAnonymousAuthRandomResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAnonymousAuthRandomResponse members

    /// <summary>
    /// 下一跳URL。
    /// </summary>

    std::string getSiteUrl() const;
    bool siteUrlIsSet() const;
    void unsetsiteUrl();
    void setSiteUrl(const std::string& value);

    /// <summary>
    /// 鉴权随机数。
    /// </summary>

    std::string getRandom() const;
    bool randomIsSet() const;
    void unsetrandom();
    void setRandom(const std::string& value);


protected:
    std::string siteUrl_;
    bool siteUrlIsSet_;
    std::string random_;
    bool randomIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAnonymousAuthRandomResponse_H_
