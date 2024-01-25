
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ServerlessInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ServerlessInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ServerlessInfo
    : public ModelBase
{
public:
    ServerlessInfo();
    virtual ~ServerlessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerlessInfo members

    /// <summary>
    /// Serverless型实例的最小算力，单位RCU，范围0.5~8，步进0.5。
    /// </summary>

    std::string getMinCap() const;
    bool minCapIsSet() const;
    void unsetminCap();
    void setMinCap(const std::string& value);

    /// <summary>
    /// Serverless型实例的最大算力，单位RCU，范围0.5~8，步进0.5。
    /// </summary>

    std::string getMaxCap() const;
    bool maxCapIsSet() const;
    void unsetmaxCap();
    void setMaxCap(const std::string& value);


protected:
    std::string minCap_;
    bool minCapIsSet_;
    std::string maxCap_;
    bool maxCapIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ServerlessInfo_H_
