
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateStreamForbiddenRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateStreamForbiddenRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/StreamForbiddenSetting.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateStreamForbiddenRequest
    : public ModelBase
{
public:
    CreateStreamForbiddenRequest();
    virtual ~CreateStreamForbiddenRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateStreamForbiddenRequest members

    /// <summary>
    /// 
    /// </summary>

    StreamForbiddenSetting getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const StreamForbiddenSetting& value);


protected:
    StreamForbiddenSetting body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateStreamForbiddenRequest& dereference_from_shared_ptr(std::shared_ptr<CreateStreamForbiddenRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateStreamForbiddenRequest_H_
