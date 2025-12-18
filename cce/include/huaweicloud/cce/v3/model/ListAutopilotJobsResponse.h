
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotJobsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotJobsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/V2Job.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutopilotJobsResponse();
    virtual ~ListAutopilotJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotJobsResponse members

    /// <summary>
    /// **参数解释**： Job详情列表 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<V2Job>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<V2Job>& value);


protected:
    std::vector<V2Job> body_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotJobsResponse_H_
