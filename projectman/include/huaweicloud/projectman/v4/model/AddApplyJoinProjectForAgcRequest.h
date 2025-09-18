
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddApplyJoinProjectForAgcRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddApplyJoinProjectForAgcRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AddApplyJoinProjectForAgcRequest
    : public ModelBase
{
public:
    AddApplyJoinProjectForAgcRequest();
    virtual ~AddApplyJoinProjectForAgcRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddApplyJoinProjectForAgcRequest members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddApplyJoinProjectForAgcRequest& dereference_from_shared_ptr(std::shared_ptr<AddApplyJoinProjectForAgcRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddApplyJoinProjectForAgcRequest_H_
