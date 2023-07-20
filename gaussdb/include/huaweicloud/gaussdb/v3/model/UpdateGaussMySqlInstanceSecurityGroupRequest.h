
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateGaussMySqlInstanceSecurityGroupRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateGaussMySqlInstanceSecurityGroupRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ModifySecurityGroupRequest.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateGaussMySqlInstanceSecurityGroupRequest
    : public ModelBase
{
public:
    UpdateGaussMySqlInstanceSecurityGroupRequest();
    virtual ~UpdateGaussMySqlInstanceSecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateGaussMySqlInstanceSecurityGroupRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 租户在某一project下的实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifySecurityGroupRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifySecurityGroupRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    ModifySecurityGroupRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateGaussMySqlInstanceSecurityGroupRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateGaussMySqlInstanceSecurityGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateGaussMySqlInstanceSecurityGroupRequest_H_
