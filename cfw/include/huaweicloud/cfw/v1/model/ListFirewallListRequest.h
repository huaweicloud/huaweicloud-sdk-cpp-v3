
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFirewallListRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFirewallListRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/QueryFireWallInstanceDto.h>
#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ListFirewallListRequest
    : public ModelBase
{
public:
    ListFirewallListRequest();
    virtual ~ListFirewallListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFirewallListRequest members

    /// <summary>
    /// 企业项目id，用户支持企业项目后，由企业项目生成的id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryFireWallInstanceDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryFireWallInstanceDto& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    QueryFireWallInstanceDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFirewallListRequest& dereference_from_shared_ptr(std::shared_ptr<ListFirewallListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFirewallListRequest_H_
