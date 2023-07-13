
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTimeLineTrafficStatisticsRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTimeLineTrafficStatisticsRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/TimelineTrafficStatisticsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListTimeLineTrafficStatisticsRequest
    : public ModelBase
{
public:
    ListTimeLineTrafficStatisticsRequest();
    virtual ~ListTimeLineTrafficStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTimeLineTrafficStatisticsRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。  缺省值：None  最小长度：30  最大长度：30
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 时区
    /// </summary>

    std::string getTimezone() const;
    bool timezoneIsSet() const;
    void unsettimezone();
    void setTimezone(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TimelineTrafficStatisticsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TimelineTrafficStatisticsRequestBody& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string timezone_;
    bool timezoneIsSet_;
    TimelineTrafficStatisticsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTimeLineTrafficStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTimeLineTrafficStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTimeLineTrafficStatisticsRequest_H_
