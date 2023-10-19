
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructuredLogsWithTimeRangeResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
    /// 查询结构化日志结果信息。 此处仅为示例，具体参数名称取决于查询的字段。
    /// </summary>

    std::vector<Object>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<Object>& value);


protected:
    std::vector<Object> result_;
    bool resultIsSet_;

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
