
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowOutputRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowOutputRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/UpdateFlowOutputRequestBody.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyFlowOutputRequest
    : public ModelBase
{
public:
    ModifyFlowOutputRequest();
    virtual ~ModifyFlowOutputRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyFlowOutputRequest members

    /// <summary>
    /// 流id
    /// </summary>

    std::string getFlowId() const;
    bool flowIdIsSet() const;
    void unsetflowId();
    void setFlowId(const std::string& value);

    /// <summary>
    /// 输出名称
    /// </summary>

    std::string getOutputName() const;
    bool outputNameIsSet() const;
    void unsetoutputName();
    void setOutputName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateFlowOutputRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateFlowOutputRequestBody& value);


protected:
    std::string flowId_;
    bool flowIdIsSet_;
    std::string outputName_;
    bool outputNameIsSet_;
    UpdateFlowOutputRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyFlowOutputRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyFlowOutputRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowOutputRequest_H_
