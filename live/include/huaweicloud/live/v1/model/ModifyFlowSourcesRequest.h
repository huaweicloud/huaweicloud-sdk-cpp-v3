
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/ModifyFlowSourcesRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyFlowSourcesRequest
    : public ModelBase
{
public:
    ModifyFlowSourcesRequest();
    virtual ~ModifyFlowSourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyFlowSourcesRequest members

    /// <summary>
    /// 流id
    /// </summary>

    std::string getFlowId() const;
    bool flowIdIsSet() const;
    void unsetflowId();
    void setFlowId(const std::string& value);

    /// <summary>
    /// 流源名称
    /// </summary>

    std::string getSourceName() const;
    bool sourceNameIsSet() const;
    void unsetsourceName();
    void setSourceName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyFlowSourcesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyFlowSourcesRequestBody& value);


protected:
    std::string flowId_;
    bool flowIdIsSet_;
    std::string sourceName_;
    bool sourceNameIsSet_;
    ModifyFlowSourcesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyFlowSourcesRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyFlowSourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesRequest_H_
