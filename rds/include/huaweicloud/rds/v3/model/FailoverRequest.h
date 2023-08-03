
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 强制倒换请求参数对象。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  FailoverRequest
    : public ModelBase
{
public:
    FailoverRequest();
    virtual ~FailoverRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FailoverRequest members

    /// <summary>
    /// 是否强制倒换；true：强制倒换；false和默认null为不强制。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);


protected:
    bool force_;
    bool forceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverRequest_H_
