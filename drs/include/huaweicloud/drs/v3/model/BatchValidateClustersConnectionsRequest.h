
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateClustersConnectionsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateClustersConnectionsRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/BatchSpecialTestConnectionReq.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchValidateClustersConnectionsRequest
    : public ModelBase
{
public:
    BatchValidateClustersConnectionsRequest();
    virtual ~BatchValidateClustersConnectionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchValidateClustersConnectionsRequest members

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

    BatchSpecialTestConnectionReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchSpecialTestConnectionReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchSpecialTestConnectionReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchValidateClustersConnectionsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchValidateClustersConnectionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateClustersConnectionsRequest_H_
