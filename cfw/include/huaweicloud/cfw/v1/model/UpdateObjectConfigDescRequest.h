
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateObjectConfigDescRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateObjectConfigDescRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ObjectInfoDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateObjectConfigDescRequest
    : public ModelBase
{
public:
    UpdateObjectConfigDescRequest();
    virtual ~UpdateObjectConfigDescRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateObjectConfigDescRequest members

    /// <summary>
    /// 
    /// </summary>

    ObjectInfoDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ObjectInfoDto& value);


protected:
    ObjectInfoDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateObjectConfigDescRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateObjectConfigDescRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateObjectConfigDescRequest_H_
