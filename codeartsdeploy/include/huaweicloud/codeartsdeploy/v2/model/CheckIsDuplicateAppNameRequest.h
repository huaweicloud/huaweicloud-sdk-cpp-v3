
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckIsDuplicateAppNameRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckIsDuplicateAppNameRequest_H_


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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CheckIsDuplicateAppNameRequest
    : public ModelBase
{
public:
    CheckIsDuplicateAppNameRequest();
    virtual ~CheckIsDuplicateAppNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckIsDuplicateAppNameRequest members

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckIsDuplicateAppNameRequest& dereference_from_shared_ptr(std::shared_ptr<CheckIsDuplicateAppNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckIsDuplicateAppNameRequest_H_
