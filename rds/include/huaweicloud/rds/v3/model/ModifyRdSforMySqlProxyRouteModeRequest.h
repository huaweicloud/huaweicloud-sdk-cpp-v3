
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyRdSforMySqlProxyRouteModeRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyRdSforMySqlProxyRouteModeRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/ModifyMySqlProxyRouteModeRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyRdSforMySqlProxyRouteModeRequest
    : public ModelBase
{
public:
    ModifyRdSforMySqlProxyRouteModeRequest();
    virtual ~ModifyRdSforMySqlProxyRouteModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyRdSforMySqlProxyRouteModeRequest members

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 数据库代理ID，严格匹配UUID规则。
    /// </summary>

    std::string getProxyId() const;
    bool proxyIdIsSet() const;
    void unsetproxyId();
    void setProxyId(const std::string& value);

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyMySqlProxyRouteModeRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyMySqlProxyRouteModeRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string proxyId_;
    bool proxyIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    ModifyMySqlProxyRouteModeRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyRdSforMySqlProxyRouteModeRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyRdSforMySqlProxyRouteModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyRdSforMySqlProxyRouteModeRequest_H_
