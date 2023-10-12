
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/QueryLtsStructLogParamsNew.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  ListStructuredLogsWithTimeRangeRequest
    : public ModelBase
{
public:
    ListStructuredLogsWithTimeRangeRequest();
    virtual ~ListStructuredLogsWithTimeRangeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStructuredLogsWithTimeRangeRequest members

    /// <summary>
    /// 日志流id，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）。
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

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

    QueryLtsStructLogParamsNew getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryLtsStructLogParamsNew& value);


protected:
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    QueryLtsStructLogParamsNew body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStructuredLogsWithTimeRangeRequest& dereference_from_shared_ptr(std::shared_ptr<ListStructuredLogsWithTimeRangeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeRequest_H_
