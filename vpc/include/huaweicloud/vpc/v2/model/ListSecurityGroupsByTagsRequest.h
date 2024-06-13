
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsByTagsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsByTagsRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/ListSecurityGroupsByTagsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ListSecurityGroupsByTagsRequest
    : public ModelBase
{
public:
    ListSecurityGroupsByTagsRequest();
    virtual ~ListSecurityGroupsByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSecurityGroupsByTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    ListSecurityGroupsByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListSecurityGroupsByTagsRequestBody& value);


protected:
    ListSecurityGroupsByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSecurityGroupsByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSecurityGroupsByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsByTagsRequest_H_
