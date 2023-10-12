
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchCheckResultsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchCheckResultsRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/BatchQueryPrecheckResultReq.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchCheckResultsRequest
    : public ModelBase
{
public:
    BatchCheckResultsRequest();
    virtual ~BatchCheckResultsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCheckResultsRequest members

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

    BatchQueryPrecheckResultReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchQueryPrecheckResultReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchQueryPrecheckResultReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCheckResultsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCheckResultsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchCheckResultsRequest_H_
