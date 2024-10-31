
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAclRuleRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAclRuleRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/AddRuleAclDto.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  AddAclRuleRequest
    : public ModelBase
{
public:
    AddAclRuleRequest();
    virtual ~AddAclRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddAclRuleRequest members

    /// <summary>
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防火墙id，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddRuleAclDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddRuleAclDto& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    AddRuleAclDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddAclRuleRequest& dereference_from_shared_ptr(std::shared_ptr<AddAclRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAclRuleRequest_H_
