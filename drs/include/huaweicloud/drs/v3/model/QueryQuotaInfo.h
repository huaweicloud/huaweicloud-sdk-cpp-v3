
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryQuotaInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryQuotaInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QuotaResource.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryQuotaInfo
    : public ModelBase
{
public:
    QueryQuotaInfo();
    virtual ~QueryQuotaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryQuotaInfo members

    /// <summary>
    /// 
    /// </summary>

    QuotaResource getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const QuotaResource& value);


protected:
    QuotaResource resource_;
    bool resourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryQuotaInfo_H_
