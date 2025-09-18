
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateProjectV4RequestBody.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProjectV4Request
    : public ModelBase
{
public:
    CreateProjectV4Request();
    virtual ~CreateProjectV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectV4Request members

    /// <summary>
    /// 
    /// </summary>

    CreateProjectV4RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateProjectV4RequestBody& value);


protected:
    CreateProjectV4RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateProjectV4Request& dereference_from_shared_ptr(std::shared_ptr<CreateProjectV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4Request_H_
