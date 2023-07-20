
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsSlowlogDetailsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsSlowlogDetailsRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/LtsLogSlowQueryRequest.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListLtsSlowlogDetailsRequest
    : public ModelBase
{
public:
    ListLtsSlowlogDetailsRequest();
    virtual ~ListLtsSlowlogDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListLtsSlowlogDetailsRequest members

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

    LtsLogSlowQueryRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LtsLogSlowQueryRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    LtsLogSlowQueryRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListLtsSlowlogDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ListLtsSlowlogDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsSlowlogDetailsRequest_H_
