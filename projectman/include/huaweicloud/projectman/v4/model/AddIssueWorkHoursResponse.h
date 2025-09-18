
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/AddIssueWorkHoursResponseBody_added_work_hours.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AddIssueWorkHoursResponse
    : public ModelBase, public HttpResponse
{
public:
    AddIssueWorkHoursResponse();
    virtual ~AddIssueWorkHoursResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddIssueWorkHoursResponse members

    /// <summary>
    /// 已添加的工时列表
    /// </summary>

    std::vector<AddIssueWorkHoursResponseBody_added_work_hours>& getAddedWorkHours();
    bool addedWorkHoursIsSet() const;
    void unsetaddedWorkHours();
    void setAddedWorkHours(const std::vector<AddIssueWorkHoursResponseBody_added_work_hours>& value);


protected:
    std::vector<AddIssueWorkHoursResponseBody_added_work_hours> addedWorkHours_;
    bool addedWorkHoursIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursResponse_H_
