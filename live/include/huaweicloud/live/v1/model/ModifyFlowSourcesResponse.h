
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/FlowSource.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyFlowSourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyFlowSourcesResponse();
    virtual ~ModifyFlowSourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyFlowSourcesResponse members

    /// <summary>
    /// 流id
    /// </summary>

    std::string getFlowId() const;
    bool flowIdIsSet() const;
    void unsetflowId();
    void setFlowId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FlowSource getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const FlowSource& value);


protected:
    std::string flowId_;
    bool flowIdIsSet_;
    FlowSource source_;
    bool sourceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesResponse_H_
