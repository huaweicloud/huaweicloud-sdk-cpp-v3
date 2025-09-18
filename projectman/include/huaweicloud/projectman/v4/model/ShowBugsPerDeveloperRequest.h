
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugsPerDeveloperRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugsPerDeveloperRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/MetricRequest2.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowBugsPerDeveloperRequest
    : public ModelBase
{
public:
    ShowBugsPerDeveloperRequest();
    virtual ~ShowBugsPerDeveloperRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBugsPerDeveloperRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MetricRequest2 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MetricRequest2& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    MetricRequest2 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBugsPerDeveloperRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBugsPerDeveloperRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugsPerDeveloperRequest_H_
