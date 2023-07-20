
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChangeGaussMySqlProxySpecificationRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChangeGaussMySqlProxySpecificationRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TaurusProxyScaleRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChangeGaussMySqlProxySpecificationRequest
    : public ModelBase
{
public:
    ChangeGaussMySqlProxySpecificationRequest();
    virtual ~ChangeGaussMySqlProxySpecificationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeGaussMySqlProxySpecificationRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

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
    /// 
    /// </summary>

    TaurusProxyScaleRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TaurusProxyScaleRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string proxyId_;
    bool proxyIdIsSet_;
    TaurusProxyScaleRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeGaussMySqlProxySpecificationRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeGaussMySqlProxySpecificationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChangeGaussMySqlProxySpecificationRequest_H_
