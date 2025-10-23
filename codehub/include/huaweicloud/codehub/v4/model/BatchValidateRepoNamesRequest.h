
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateRepoNamesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateRepoNamesRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ValidateRepoNameDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BatchValidateRepoNamesRequest
    : public ModelBase
{
public:
    BatchValidateRepoNamesRequest();
    virtual ~BatchValidateRepoNamesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchValidateRepoNamesRequest members

    /// <summary>
    /// 
    /// </summary>

    ValidateRepoNameDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ValidateRepoNameDto& value);


protected:
    ValidateRepoNameDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchValidateRepoNamesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchValidateRepoNamesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateRepoNamesRequest_H_
