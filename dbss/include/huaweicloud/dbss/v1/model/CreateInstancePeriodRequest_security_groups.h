
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_security_groups_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_security_groups_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateInstancePeriodRequest_security_groups
    : public ModelBase
{
public:
    CreateInstancePeriodRequest_security_groups();
    virtual ~CreateInstancePeriodRequest_security_groups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstancePeriodRequest_security_groups members

    /// <summary>
    /// 云服务器对应的安全组ID，会对创建云服务器中配置的网卡生效
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_security_groups_H_
