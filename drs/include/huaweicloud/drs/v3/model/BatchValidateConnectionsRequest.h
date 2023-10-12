
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateConnectionsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateConnectionsRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/BatchTestConnectionReq.h>
#include <string>

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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchValidateConnectionsRequest
    : public ModelBase
{
public:
    BatchValidateConnectionsRequest();
    virtual ~BatchValidateConnectionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchValidateConnectionsRequest members

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

    BatchTestConnectionReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchTestConnectionReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchTestConnectionReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchValidateConnectionsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchValidateConnectionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateConnectionsRequest_H_
