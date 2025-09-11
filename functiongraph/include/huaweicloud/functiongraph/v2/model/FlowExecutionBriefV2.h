
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecutionBriefV2_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecutionBriefV2_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FlowExecutionBriefV2
    : public ModelBase
{
public:
    FlowExecutionBriefV2();
    virtual ~FlowExecutionBriefV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowExecutionBriefV2 members

    /// <summary>
    /// 函数流ID
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 函数流执行ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 函数流执行状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 开始时间（格式为yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;,UTC时间）。
    /// </summary>

    utility::datetime getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const utility::datetime& value);

    /// <summary>
    /// 结束时间（格式为yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;,UTC时间）。
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 结束时间（格式为yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;,UTC时间）。
    /// </summary>

    utility::datetime getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 函数流执行urn
    /// </summary>

    std::string getWorkflowUrn() const;
    bool workflowUrnIsSet() const;
    void unsetworkflowUrn();
    void setWorkflowUrn(const std::string& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime beginTime_;
    bool beginTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    utility::datetime lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string workflowUrn_;
    bool workflowUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecutionBriefV2_H_
