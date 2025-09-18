
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ShowProjectWorkHoursResponseBody_work_hours.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectWorkHoursResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectWorkHoursResponse();
    virtual ~ListProjectWorkHoursResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectWorkHoursResponse members

    /// <summary>
    /// 工时列表
    /// </summary>

    std::vector<ShowProjectWorkHoursResponseBody_work_hours>& getWorkHours();
    bool workHoursIsSet() const;
    void unsetworkHours();
    void setWorkHours(const std::vector<ShowProjectWorkHoursResponseBody_work_hours>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ShowProjectWorkHoursResponseBody_work_hours> workHours_;
    bool workHoursIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursResponse_H_
