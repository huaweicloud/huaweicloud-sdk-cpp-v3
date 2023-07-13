
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashboardGroupRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashboardGroupRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/CreateDashboardGroupReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateDashboardGroupRequest
    : public ModelBase
{
public:
    CreateDashboardGroupRequest();
    virtual ~CreateDashboardGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDashboardGroupRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。 最小长度：30 最大长度：30
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateDashboardGroupReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateDashboardGroupReq& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    CreateDashboardGroupReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDashboardGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDashboardGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashboardGroupRequest_H_
