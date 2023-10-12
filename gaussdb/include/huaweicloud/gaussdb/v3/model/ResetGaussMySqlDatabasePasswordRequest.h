
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetGaussMySqlDatabasePasswordRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetGaussMySqlDatabasePasswordRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ResetDatabasePasswordRequest.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ResetGaussMySqlDatabasePasswordRequest
    : public ModelBase
{
public:
    ResetGaussMySqlDatabasePasswordRequest();
    virtual ~ResetGaussMySqlDatabasePasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetGaussMySqlDatabasePasswordRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResetDatabasePasswordRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResetDatabasePasswordRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    ResetDatabasePasswordRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResetGaussMySqlDatabasePasswordRequest& dereference_from_shared_ptr(std::shared_ptr<ResetGaussMySqlDatabasePasswordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetGaussMySqlDatabasePasswordRequest_H_
