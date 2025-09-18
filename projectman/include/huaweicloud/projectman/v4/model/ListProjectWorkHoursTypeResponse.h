
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursTypeResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursTypeResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/WorkHoursType.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectWorkHoursTypeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectWorkHoursTypeResponse();
    virtual ~ListProjectWorkHoursTypeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectWorkHoursTypeResponse members

    /// <summary>
    /// 工时类型列表
    /// </summary>

    std::vector<WorkHoursType>& getWorkHoursTypes();
    bool workHoursTypesIsSet() const;
    void unsetworkHoursTypes();
    void setWorkHoursTypes(const std::vector<WorkHoursType>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<WorkHoursType> workHoursTypes_;
    bool workHoursTypesIsSet_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursTypeResponse_H_
