
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRiskInfoResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRiskInfoResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ShowRiskInfoEngineRiskDesc.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRiskInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRiskInfoResponse();
    virtual ~ShowRiskInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRiskInfoResponse members

    /// <summary>
    /// 风险版本信息
    /// </summary>

    std::vector<ShowRiskInfoEngineRiskDesc>& getRisks();
    bool risksIsSet() const;
    void unsetrisks();
    void setRisks(const std::vector<ShowRiskInfoEngineRiskDesc>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<ShowRiskInfoEngineRiskDesc> risks_;
    bool risksIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRiskInfoResponse_H_
