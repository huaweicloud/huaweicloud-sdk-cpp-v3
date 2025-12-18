
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCtlRecordsOfHisMeetingRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCtlRecordsOfHisMeetingRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchCtlRecordsOfHisMeetingRequest
    : public ModelBase
{
public:
    SearchCtlRecordsOfHisMeetingRequest();
    virtual ~SearchCtlRecordsOfHisMeetingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchCtlRecordsOfHisMeetingRequest members

    /// <summary>
    /// 会议UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 查询偏移量。默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询数量。默认值20，最大500条。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 用户的UUID。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 标识是否为第三方portal过来的请求。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getXAuthorizationType() const;
    bool xAuthorizationTypeIsSet() const;
    void unsetxAuthorizationType();
    void setXAuthorizationType(const std::string& value);

    /// <summary>
    /// 用于区分到哪个HCSO站点鉴权。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getXSiteId() const;
    bool xSiteIdIsSet() const;
    void unsetxSiteId();
    void setXSiteId(const std::string& value);

    /// <summary>
    /// 语言。默认简体中文。 - zh-CN: 简体中文。 - en-US: 美国英文。
    /// </summary>

    std::string getAcceptLanguage() const;
    bool acceptLanguageIsSet() const;
    void unsetacceptLanguage();
    void setAcceptLanguage(const std::string& value);


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string xAuthorizationType_;
    bool xAuthorizationTypeIsSet_;
    std::string xSiteId_;
    bool xSiteIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchCtlRecordsOfHisMeetingRequest& dereference_from_shared_ptr(std::shared_ptr<SearchCtlRecordsOfHisMeetingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCtlRecordsOfHisMeetingRequest_H_
