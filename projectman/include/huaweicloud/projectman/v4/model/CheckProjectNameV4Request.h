
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CheckProjectNameV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CheckProjectNameV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CheckProjectNameRequestV4.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CheckProjectNameV4Request
    : public ModelBase
{
public:
    CheckProjectNameV4Request();
    virtual ~CheckProjectNameV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckProjectNameV4Request members

    /// <summary>
    /// 
    /// </summary>

    CheckProjectNameRequestV4 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CheckProjectNameRequestV4& value);


protected:
    CheckProjectNameRequestV4 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckProjectNameV4Request& dereference_from_shared_ptr(std::shared_ptr<CheckProjectNameV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CheckProjectNameV4Request_H_
