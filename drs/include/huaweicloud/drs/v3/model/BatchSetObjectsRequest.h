
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetObjectsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetObjectsRequest_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/BatchUpdateDatabaseObjectReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchSetObjectsRequest
    : public ModelBase
{
public:
    BatchSetObjectsRequest();
    virtual ~BatchSetObjectsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchSetObjectsRequest members

    /// <summary>
    /// 请求语言类型
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchUpdateDatabaseObjectReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchUpdateDatabaseObjectReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchUpdateDatabaseObjectReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchSetObjectsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchSetObjectsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetObjectsRequest_H_
