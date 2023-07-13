
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <map>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListStructuredLogsWithTimeRangeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStructuredLogsWithTimeRangeResponse();
    virtual ~ListStructuredLogsWithTimeRangeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStructuredLogsWithTimeRangeResponse members

    /// <summary>
    /// 此参数在请求实体中，采用json字符串格式。
    /// </summary>

    std::map<std::string, std::vector<Object>>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::map<std::string, std::vector<Object>>& value);


protected:
    std::map<std::string, std::vector<Object>> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeResponse_H_
