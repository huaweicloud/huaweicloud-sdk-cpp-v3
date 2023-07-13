
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/ListActiveOrHistoryAlarmsRequestBody.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListActiveOrHistoryAlarmsRequest
    : public ModelBase
{
public:
    ListActiveOrHistoryAlarmsRequest();
    virtual ~ListActiveOrHistoryAlarmsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListActiveOrHistoryAlarmsRequest members

    /// <summary>
    /// domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 是活动告警还是历史告警
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 取值为上一页数据的最后一条记录的id(填写上一页数据返回得previous_marker或者next_marker值。)
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 每页数据量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListActiveOrHistoryAlarmsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListActiveOrHistoryAlarmsRequestBody& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    ListActiveOrHistoryAlarmsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListActiveOrHistoryAlarmsRequest& dereference_from_shared_ptr(std::shared_ptr<ListActiveOrHistoryAlarmsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsRequest_H_
