
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcTagsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcTagsRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VPC_V2_EXPORT  ShowVpcTagsRequest
    : public ModelBase
{
public:
    ShowVpcTagsRequest();
    virtual ~ShowVpcTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVpcTagsRequest members

    /// <summary>
    /// 功能说明：虚拟私有云唯一标识 取值范围：合法UUID 约束：ID对应的VPC必须存在
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVpcTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVpcTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcTagsRequest_H_
