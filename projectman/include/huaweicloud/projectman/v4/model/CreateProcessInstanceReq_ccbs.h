
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_ccbs_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_ccbs_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProcessInstanceReq_ccbs
    : public ModelBase
{
public:
    CreateProcessInstanceReq_ccbs();
    virtual ~CreateProcessInstanceReq_ccbs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProcessInstanceReq_ccbs members

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_ccbs_H_
