
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowDetailRespBody_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowDetailRespBody_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/FlowOutput.h>
#include <huaweicloud/live/v1/model/FlowSource.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 响应流详情
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  FlowDetailRespBody
    : public ModelBase
{
public:
    FlowDetailRespBody();
    virtual ~FlowDetailRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowDetailRespBody members

    /// <summary>
    /// 流名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 入流信息
    /// </summary>

    std::vector<FlowSource>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<FlowSource>& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 流id
    /// </summary>

    std::string getFlowId() const;
    bool flowIdIsSet() const;
    void unsetflowId();
    void setFlowId(const std::string& value);

    /// <summary>
    /// 流输出信息
    /// </summary>

    std::vector<FlowOutput>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<FlowOutput>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::vector<FlowSource> sources_;
    bool sourcesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string flowId_;
    bool flowIdIsSet_;
    std::vector<FlowOutput> outputs_;
    bool outputsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowDetailRespBody_H_
