
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateLogtankRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateLogtankRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateLogtankRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateLogtankRequest
    : public ModelBase
{
public:
    CreateLogtankRequest();
    virtual ~CreateLogtankRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLogtankRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateLogtankRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateLogtankRequestBody& value);


protected:
    CreateLogtankRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateLogtankRequest& dereference_from_shared_ptr(std::shared_ptr<CreateLogtankRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateLogtankRequest_H_
