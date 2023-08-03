
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DataIpRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DataIpRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  DataIpRequest
    : public ModelBase
{
public:
    DataIpRequest();
    virtual ~DataIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DataIpRequest members

    /// <summary>
    /// 内网ip
    /// </summary>

    std::string getNewIp() const;
    bool newIpIsSet() const;
    void unsetnewIp();
    void setNewIp(const std::string& value);


protected:
    std::string newIp_;
    bool newIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DataIpRequest_H_
