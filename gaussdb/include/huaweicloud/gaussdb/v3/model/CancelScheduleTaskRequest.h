
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelScheduleTaskRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelScheduleTaskRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/CancelScheduleTask.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CancelScheduleTaskRequest
    : public ModelBase
{
public:
    CancelScheduleTaskRequest();
    virtual ~CancelScheduleTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CancelScheduleTaskRequest members

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

    CancelScheduleTask getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CancelScheduleTask& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    CancelScheduleTask body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CancelScheduleTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CancelScheduleTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelScheduleTaskRequest_H_
