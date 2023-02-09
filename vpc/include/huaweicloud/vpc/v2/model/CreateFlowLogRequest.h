
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateFlowLogReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateFlowLogRequest
    : public ModelBase
{
public:
    CreateFlowLogRequest();
    virtual ~CreateFlowLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateFlowLogRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateFlowLogReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateFlowLogReqBody& value);


protected:
    CreateFlowLogReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateFlowLogRequest& dereference_from_shared_ptr(std::shared_ptr<CreateFlowLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogRequest_H_
