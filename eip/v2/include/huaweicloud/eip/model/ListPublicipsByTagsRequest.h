
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/ListPublicipsByTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  ListPublicipsByTagsRequest
    : public ModelBase
{
public:
    ListPublicipsByTagsRequest();
    virtual ~ListPublicipsByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicipsByTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    ListPublicipsByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListPublicipsByTagsRequestBody& value);


protected:
    ListPublicipsByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPublicipsByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPublicipsByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsRequest_H_
