
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchDepartmentByNameResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchDepartmentByNameResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QueryDeptResultDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchDepartmentByNameResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchDepartmentByNameResponse();
    virtual ~SearchDepartmentByNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchDepartmentByNameResponse members

    /// <summary>
    /// 部门信息
    /// </summary>

    std::vector<QueryDeptResultDTO>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<QueryDeptResultDTO>& value);


protected:
    std::vector<QueryDeptResultDTO> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchDepartmentByNameResponse_H_
