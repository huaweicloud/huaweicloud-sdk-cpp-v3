
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_opinions_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_opinions_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProcessInstanceReq_opinions
    : public ModelBase
{
public:
    CreateProcessInstanceReq_opinions();
    virtual ~CreateProcessInstanceReq_opinions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProcessInstanceReq_opinions members

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 当前责任人
    /// </summary>

    std::string getCurrOwner() const;
    bool currOwnerIsSet() const;
    void unsetcurrOwner();
    void setCurrOwner(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string currOwner_;
    bool currOwnerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_opinions_H_
