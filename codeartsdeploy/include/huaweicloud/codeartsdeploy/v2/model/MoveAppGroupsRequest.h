
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppGroupsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppGroupsRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/MoveAppGroupsRequestBody.h>
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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  MoveAppGroupsRequest
    : public ModelBase
{
public:
    MoveAppGroupsRequest();
    virtual ~MoveAppGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveAppGroupsRequest members

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

    MoveAppGroupsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MoveAppGroupsRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    MoveAppGroupsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    MoveAppGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<MoveAppGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppGroupsRequest_H_
