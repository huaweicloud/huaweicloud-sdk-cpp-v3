
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotChartsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotChartsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ChartResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotChartsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutopilotChartsResponse();
    virtual ~ListAutopilotChartsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotChartsResponse members

    /// <summary>
    /// 模板列表
    /// </summary>

    std::vector<ChartResp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ChartResp>& value);


protected:
    std::vector<ChartResp> body_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotChartsResponse_H_
