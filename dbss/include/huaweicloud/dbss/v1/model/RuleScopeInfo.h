
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleScopeInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleScopeInfo_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  RuleScopeInfo
    : public ModelBase
{
public:
    RuleScopeInfo();
    virtual ~RuleScopeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleScopeInfo members

    /// <summary>
    /// 审计范围规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 审计范围名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 审计范围动作
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 审计范围规则状态 - OFF：禁用  - ON: 启用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 审计范围例外IP
    /// </summary>

    std::string getExceptionIps() const;
    bool exceptionIpsIsSet() const;
    void unsetexceptionIps();
    void setExceptionIps(const std::string& value);

    /// <summary>
    /// 审计范围规则源IP
    /// </summary>

    std::string getSourceIps() const;
    bool sourceIpsIsSet() const;
    void unsetsourceIps();
    void setSourceIps(const std::string& value);

    /// <summary>
    /// 审计范围源端口
    /// </summary>

    std::string getSourcePorts() const;
    bool sourcePortsIsSet() const;
    void unsetsourcePorts();
    void setSourcePorts(const std::string& value);

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbNames() const;
    bool dbNamesIsSet() const;
    void unsetdbNames();
    void setDbNames(const std::string& value);

    /// <summary>
    /// 数据库用户
    /// </summary>

    std::string getDbUsers() const;
    bool dbUsersIsSet() const;
    void unsetdbUsers();
    void setDbUsers(const std::string& value);

    /// <summary>
    /// 是否全审计
    /// </summary>

    bool isAllAudit() const;
    bool allAuditIsSet() const;
    void unsetallAudit();
    void setAllAudit(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string exceptionIps_;
    bool exceptionIpsIsSet_;
    std::string sourceIps_;
    bool sourceIpsIsSet_;
    std::string sourcePorts_;
    bool sourcePortsIsSet_;
    std::string dbIds_;
    bool dbIdsIsSet_;
    std::string dbNames_;
    bool dbNamesIsSet_;
    std::string dbUsers_;
    bool dbUsersIsSet_;
    bool allAudit_;
    bool allAuditIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleScopeInfo_H_
