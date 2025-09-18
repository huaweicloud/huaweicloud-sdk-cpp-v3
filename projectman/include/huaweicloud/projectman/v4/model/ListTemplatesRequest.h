
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListTemplatesRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListTemplatesRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListTemplatesRequest
    : public ModelBase
{
public:
    ListTemplatesRequest();
    virtual ~ListTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplatesRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项类型id
    /// </summary>

    std::string getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string trackerId_;
    bool trackerIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListTemplatesRequest_H_
