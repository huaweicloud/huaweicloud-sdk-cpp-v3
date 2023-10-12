
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MsdtcHostOption_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MsdtcHostOption_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  MsdtcHostOption
    : public ModelBase
{
public:
    MsdtcHostOption();
    virtual ~MsdtcHostOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MsdtcHostOption members

    /// <summary>
    /// 主机名称 hostname
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// 主机ip
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);


protected:
    std::string hostName_;
    bool hostNameIsSet_;
    std::string ip_;
    bool ipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MsdtcHostOption_H_
