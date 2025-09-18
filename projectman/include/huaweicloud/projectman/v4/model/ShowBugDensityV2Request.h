
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugDensityV2Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugDensityV2Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/MetricRequestV2.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowBugDensityV2Request
    : public ModelBase
{
public:
    ShowBugDensityV2Request();
    virtual ~ShowBugDensityV2Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBugDensityV2Request members

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

    MetricRequestV2 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MetricRequestV2& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    MetricRequestV2 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBugDensityV2Request& dereference_from_shared_ptr(std::shared_ptr<ShowBugDensityV2Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugDensityV2Request_H_
