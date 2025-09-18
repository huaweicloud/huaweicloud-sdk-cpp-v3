
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowScrumPlansByConditionRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowScrumPlansByConditionRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowScrumPlansByConditionRequest
    : public ModelBase
{
public:
    ShowScrumPlansByConditionRequest();
    virtual ~ShowScrumPlansByConditionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowScrumPlansByConditionRequest members

    /// <summary>
    /// project_id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowScrumPlansByConditionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowScrumPlansByConditionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowScrumPlansByConditionRequest_H_
