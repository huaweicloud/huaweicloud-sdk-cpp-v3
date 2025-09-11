
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleScopeRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleScopeRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RuleScopeRequest
    : public ModelBase
{
public:
    RuleScopeRequest();
    virtual ~RuleScopeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleScopeRequest members

    /// <summary>
    /// 操作类型，多个用英文,分隔
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 数据库ID，多个用英文逗号分隔，全部传[ALL]
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 数据库名称，多个用英文逗号分隔，全部传[全部数据库]
    /// </summary>

    std::string getDbNames() const;
    bool dbNamesIsSet() const;
    void unsetdbNames();
    void setDbNames(const std::string& value);

    /// <summary>
    /// 数据库账号，多个用英文逗号分隔
    /// </summary>

    std::string getDbUsers() const;
    bool dbUsersIsSet() const;
    void unsetdbUsers();
    void setDbUsers(const std::string& value);

    /// <summary>
    /// 例外IP，多个用英文逗号分隔
    /// </summary>

    std::string getExceptionIps() const;
    bool exceptionIpsIsSet() const;
    void unsetexceptionIps();
    void setExceptionIps(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 源IP，多个用英文逗号分隔
    /// </summary>

    std::string getSourceIps() const;
    bool sourceIpsIsSet() const;
    void unsetsourceIps();
    void setSourceIps(const std::string& value);

    /// <summary>
    /// 源端口，多个用英文逗号分隔
    /// </summary>

    std::string getSourcePorts() const;
    bool sourcePortsIsSet() const;
    void unsetsourcePorts();
    void setSourcePorts(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string dbIds_;
    bool dbIdsIsSet_;
    std::string dbNames_;
    bool dbNamesIsSet_;
    std::string dbUsers_;
    bool dbUsersIsSet_;
    std::string exceptionIps_;
    bool exceptionIpsIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string sourceIps_;
    bool sourceIpsIsSet_;
    std::string sourcePorts_;
    bool sourcePortsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleScopeRequest_H_
