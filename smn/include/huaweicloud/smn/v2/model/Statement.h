
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_Statement_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_Statement_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  Statement
    : public ModelBase
{
public:
    Statement();
    virtual ~Statement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Statement members

    /// <summary>
    /// Statement语句的ID。 Statement语句ID必须是唯一的，例如statement01、statement02。
    /// </summary>

    std::string getSid() const;
    bool sidIsSet() const;
    void unsetsid();
    void setSid(const std::string& value);

    /// <summary>
    /// Statement语句的效果。“Allow”或者“Deny”。
    /// </summary>

    std::string getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(const std::string& value);

    /// <summary>
    /// Statement语句作用的对象。 目前支持“CSP”、“OrgPath”和“Service”三类对象。  “CSP”对象指的是其他用户，可以作用于多个用户。  “OrgPath”对象指的是用户组织路径，可以作用于多个组织路径。  “Service”对象指的是云服务，可以作用于多个云服务。  Principal元素和NotPrincipal元素两者任选其一。选定后， “CSP”对象填写内容的格式为urn:csp:iam::domainId:root或“\\*”，其中domainId为其他用户的“账号ID”，“\\*”指作用于所有人。  “OrgPath”对象填写内容的格式为{orgId}/{rootOuId}/{OuId}。  “Service”对象填写内容的格式为小写的云服务名称缩写。
    /// </summary>

    std::string getPrincipal() const;
    bool principalIsSet() const;
    void unsetprincipal();
    void setPrincipal(const std::string& value);

    /// <summary>
    /// NotPrincipal：Statement语句排除作用的对象。  目前支持“CSP”、“OrgPath”和“Service”三类对象。  “CSP”对象指的是其他用户，可以作用于多个用户。  “OrgPath”对象指的是用户组织路径，可以作用于多个组织路径。  “Service”对象指的是云服务，可以作用于多个云服务。  Principal元素和NotPrincipal元素两者任选其一。选定后， “CSP”对象填写内容的格式为urn:csp:iam::domainId:root或“\\*”，其中domainId为其他用户的“账号ID”，“\\*”指作用于所有人。  “OrgPath”对象填写内容的格式为{orgId}/{rootOuId}/{OuId}。  “Service”对象填写内容的格式为小写的云服务名称缩写。
    /// </summary>

    std::string getNotPrincipal() const;
    bool notPrincipalIsSet() const;
    void unsetnotPrincipal();
    void setNotPrincipal(const std::string& value);

    /// <summary>
    /// Statement语句作用的操作。  允许使用通配符来表示一类操作，例如：SMN:Update*、SMN:Delete*。如果只填写“*”，表示Statement语句作用的操作为该资源支持的所有操作。  Action元素和NotAction元素两者任选其一。  目前支持的操作有：  SMN:UpdateTopic SMN:DeleteTopic SMN:QueryTopicDetail SMN:ListTopicAttributes SMN:UpdateTopicAttribute SMN:DeleteTopicAttributes SMN:DeleteTopicAttributeByName SMN:ListSubscriptionsByTopic SMN:Subscribe SMN:Unsubscribe SMN:Publish
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// Statement语句排除作用的操作。  允许使用通配符来表示一类操作，例如：SMN:Update*、SMN:Delete*。如果只填写“*”，表示Statement语句作用的操作为该资源支持的所有操作。  Action元素和NotAction元素两者任选其一。  目前支持的操作有：  SMN:UpdateTopic  SMN:DeleteTopic  SMN:QueryTopicDetail  SMN:ListTopicAttributes  SMN:UpdateTopicAttribute  SMN:DeleteTopicAttributes  SMN:DeleteTopicAttributeByName  SMN:ListSubscriptionsByTopic  SMN:Subscribe  SMN:Unsubscribe  SMN:Publish
    /// </summary>

    std::string getNotAction() const;
    bool notActionIsSet() const;
    void unsetnotAction();
    void setNotAction(const std::string& value);

    /// <summary>
    /// Statement语句作用的主题。  Resource和NotResource两者任选其一。选定后，填写内容为主题URN。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// Statement语句排除作用的主题。  Resource和NotResource两者任选其一。选定后，填写内容为主题URN。
    /// </summary>

    std::string getNotResource() const;
    bool notResourceIsSet() const;
    void unsetnotResource();
    void setNotResource(const std::string& value);


protected:
    std::string sid_;
    bool sidIsSet_;
    std::string effect_;
    bool effectIsSet_;
    std::string principal_;
    bool principalIsSet_;
    std::string notPrincipal_;
    bool notPrincipalIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string notAction_;
    bool notActionIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    std::string notResource_;
    bool notResourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_Statement_H_
