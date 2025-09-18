
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ListProjectWorkHoursRequestBody.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectWorkHoursRequest
    : public ModelBase
{
public:
    ListProjectWorkHoursRequest();
    virtual ~ListProjectWorkHoursRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectWorkHoursRequest members

    /// <summary>
    /// 
    /// </summary>

    ListProjectWorkHoursRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListProjectWorkHoursRequestBody& value);


protected:
    ListProjectWorkHoursRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectWorkHoursRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectWorkHoursRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursRequest_H_
