
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_UpdatePredefineTagsRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_UpdatePredefineTagsRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/ModifyPrefineTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  UpdatePredefineTagsRequest
    : public ModelBase
{
public:
    UpdatePredefineTagsRequest();
    virtual ~UpdatePredefineTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePredefineTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    ModifyPrefineTag getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyPrefineTag& value);


protected:
    ModifyPrefineTag body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePredefineTagsRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePredefineTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_UpdatePredefineTagsRequest_H_
