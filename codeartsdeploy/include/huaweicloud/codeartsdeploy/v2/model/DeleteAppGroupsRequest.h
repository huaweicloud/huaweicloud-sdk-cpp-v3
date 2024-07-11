
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeleteAppGroupsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeleteAppGroupsRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeleteAppGroupsRequest
    : public ModelBase
{
public:
    DeleteAppGroupsRequest();
    virtual ~DeleteAppGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAppGroupsRequest members

    /// <summary>
    /// 项目Id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分组Id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAppGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAppGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeleteAppGroupsRequest_H_
