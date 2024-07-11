
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  MoveAppToGroupRequest
    : public ModelBase
{
public:
    MoveAppToGroupRequest();
    virtual ~MoveAppToGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveAppToGroupRequest members

    /// <summary>
    /// 项目Id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MoveAppToGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MoveAppToGroupRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    MoveAppToGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    MoveAppToGroupRequest& dereference_from_shared_ptr(std::shared_ptr<MoveAppToGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupRequest_H_
