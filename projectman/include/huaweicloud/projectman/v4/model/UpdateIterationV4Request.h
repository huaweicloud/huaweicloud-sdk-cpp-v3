
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIterationV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIterationV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/UpdateIterationRequestV4.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateIterationV4Request
    : public ModelBase
{
public:
    UpdateIterationV4Request();
    virtual ~UpdateIterationV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIterationV4Request members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 迭代id
    /// </summary>

    int32_t getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    UpdateIterationRequestV4 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateIterationRequestV4& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t iterationId_;
    bool iterationIdIsSet_;
    UpdateIterationRequestV4 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateIterationV4Request& dereference_from_shared_ptr(std::shared_ptr<UpdateIterationV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIterationV4Request_H_
