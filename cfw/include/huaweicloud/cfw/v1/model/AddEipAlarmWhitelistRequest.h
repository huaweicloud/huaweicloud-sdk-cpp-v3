
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AddEipAlarmWhitelistRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddEipAlarmWhitelistRequest
    : public ModelBase
{
public:
    AddEipAlarmWhitelistRequest();
    virtual ~AddEipAlarmWhitelistRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddEipAlarmWhitelistRequest members

    /// <summary>
    /// 
    /// </summary>

    AddEipAlarmWhitelistRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddEipAlarmWhitelistRequestBody& value);


protected:
    AddEipAlarmWhitelistRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddEipAlarmWhitelistRequest& dereference_from_shared_ptr(std::shared_ptr<AddEipAlarmWhitelistRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistRequest_H_
