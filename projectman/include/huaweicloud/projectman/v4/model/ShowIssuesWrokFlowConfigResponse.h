
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssuesWrokFlowConfigResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssuesWrokFlowConfigResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ScrumStatusFlowVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIssuesWrokFlowConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIssuesWrokFlowConfigResponse();
    virtual ~ShowIssuesWrokFlowConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIssuesWrokFlowConfigResponse members

    /// <summary>
    /// 流转数据
    /// </summary>

    std::vector<ScrumStatusFlowVo>& getWorkflows();
    bool workflowsIsSet() const;
    void unsetworkflows();
    void setWorkflows(const std::vector<ScrumStatusFlowVo>& value);


protected:
    std::vector<ScrumStatusFlowVo> workflows_;
    bool workflowsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssuesWrokFlowConfigResponse_H_
