
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddEipAlarmWhitelistResponse
    : public ModelBase, public HttpResponse
{
public:
    AddEipAlarmWhitelistResponse();
    virtual ~AddEipAlarmWhitelistResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddEipAlarmWhitelistResponse members

    /// <summary>
    /// **参数解释**： 添加EIP告警白名单响应data **取值范围**： 不涉及
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);


protected:
    Object data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistResponse_H_
