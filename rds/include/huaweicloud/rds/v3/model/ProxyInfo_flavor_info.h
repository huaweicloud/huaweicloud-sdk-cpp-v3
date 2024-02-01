
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_flavor_info_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_flavor_info_H_


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
/// 数据库代理规格信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ProxyInfo_flavor_info
    : public ModelBase
{
public:
    ProxyInfo_flavor_info();
    virtual ~ProxyInfo_flavor_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyInfo_flavor_info members

    /// <summary>
    /// 规格类型。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 规格码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);


protected:
    std::string groupType_;
    bool groupTypeIsSet_;
    std::string code_;
    bool codeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_flavor_info_H_
