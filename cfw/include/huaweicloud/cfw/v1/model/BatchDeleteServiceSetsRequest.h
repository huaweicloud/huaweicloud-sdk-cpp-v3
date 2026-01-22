
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceSetsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceSetsRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/BatchDeleteServiceSetsDto.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  BatchDeleteServiceSetsRequest
    : public ModelBase
{
public:
    BatchDeleteServiceSetsRequest();
    virtual ~BatchDeleteServiceSetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteServiceSetsRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteServiceSetsDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteServiceSetsDto& value);


protected:
    BatchDeleteServiceSetsDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteServiceSetsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteServiceSetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceSetsRequest_H_
