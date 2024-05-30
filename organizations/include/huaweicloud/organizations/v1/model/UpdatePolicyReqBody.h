
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdatePolicyReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdatePolicyReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdatePolicy 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UpdatePolicyReqBody
    : public ModelBase
{
public:
    UpdatePolicyReqBody();
    virtual ~UpdatePolicyReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePolicyReqBody members

    /// <summary>
    /// 要添加到新策略的策略文本内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 要分配给策略的可选说明。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 要分配给策略的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string content_;
    bool contentIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdatePolicyReqBody_H_
