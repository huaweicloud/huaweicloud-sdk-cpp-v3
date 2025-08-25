
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotReleaseRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotReleaseRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/CreateReleaseReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateAutopilotReleaseRequest
    : public ModelBase
{
public:
    CreateAutopilotReleaseRequest();
    virtual ~CreateAutopilotReleaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAutopilotReleaseRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateReleaseReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateReleaseReqBody& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    CreateReleaseReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAutopilotReleaseRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAutopilotReleaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotReleaseRequest_H_
