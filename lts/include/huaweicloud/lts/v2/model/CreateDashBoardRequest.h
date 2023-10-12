
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashBoardRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashBoardRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/CreateDashBoardReqBody.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateDashBoardRequest
    : public ModelBase
{
public:
    CreateDashBoardRequest();
    virtual ~CreateDashBoardRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDashBoardRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。  最小长度：30  最大长度：30
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateDashBoardReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateDashBoardReqBody& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    CreateDashBoardReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDashBoardRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDashBoardRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashBoardRequest_H_
