
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectWorkHoursRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectWorkHoursRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/ShowProjectWorkHoursRequestBody.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowProjectWorkHoursRequest
    : public ModelBase
{
public:
    ShowProjectWorkHoursRequest();
    virtual ~ShowProjectWorkHoursRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectWorkHoursRequest members

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

    ShowProjectWorkHoursRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ShowProjectWorkHoursRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    ShowProjectWorkHoursRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowProjectWorkHoursRequest& dereference_from_shared_ptr(std::shared_ptr<ShowProjectWorkHoursRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectWorkHoursRequest_H_
