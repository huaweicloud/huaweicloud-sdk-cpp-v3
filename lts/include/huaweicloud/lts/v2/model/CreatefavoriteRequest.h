
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreatefavoriteRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreatefavoriteRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreatefavoriteReqbody.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  CreatefavoriteRequest
    : public ModelBase
{
public:
    CreatefavoriteRequest();
    virtual ~CreatefavoriteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatefavoriteRequest members

    /// <summary>
    /// 
    /// </summary>

    CreatefavoriteReqbody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatefavoriteReqbody& value);


protected:
    CreatefavoriteReqbody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatefavoriteRequest& dereference_from_shared_ptr(std::shared_ptr<CreatefavoriteRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreatefavoriteRequest_H_
