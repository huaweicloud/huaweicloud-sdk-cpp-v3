
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HostHeaderInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HostHeaderInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  HostHeaderInfo
    : public ModelBase
{
public:
    HostHeaderInfo();
    virtual ~HostHeaderInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HostHeaderInfo members

    /// <summary>
    /// 主机
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);


protected:
    std::string host_;
    bool hostIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HostHeaderInfo_H_
