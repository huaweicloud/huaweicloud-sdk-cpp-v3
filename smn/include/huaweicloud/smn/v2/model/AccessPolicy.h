
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_AccessPolicy_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_AccessPolicy_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/Statement.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_SMN_V2_EXPORT  AccessPolicy
    : public ModelBase
{
public:
    AccessPolicy();
    virtual ~AccessPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AccessPolicy members

    /// <summary>
    /// 访问策略规范版本。目前只支持“2016-09-07”。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 策略的唯一标识。不能为空。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 访问策略是通过Statement语句来定义的。一个访问策略可包含一条或多条Statement语句。通过Statement语句向其他用户或云服务授权对主题的操作。
    /// </summary>

    std::vector<Statement>& getStatement();
    bool statementIsSet() const;
    void unsetstatement();
    void setStatement(const std::vector<Statement>& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<Statement> statement_;
    bool statementIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_AccessPolicy_H_
